#include <fstream>
#include "parsetree.h"
#include "semantics.h"
#include "codegen.h"


// prototypes:
extern FILE *yyin;
extern s_class *current_class;
extern s_function *current_function;
int yylex(); // this is only needed for the --lex option I think.
void main_lex();
void main_tree();
void main_sem();
void main_gen();

// Globals controlling behavior:
bool semantic_checks = false;

// type to represent the user's choice: lexical analysis, tree generation,
// semantic checks, code generation.
enum action {LEX, TREE, SEM, GEN};

// CITE: https://docs.microsoft.com/en-us/troubleshoot/cpp/
//               declare-pointers-to-functions
// DESC: How to declare an array of pointers to functions
void (*functions[])() = {main_lex, main_tree, main_sem, main_gen};

void usage(char **argv, int code = 1)
{
   std::cerr << "Usage: " << argv[0] << " [options] file" << std::endl;
   std::cerr << "Options:" << std::endl <<
"  --help                   Display this usage information" << std::endl <<
"  --lex                    Display the tokens" << std::endl <<
"  --tree                   Show a traversal of the parse tree" << std::endl <<
"  --sem                    Perform semantic checks" << std::endl <<
"  --gen (default)          Generate JVM assembly code" << std::endl;
   std::cerr << "At most one of --lex, --tree, --sem, or --gen may be given."
             << std::endl;
   exit(code);
}

int main(int argc, char **argv)
{
   action act = GEN;
   bool act_given = false;
   std::string filename = "";
   if (argc < 2) usage(argv);

   // process command line arguments
   for (int i = 1; i < argc; i++)
   {
      std::string arg = argv[i];

      // if you give an action, it has to be legit.
      if (   arg.size() >= 2 && arg.substr(0,2) == "--"
          && arg != "--help" && arg != "--lex" && arg != "--tree"
          && arg != "--sem" && arg != "--gen")
      {
         usage(argv);
      }
      // You can only give one action option.
      if (act_given && (   arg == "--lex" || arg == "--tree"
                        || arg == "--sem" || arg == "--geb"))
      {
         usage(argv);
      }
      if (arg == "--help") usage(argv, 0);
      else if (arg == "--lex") act = LEX, act_given = true;
      else if (arg == "--tree") act = TREE, act_given = true;
      else if (arg == "--sem") act = SEM, act_given = true;
      else if (arg == "--gen") act_given = true;
      else act_given = true, filename = arg;
   }

   // error if a filename wasn't given
   if (filename == "") usage(argv);

   // open the file, error if couldn't open.
   yyin = fopen(filename.c_str(), "r");
   if (!yyin)
   {
      std::cout << filename
           << ": no such file or file can't be opened for reading."
           << std::endl;
      exit(1);
   }

   // determine the program_name from the filename
   // (for code generation)
   size_t pos = filename.find_last_of('.');
   program_name = pos == std::string::npos ? filename : filename.substr(0,pos);

   // do the chosen function
   functions[act]();
}

void main_lex()
{
   current_line = 1;
   while (yylex())
   {
      std::cout << *mytok << std::endl;
      delete mytok;
   }
}

void main_tree()
{
   current_line = 1;
   yyparse();
   traverse_tree(top);
}

s_var* find_var_in_class_hierarchy(s_class * c, std::string var)
{
  std::vector<s_var*> locals = c->locals;
  for (size_t i = 0; i < locals.size(); i++)
  {
    // std::cout << "object in class name: " << locals[i]->to_string() << std::endl;
    // std::cout << "var we looking for: " << var << std::endl;

    if (locals[i]->to_string() == var)
      return locals[i];
  }
  if (!c->superclass)
    return nullptr;
  else
    return find_var_in_class_hierarchy(c->superclass, var);
}

s_function * find_function_in_class_hierarchy(s_class* c, std::string func)
// takes a class and a function that should exist in that class (or a parent class)
// returns the semantics function which contains the type of the function
{
  std::map<std::string, s_function*> func_map = c->function_map;
  std::map<std::string, s_function*>::iterator it;
  for (it = std::begin(func_map); it != std::end(func_map); it++)
  {
    // std::cout << func << "::" << it->first << std::endl;

    if (it->first == func)
      return it->second;
  }
  if (!c->superclass)
    return nullptr;
  else
    return find_function_in_class_hierarchy(c->superclass, func);
}

