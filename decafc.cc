#include <fstream>
#include "parsetree.h"
#include "semantics.h"
#include "codegen.h"

// Code Generation:
// - CS310: Jasper - Java decompiler (.class -> .j file)
//          Jasmin - assembler (.j -> .class file)
//          javac1.2 - Java compiler 
//          java - runs .class file 


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
    if (locals[i]->to_string() == var)
      return locals[i];
  if (!c->superclass)
    return nullptr;
  else
    return find_var_in_class_hierarchy(c->superclass, var);
}

s_function * find_function_in_class_hierarchy(s_class* c, std::string func)
// takes a class and  a function that should exist in that class (or a parent class)
// returns the semantics function which contains the type of the function
{
  std::map<std::string, s_function*> func_map = c->function_map;
  std::map<std::string, s_function*>::iterator it;
  for (it = std::begin(func_map); it != std::end(func_map); it++)
    if (it->first == func)
      return it->second;
  if (!c->superclass)
    return nullptr;
  else
    return find_function_in_class_hierarchy(c->superclass, func);
}

bool ensure_same_type(s_type *a, s_type *b)
{
  if (a == b)
    return true;
  return false;
}

s_type* find_token_type(parse_tree* tree, symtab* scope)
{
  std::string ident = tree->tok->text;
  semantics * s = scope->lookup(ident);
  if (s != nullptr)
  {
    if (dynamic_cast<s_var*>(s)){
      if(dynamic_cast<s_class*>(dynamic_cast<s_var*>(s)->type)){
        if(dynamic_cast<s_class*>(dynamic_cast<s_var*>(s)->type)->defined == false)
          return dynamic_cast<s_class*>(scope->lookup(dynamic_cast<s_class*>(dynamic_cast<s_var*>(s)->type)->name));
        else
          return dynamic_cast<s_class*>(dynamic_cast<s_var*>(s)->type);
      }
      else{
        return dynamic_cast<s_var*>(s)->type;
      }
    }
    else if (dynamic_cast<s_type*>(s)){
      return dynamic_cast<s_type*>(s);
    }
    else if (dynamic_cast<s_function*>(s))
      return dynamic_cast<s_function*>(s)->return_type;
  }
  // if s still nullptr, return builtin
  else if (s == nullptr && tree->type)
    return tree->type;
  else
    semantic_assert(false,
                    "undefined var/func \"%s\".",
                    tree->tok->text.c_str());
  return nullptr;
}