// bool ensure_bool(semantics *a)
// {
//   if (dynamic_cast<semantics_bool_type*>(a))
//     return true;
//   return false;
// }
//
// bool ensure_int(semantics *a)
// {
//   if (dynamic_cast<semantics_int_type*>(a))
//     return true;
//   return false;
// }
//
// bool ensure_double(semantics *a)
// {
//   if (dynamic_cast<semantics_double_type*>(a))
//     return true;
//   return false;
// }
//
bool ensure_same_type(s_type *a, s_type *b)
{
  if (a == b)
    return true;
  return false;
}

semantics* ensure_legal_expression(parse_tree* tree, symtab* scope)
{
  // base case, return semantics type of expressions
  if (tree->tok)
  {
    if (current_class == nullptr && tree->to_string().substr(0, 4) == "THIS")
      semantic_assert(false,
                     "using \'this\' outside of a class.");
    semantics * s = scope->lookup(tree->tok->text);
    // if found in current scope
    if (s != nullptr)
    {
      if (dynamic_cast<s_var*>(s)){
        return dynamic_cast<s_var*>(s)->type;
      }
      else if (dynamic_cast<s_type*>(s)){
        return dynamic_cast<s_type*>(s);
      }
      else if (dynamic_cast<s_function*>(s))
        return dynamic_cast<s_function*>(s)->return_type;
    }
    // otherwise if current class is defined, look for token in class hierarchy
    // currently only looking at functions or vars for field accesses
    else if (current_class != nullptr)
    {
      s_var * var = find_var_in_class_hierarchy(current_class, tree->tok->text);
      if (var != nullptr)
        return var->type;
      s_function * function = find_function_in_class_hierarchy(current_class, tree->tok->text);
      if (function != nullptr)
        return function->return_type;
    }
    // if s still nullptr, return builtin
    else if (s == nullptr && tree->type){

      return tree->type;
    }
    else
    {
      // otherwise something is terribly wrong
      semantic_assert(false,
                      "undefined var/func \"%s\".",
                      tree->tok->text.c_str());
    }
  }
  std::string expression_type = tree->description;
  if (expression_type == "binop")
  {
    std::string binop_type = tree->children[1]->to_string().substr(0, 2);
    semantics* rhs =  ensure_legal_expression(tree->children[2], scope);
    semantics* lhs = ensure_legal_expression(tree->children[0], scope);
    if (tree->children[0]->description == "aref"){
      lhs = ensure_legal_expression(tree->children[0]->children[0], scope);
      if(dynamic_cast<s_type*>(ensure_legal_expression(tree->children[0]->children[1], scope))->name != "int")
        semantic_assert(false, "cannot use non-int as index");
    }
    if (tree->children[2]->description == "aref"){
      rhs = ensure_legal_expression(tree->children[2]->children[0], scope);
      if(dynamic_cast<s_type*>(ensure_legal_expression(tree->children[2]->children[1], scope))->name != "int")
        semantic_assert(false, "cannot use non-int as index");
    }

    // cast correctly to s_type:
    s_type * lhs_type;
    s_type * rhs_type;

    if (dynamic_cast<s_var*>(lhs)){
      std::cout << "you should be here" << std::endl;
      lhs_type = dynamic_cast<s_var*>(lhs)->type;
    }
    else if (dynamic_cast<s_function*>(lhs))
      lhs_type = dynamic_cast<s_function*>(lhs)->return_type;
    else if (lhs == semantics_bool_type)
      lhs_type = semantics_bool_type;
    else if (lhs == semantics_int_type)
      lhs_type = semantics_int_type;
    else if (lhs == semantics_string_type)
      lhs_type = semantics_string_type;
    else if (lhs == semantics_void_type)
      lhs_type = semantics_void_type;
    else if (lhs == semantics_double_type)
      lhs_type = semantics_double_type;

    if (dynamic_cast<s_var*>(rhs))
      rhs_type = dynamic_cast<s_var*>(rhs)->type;
    else if (dynamic_cast<s_function*>(rhs))
      rhs_type = dynamic_cast<s_function*>(rhs)->return_type;
    else if (rhs == semantics_bool_type)
      rhs_type = semantics_bool_type;
    else if (rhs == semantics_int_type)
      rhs_type = semantics_int_type;
    else if (rhs == semantics_string_type)
      rhs_type = semantics_string_type;
    else if (rhs == semantics_void_type)
      rhs_type = semantics_void_type;
    else if (rhs == semantics_double_type)
      rhs_type = semantics_double_type;


    if (binop_type == "= ")
    {
      // ensure lhs and rhs have same type
      semantic_assert(ensure_same_type(lhs_type, rhs_type),
                      "lhs and rhs of assignment statement not of same type.");
      return rhs_type;
    }

    if (binop_type == "EQ" || binop_type == "NE")
    {
      //ensure primtypes or usertypes match
      semantic_assert(ensure_same_type(lhs_type, rhs_type),
                      "lhs and rhs of assignment statement not of same type.");
      return semantics_bool_type;
    }

    if (binop_type == "OR" || binop_type == "AN")
    {
      //ensure lhs and rhs are bools
      return nullptr;
    }

    if (binop_type == "+ " || binop_type == "- " ||
        binop_type == "* " || binop_type == "/ " ||
        binop_type == "% ")
    {
      //ensure lhs and rhs are both ints or doubles
      if (lhs_type == semantics_int_type &&
          rhs_type == semantics_int_type)
        return semantics_int_type;
      else if (lhs_type == semantics_double_type &&
               rhs_type == semantics_double_type)
        return semantics_int_type;
      else
      semantic_assert(false,
                      "lhs and rhs of expr not both ints or dbls.");
    }
    if (binop_type == "< " || binop_type == "<=" ||
        binop_type == "> " || binop_type == ">= ")
    {
      //ensure lhs and rhs are both ints or doubles
      if (lhs_type == semantics_int_type &&
          rhs_type == semantics_int_type)
        return semantics_bool_type;
      else if (lhs_type == semantics_double_type &&
               rhs_type == semantics_double_type)
        return semantics_bool_type;
      else
      semantic_assert(false,
                      "lhs and rhs of expr not both ints or dbls.");
    }

  }

  else if (tree->description == "fieldacess")
  {
    // semantics* c = ensure_legal_expression(tree->children[0], scope, current_class); // instance of class c
    semantics* ci = ensure_legal_expression(tree->children[1], scope); // class c instance var/method

    if (dynamic_cast<s_var*>(ci))
      return dynamic_cast<s_var*>(ci)->type;
    else if (dynamic_cast<s_function*>(ci))
      return dynamic_cast<s_function*>(ci)->return_type;
    else
    {
      semantic_assert(false,
                      "you shouldnt be here");
      return nullptr;
    }
  }

  else if (tree->description == "call")
  {
    // tree->children[0]->tok->text = func name
    // tree->children[1]->tok->text = params
    semantic_assert(ensure_legal_expression(tree->children[0], scope), 
                    "undefined func \"%s\"", 
                    tree->children[0]->tok->text.c_str());
    semantics* f;
    if(scope->lookup(tree->children[0]->tok->text)){
      f = scope->lookup(tree->children[0]->tok->text);
    }
    if (current_class && find_function_in_class_hierarchy(current_class, tree->children[0]->tok->text)){
      f = find_function_in_class_hierarchy(current_class, tree->children[0]->tok->text);
    }
    s_function* curr_func = dynamic_cast<s_function*> (f); 
    std::vector<s_var *> params = curr_func->params; 
    if(tree->children[1]->children.size() != params.size()){
      if(tree->children[1]->children.size() < params.size())
        semantic_assert(false, "too few arguments for function \"%s\"", 
                        tree->children[0]->tok->text.c_str());
      else
        semantic_assert(false, 
                        "too many arugments for function \"%s\"", 
                        tree->children[0]->tok->text.c_str()); 
    }
    for (size_t i = 0; i < params.size(); i++){
      if(params[i]->type != ensure_legal_expression(tree->children[1]->children[i], scope)){
        semantic_assert(false, 
                        "function call arguments does not match param list for \"%s\"", 
                        tree->children[0]->tok->text.c_str());
        }
      }
    return curr_func->return_type;
  }
  return nullptr;
}

bool check_return(parse_tree *stmt_block, s_type *return_type)
{
  for (size_t i=0; i<stmt_block->children.size(); i++){
      if(stmt_block->children[i]){
        if (stmt_block->children[i]->description == "return"){
           if(return_type != ensure_legal_expression(stmt_block->children[i]->children[1], stmt_block->scope))
              return false; 
        }
      }
  }
  for (size_t i = 0; i<stmt_block->children.size(); i++){
    if (stmt_block->children[i] && (stmt_block->children[i]->description == "while" || stmt_block->children[i]->description == "for" ||
      stmt_block->children[i]->description == "if") )
      return check_return(stmt_block->children[i], return_type);
  }
  return true;
}

semantics * sem_pass2(parse_tree *tree, symtab *scope)
{
  if (!tree)
  {
     return nullptr;
  }

  if (tree->description == "class")
    current_class = dynamic_cast<s_class*>(scope->lookup(tree->children[0]->tok->text));

  if (tree->tok)
  {
    // if (current_class == nullptr && tree->to_string().substr(0, 4) == "THIS")
    //   semantic_assert(false,
    //                  "using \"this\" outside of a class.");
      return scope->lookup(tree->tok->text);
  }

  if (tree->description == "functiondecl"){
    s_function *curr_function = dynamic_cast<s_function*>(scope->lookup(tree->children[1]->tok->text));
    s_type *return_type = curr_function->return_type; 
    parse_tree *stmt_block = tree->children[3]->children[1];
    bool check = check_return(stmt_block, return_type);
    if (!check){
      semantic_assert(check, 
                      "return expression not equal to function \"%s\" return type",
                      tree->children[1]->tok->text.c_str());
    }
  }

  if (tree->description == "binop" ||
      tree->description == "uop" ||
      tree->description == "fieldaccess" ||
      tree->description == "call")
  {
    return ensure_legal_expression(tree, tree->scope);
  }

  if (tree->description == "print")
  {
    parse_tree * actuals = tree->children[1];
    for (size_t i = 0; i < actuals->children.size(); i++)
    {
      semantics * type = ensure_legal_expression(actuals->children[i], tree->scope);
      semantic_assert((type == semantics_bool_type ||
                       type == semantics_string_type ||
                       type == semantics_int_type ||
                       type == semantics_double_type),
                      "print actual \"%s\" not valid.",
                      actuals->children[i]->to_string().c_str());
    }
  }

  if (tree->description == "while")
  {
    parse_tree * cond = tree->children[0];
    semantic_assert(ensure_legal_expression(cond, tree->scope) == semantics_bool_type,
                    "while condition not boolean.");
  }

  if (tree->description == "if")
  {
    parse_tree * cond = tree->children[0];
    semantic_assert(ensure_legal_expression(cond, tree->scope) == semantics_bool_type,
                    "if condition not boolean.");
  }

  if (tree->description == "for")
  {
    parse_tree * cond = tree->children[1];
    semantic_assert(ensure_legal_expression(cond, tree->scope) == semantics_bool_type,
                    "for loop condition not boolean.");
  }

  for (size_t i=0;i<tree->children.size();i++)
    sem_pass2(tree->children[i], scope);

  return nullptr;
}


void main_sem()
{
   semantic_checks = true;
   current_line = 1;
   current_scope = nullptr;
   open_scope();
   top_scope = current_scope;

   // add in primive types
   current_scope->add("double", semantics_double_type);
   current_scope->add("int", semantics_int_type);
   current_scope->add("bool", semantics_bool_type);
   current_scope->add("string", semantics_string_type);
   current_scope->add("void", semantics_void_type);
   open_scope();  // this would allow redefinition of built-ins.
                  // (Not possible in our grammars)
   yyparse();
   traverse_tree(top);

   // check for undefined usertypes here
   current_scope->check_undefined_usertypes();
   current_scope->check_interface_implement();
   current_scope->check_cyclic_classes();
   std::cout << std::endl << std::endl;
   std::cout << "SEMANTICS PASS 2 TESTING BELOW:" << std::endl;
   sem_pass2(top, current_scope);
   close_scope();
}

void main_gen()
{
   main_sem();
   std::string fname = program_name + ".j";
   gout = new std::ofstream(fname.c_str());
   if (!*gout)
   {
      std::cerr << "Can't open " << fname << " for writing" << std::endl;
      exit(1);
   }
   std::cerr << "Going to preamble" << std::endl;
   gen_preamble();

   delete gout;
}