s_type* ensure_legal_expression(parse_tree* tree, symtab* scope)
{
  // base case, return semantics type of expressions
  if (tree->tok)
    return find_token_type(tree, scope);

  std::string expression_type = tree->description;
  if (expression_type == "aref")
  {
    semantic_assert(ensure_legal_expression(tree->children[1], tree->scope) == semantics_int_type,
                    "cannot index by non-int type: \"%s\"",
                    tree->children[1]->to_string().c_str());
    return ensure_legal_expression(tree->children[0], tree->scope);
  }
  if (expression_type == "newarray")
  {
    semantic_assert(ensure_legal_expression(tree->children[0], tree->scope) == semantics_int_type,
                      "cannot create array with length of non-int type: \"%s\"",
                      tree->children[0]->to_string().c_str());
    return ensure_legal_expression(tree->children[1]->children[0], tree->scope);
  }
  if (expression_type == "new"){
    s_type* a = ensure_legal_expression(tree->children[0], tree->scope);
    semantic_assert(dynamic_cast<s_class*>(a),
                      "cannot use new with undefined type: \"%s\"",
                      tree->children[0]->to_string().c_str());
    return ensure_legal_expression(tree->children[0], tree->scope);
  }
  if (expression_type == "binop")
  {
    s_type *rhs_type =  ensure_legal_expression(tree->children[2], tree->scope);
    s_type *lhs_type = ensure_legal_expression(tree->children[0], scope);
    std::string binop_type = tree->children[1]->to_string().substr(0, 2);
    if (binop_type == "= ")
    {
      // ensure lhs and rhs have same type
      semantic_assert(ensure_same_type(lhs_type, rhs_type),
                      "lhs and rhs of assignment statement not of same type");
      return lhs_type;
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
        return semantics_double_type;
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

  else if (tree->description == "fieldaccess")
  {
    semantic_assert(!scope->lookup(tree->children[1]->tok->text),
                    "access member data outside class");
    s_type* a = ensure_legal_expression(tree->children[0], tree->scope);
    semantic_assert(dynamic_cast<s_class*>(a),
                    "fieldaccess is limited to defined classes, \"%s\" is not a defined class",
                    tree->children[0]->tok->text.c_str());
    s_class *curr_class = dynamic_cast<s_class*>(a);
    std::string curr_var = tree->children[1]->tok->text;
    std::vector<s_var*> locals = curr_class->locals;
    for (size_t i = 0; i<locals.size(); i++){
      if(locals[i]->name == curr_var)
        return locals[i]->type;
    }
    semantic_assert(false,
                    "instance variable \"%s\" does not exist in class \"%s\"",
                    curr_var.c_str(), curr_class->name.c_str());
  }

  else if (tree->description == "call")
  {
    parse_tree* field_tree = tree->children[0];
    if (field_tree->description == "fieldaccess"){
      s_type* a = ensure_legal_expression(field_tree->children[0], tree->scope);
      if(!dynamic_cast<s_class*>(a))
        semantic_assert(false,
                        "fieldaccess is limited to defined classes, \"%s\" is not a defined class",
                        field_tree->children[0]->tok->text.c_str());
    s_class *curr_class = dynamic_cast<s_class*>(a);
    std::string curr_function = field_tree->children[1]->tok->text;
    semantic_assert(find_function_in_class_hierarchy(curr_class, curr_function),
                    "function \"%s\" does not exist in class \"%s\"",
                    curr_function.c_str(), curr_class->name.c_str());
    return find_function_in_class_hierarchy(curr_class, curr_function)->return_type;
    }
    else{
      std::string ident = tree->children[0]->tok->text;
      semantic_assert(dynamic_cast<s_function*>(scope->lookup(ident)),
                      "invalid function call: \"%s\"",
                      ident.c_str());
      s_function* curr_func = dynamic_cast<s_function*> (scope->lookup(ident));
      std::vector<s_var *> params = curr_func->params;
      parse_tree *actuals = tree->children[1];
      semantic_assert(!(actuals->children.size() < params.size()),
                      "too few arguments for function \"%s\"",
                      ident.c_str());
      semantic_assert(!(actuals->children.size() > params.size()),
                      "too many arugments for function \"%s\"",
                      ident.c_str());
      for (size_t i = 0; i < params.size(); i++)
          semantic_assert(params[i]->type == ensure_legal_expression(actuals->children[i], tree->scope),
                          "function call arguments does not match param list for \"%s\"",
                          ident.c_str());
      return curr_func->return_type;
    }
  }
  return nullptr;
}

bool check_return(parse_tree *stmt_block, s_type *return_type)
{
  for (size_t i=0; i<stmt_block->children.size(); i++){
      if(stmt_block->children[i]){
        if (stmt_block->children[i]->description == "return"){
           if (stmt_block->children[i]->children.size() == 1 && return_type->name != "void")
              return false;
           if (stmt_block->children[i]->children.size() == 2 && return_type->name == "void")
              return false;
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

void sem_pass2(parse_tree *tree, symtab *scope)
{

  if (!tree)
     return;

  if (tree->tok){
    if (current_class == nullptr && tree->to_string().substr(0, 4) == "THIS")
      semantic_assert(false,
                     "using \"this\" outside of a class.");
    return;
  }

  if (tree->description == "functiondecl")
  {
    // checking that a function has correct return type
    s_function *curr_function = dynamic_cast<s_function*>(tree->scope->lookup(tree->children[1]->tok->text));
    s_type *return_type = curr_function->return_type;
    parse_tree *stmt_block = tree->children[3]->children[1];
    semantic_assert(check_return(stmt_block, return_type),
                      "return expression not equal to function \"%s\" return type",
                      tree->children[1]->tok->text.c_str());
  }

  if (tree->description == "binop" ||
      tree->description == "uop" ||
      tree->description == "fieldaccess" ||
      tree->description == "call")
  {
    ensure_legal_expression(tree, tree->scope);
    return;
  }

  if (tree->description == "print")
  {
    parse_tree * actuals = tree->children[1];
    s_type *type;
    for (size_t i = 0; i < actuals->children.size(); i++)
    {
      type = ensure_legal_expression(actuals->children[i], tree->scope);
      semantic_assert((type == semantics_bool_type ||
                       type == semantics_string_type ||
                       type == semantics_int_type ||
                       type == semantics_double_type),
                      "print actual \"%s\" not valid.",
                      actuals->children[i]->to_string().c_str());
    }
    return;
  }

  parse_tree * cond;
  if (tree->description == "while" || tree->description == "if")
  {
    cond = tree->children[0];
    semantic_assert(ensure_legal_expression(cond, tree->scope) == semantics_bool_type,
                    "while/if condition not boolean.");
  }

  if (tree->description == "for")
  {
    cond = tree->children[1];
    semantic_assert(ensure_legal_expression(cond, tree->scope) == semantics_bool_type,
                    "for loop condition not boolean.");
  }

  for (size_t i=0;i<tree->children.size();i++)
    sem_pass2(tree->children[i], scope);

  return;
}


void main_sem()
{
   semantic_checks = true;
   current_line = 1;
   current_scope = nullptr;
   open_scope();

   // add in primive types
   current_scope->add("double", semantics_double_type);
   current_scope->add("int", semantics_int_type);
   current_scope->add("bool", semantics_bool_type);
   current_scope->add("string", semantics_string_type);
   current_scope->add("void", semantics_void_type);
   open_scope();  // this would allow redefinition of built-ins.
                  // (Not possible in our grammars)
   top_scope = current_scope;
   yyparse();
   traverse_tree(top);

   // check for undefined usertypes here
   current_scope->check_undefined_usertypes();
   current_scope->check_interface_implement();
   current_scope->check_cyclic_classes();
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
   gen_init_boilerplate(); 
   gen_main_program(top);

   delete gout;
}
