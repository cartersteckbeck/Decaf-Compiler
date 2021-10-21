/* These are the tokens.
   By convention (in CS 310) they have numbers starting with 260. Take care that
   this list exactly matches the array of strings declared in token.cc. These
   tokens are only used for multi-character tokens. Single-character tokens
   map to their characters directly.
*/
// if(yytext.size() > 31)
//                  lex_error("Identifier %s too long", yytext);
//              else
%token T_VOID 260 "void"
%token T_INT 261 "int"
%token T_DOUBLE 262 "double"
%token T_BOOL 263 "bool"
%token T_STRING 264 "string"
%token T_CLASS 265 "class"
%token T_INTERFACE 266 "interface"
%token T_NULL 267 "null"
%token T_THIS 268 "this"
%token T_EXTENDS 269 "extends"
%token T_IMPLEMENTS 270 "implements"
%token T_FOR 271 "for"
%token T_WHILE 272 "while"
%token T_IF 273 "if"
%token T_ELSE 274 "else"
%token T_RETURN 275 "return"
%token T_BREAK 276 "break"
%token T_NEW 277 "New"
%token T_NEWARRAY 278 "NewArray"
%token T_PRINT 279 "Print"
%token T_READINTEGER 280 "ReadInteger"
%token T_READLINE 281 "ReadLine"
%token T_LE 282 "<="
%token T_GE 283 ">="
%token T_EQ 284 "=="
%token T_NEQ 285 "!="
%token T_AND 286 "&&"
%token T_OR 287 "||"
%token T_ARRAY 288 "[]"
%token T_DBLLITERAL 289
%token T_INTLITERAL 290
%token T_BOOLLITERAL 291
%token T_IDENTIFIER 292
%token T_TYPEIDENTIFIER 293
%token T_STRINGLITERAL 294

%{
#include "parsetree.h"
#define YYSTYPE parse_tree *
int yylex();
extern bool semantic_checks; // defined in the compiler main file.

/* We need this to see syntax errors. */
int yyerror(char const *s)
{

   std::cout << "line " << current_line << ": ";
   std::cout << s << std::endl;
   // exit at the first error.
   exit(1);
}

%}

%define parse.error verbose

%%

/* Debugging hint: if you want to test part of the grammar in isolation,
* change this line rather than using the %start directive from yacc/bison.
* (Crucially, this line sets the "top" variable.)
*/
pgm: program {top = $$ = $1; }


/* Language grammar follows: */
program: decl {$$ = $1; }

decl: /* empty */ {$$ = new parse_tree("program"); }
    | decl varDecl {$1->add_child($2); $$ = $1; }
    | decl funcDecl {$1->add_child($2); $$ = $1; }
    | decl interfaceDecl {$1->add_child($2); $$ = $1; }
    | decl classDecl {$1->add_child($2); $$ = $1; }


/* Variable Declarations */
varDecl: variable ';'

variable: type identifier {$$ = new parse_tree("variable", 2, $type, $identifier); }

type: usertype | primtype | arraytype

usertype: typeidentifier {$$ = new parse_tree("usertype", 1, $typeidentifier); }

primtype: string {$$ = new parse_tree("primtype", 1, $string); }
        | int {$$ = new parse_tree("primtype", 1, $int); }
        | double {$$ = new parse_tree("primtype", 1, $double); }
        | bool {$$ = new parse_tree("primtype", 1, $bool); }

arraytype: usertype array {$$ = new parse_tree("arraytype", 1, $usertype); }
         | primtype array {$$ = new parse_tree("arraytype", 1, $primtype); }


/* Function Declarations */
funcDecl: type identifier[i] '(' formals[f] ')' stmtblock[s] {$$ = new parse_tree("functiondecl", 4, $type, $i, $f, $s); }
        | void identifier[i] '(' formals[f] ')' stmtblock[s] {$$ = new parse_tree("functiondecl", 4, $void, $i, $f, $s); }

formals: /* empty */ {$$ = new parse_tree("formals"); }
       | formals[f] variable[v] {$f->add_child($v); $$ = $1; }
       | formals[f] ',' variable[v] {$f->add_child($v); $$ = $1; }


/* Class Declarations */
classDecl: class identifier[a] '{' fields '}' {$$ = new parse_tree("class", 4, $a, nullptr, nullptr, $fields);}
         | class typeidentifier[a] ext '{' fields '}' {$$ = new parse_tree("class", 4, $a, $ext, nullptr, $fields);}
         | class typeidentifier[a] implements identifiersPlus[ip] '{' fields '}' {$$ = new parse_tree("class", 4, $a, nullptr, $ip, $fields);}
         | class typeidentifier[a] ext implements identifiersPlus[ip] '{' fields '}' {$$ = new parse_tree("class", 4, $a, $ext, $ip, $fields);}

fields: /* empty */ {$$ = new parse_tree("fields");}
      | fields funcDecl {$1->add_child($2); $$ = $1; }
      | fields varDecl {$1->add_child($2); $$ = $1; }

identifiersPlus: identifier[i] {$$ = new parse_tree("implements", 1, $i); }
               | identifiersPlus ',' identifier[i] {$1->add_child($i); $$ = $1; }

ext: extends identifier[i] {$$ = new parse_tree("extends", 1, $i); }
   | extends typeidentifier[i] {$$ = new parse_tree("extends", 1, $i); }

/* Interface Declaractions */
interfaceDecl: interface identifier[i] '{' prototypes[p] '}' {$$ = new parse_tree("interface", 2, $i, $p);}

prototypes: /* empty */ {$$ = new parse_tree("prototypes");}
          | prototypes prototype {$1->add_child($2); $$ = $1; }

prototype: type identifier[i] '(' formals[f] ')' ';' {$$ = new parse_tree("prototype", 3, $type, $i, $f); }
         | void identifier[i] '(' formals[f] ')' ';' {$$ = new parse_tree("prototype", 3, $void, $i, $f); }

/* Statements */
stmtblock: '{' varDeclStar[v] stmtStar[s] '}' {$$ = new parse_tree("stmtblock", 2, $v, $s);}

varDeclStar: /* empty */ {$$ = new parse_tree("vardecls");}
           | varDeclStar varDecl {$1->add_child($2); $$ = $1; }

stmtStar: /* empty */ {$$ = new parse_tree("stmts");}
        | stmtStar stmt {$1->add_child($2); $$ = $1; }

stmt: matched_stmt | unmatched_stmt

matched_stmt: ';' {$$ = new parse_tree("nullstmt"); }
            | expr ';'
            | matched_if
            | matched_while
            | matched_for
            | break_stmt ';'
            | return_stmt ';'
            | print_stmt ';'
            | stmtblock

unmatched_stmt: unmatched_if
              | unmatched_while
              | unmatched_for

/* regular matched statements */
break_stmt: break {$$ = new parse_tree("break", 1, $break); }

return_stmt: return {$$ = new parse_tree("return", 1, $return); }
           | return expr {$$ = new parse_tree("return", 2, $return, $expr); }

print_stmt: print[p] '(' actuals[a] ')' {$$ = new parse_tree("print", 2, $p, $a); }

/* if statements */
common_if: if '(' expr ')' {$$ = new parse_tree("if", 1, $expr); }

matched_if: common_if matched_stmt[s1] else matched_stmt[s2] {$$->add_child($s1); $$->add_child($s2); $$ = $common_if; }

unmatched_if: common_if matched_stmt[ms]                         {$$->add_child($ms); $$->add_child(nullptr); $$ = $common_if; }
            | common_if matched_stmt[ms] else unmatched_stmt[us] {$$->add_child($ms); $$->add_child($us); $$ = $common_if; }
            | common_if unmatched_stmt[us]                       {$$->add_child($us); $$->add_child(nullptr); $$ = $common_if; }


/* while statements */
common_while: while '(' expr1 ')' {$$ = new parse_tree("while", 1, $expr1); }

matched_while: common_while matched_stmt[ms] {$$ ->add_child($ms); $$ = $common_while; }

unmatched_while: common_while unmatched_stmt[us] {$$->add_child($us); $$ = $common_while; }


/* for statements */
common_for: for '(' expr[a] ';' expr[b] ';' expr[c] ')' {$$ = new parse_tree("for", 3, $a, $b, $c); }
          | for '('         ';' expr[b] ';' expr[c] ')' {$$ = new parse_tree("for", 3, nullptr, $b, $c); }
          | for '(' expr[a] ';' expr[b] ';'         ')' {$$ = new parse_tree("for", 3, $a, $b, nullptr); }
          | for '('         ';' expr[b] ';'         ')' {$$ = new parse_tree("for", 3, nullptr, $b, nullptr); }

matched_for: common_for matched_stmt[ms] {$$ ->add_child($ms); $$ = $common_for;}

unmatched_for: common_for unmatched_stmt[us] {$$ ->add_child($us); $$ = $common_for;}


//* Expressions */
expr: expr1
    | Lvalue[a] sceq expr1[b] {$$ = new parse_tree("binop", 3, $a, $sceq, $b);}

expr1: expr2
     | expr1[inner] or expr2 {$$ = new parse_tree("binop", 3, $inner, $or, $expr2);}

expr2: expr3
     | expr2[inner] and expr3 {$$ = new parse_tree("binop", 3, $inner, $and, $expr3);}

expr3: expr4
     | expr4[i1] eq expr4[i2] {$$ = new parse_tree("binop", 3, $i1, $eq, $i2);}
     | expr4[i1] neq expr4[i2] {$$ = new parse_tree("binop", 3, $i1, $neq, $i2);}

expr4: expr5
     | expr5[i1] sclt expr5[i2] {$$ = new parse_tree("binop", 3, $i1, $sclt, $i2);}
     | expr5[i1] scgt expr5[i2] {$$ = new parse_tree("binop", 3, $i1, $scgt, $i2);}
     | expr5[i1] le expr5[i2] {$$ = new parse_tree("binop", 3, $i1, $le, $i2);}
     | expr5[i1] ge expr5[i2] {$$ = new parse_tree("binop", 3, $i1, $ge, $i2);}

expr5: expr6
     | expr5[inner] scplus expr6 {$$ = new parse_tree("binop", 3, $inner, $scplus, $expr6);}
     | expr5[inner] scminus expr6 {$$ = new parse_tree("binop", 3, $inner, $scminus, $expr6);}

expr6: expr7
     | expr6[inner] sctimes expr7 {$$ = new parse_tree("binop", 3, $inner, $sctimes, $expr7);}
     | expr6[inner] scdiv expr7 {$$ = new parse_tree("binop", 3, $inner, $scdiv, $expr7);}
     | expr6[inner] scmod expr7 {$$ = new parse_tree("binop", 3, $inner, $scmod, $expr7);}

expr7: expr8
     | scneq expr8[inner] {$$ = new parse_tree("uop", 2, $scneq, $expr7);}
     | scminus expr8[inner] {$$ = new parse_tree("uop", 2, $scminus, $expr7);}

expr8: expr9
     | Lvalue

expr9: constant
     | this
     | '(' expr ')' { $$ = $expr; }
     | call
     | readint '(' ')'
     | readline '(' ')'
     | new '(' identifier[i] ')' {$$ = new parse_tree("new", 1, $i);}
     | newarray '(' expr[e] ',' type[t] ')' {$$ = new parse_tree("newarray", 2, $e, $t);}
     | newarray '(' expr[e] ',' special[s] ')' {$$ = new parse_tree("newarray", 2, $e, $s);}

Lvalue: identifier
      | expr8[e1] '[' expr1[e2] ']' {$$ = new parse_tree("aref", 2, $e1, $e2);}
      | expr8[e1] '.' identifier[i] {$$ = new parse_tree("fieldaccess", 2, $e1, $i);}

call: expr8[i] '(' nactuals[n] ')' {$$ = new parse_tree("call", 2, $i, $n);}

/* you should explain special @Carter */
special: identifier[i] {$$ = new parse_tree("usertype", 1, $i);}

nactuals: /* empty */ {$$ = new parse_tree("actuals");}
        | nactuals expr {$1->add_child($2); $$ = $1;}
        | nactuals ',' expr {$1->add_child($expr); $$ = $1;}

actuals: expr {$$ = new parse_tree("actuals", 1, $expr);}
       | actuals ',' expr {$1->add_child($expr); $$ = $1;}

constant: intlit
        | dbllit
        | boollit
        | stringlit
        | null

/* TERMINAL PRODUCTIONS */
typeidentifier: T_TYPEIDENTIFIER { $$ = new parse_tree(mytok); }
identifier: T_IDENTIFIER { $$ = new parse_tree(mytok); }
string: T_STRING { $$ = new parse_tree(mytok); }
int: T_INT { $$ = new parse_tree(mytok); }
double: T_DOUBLE { $$ = new parse_tree(mytok); }
bool: T_BOOL { $$ = new parse_tree(mytok); }
array: T_ARRAY { $$ = new parse_tree(mytok); }
void: T_VOID { $$ = new parse_tree(mytok); }
break: T_BREAK { $$ = new parse_tree(mytok); }
this: T_THIS { $$ = new parse_tree(mytok); }
le: T_LE { $$ = new parse_tree(mytok); }
ge: T_GE { $$ = new parse_tree(mytok); }
eq: T_EQ { $$ = new parse_tree(mytok); }
neq: T_NEQ { $$ = new parse_tree(mytok); }
and: T_AND { $$ = new parse_tree(mytok); }
or: T_OR { $$ = new parse_tree(mytok); }
readint: T_READINTEGER { $$ = new parse_tree(mytok); }
new: T_NEW { $$ = new parse_tree(mytok); }
newarray: T_NEWARRAY { $$ = new parse_tree(mytok); }
intlit: T_INTLITERAL { $$ = new parse_tree(mytok); }
dbllit: T_DBLLITERAL { $$ = new parse_tree(mytok); }
boollit: T_BOOLLITERAL { $$ = new parse_tree(mytok); }
stringlit: T_STRINGLITERAL { $$ = new parse_tree(mytok); }
null: T_NULL { $$ = new parse_tree(mytok); }
readline: T_READLINE { $$ = new parse_tree(mytok); }
if: T_IF { $$ = new parse_tree(mytok); }
else: T_ELSE { $$ = new parse_tree(mytok); }
print: T_PRINT { $$ = new parse_tree(mytok); }
return: T_RETURN { $$ = new parse_tree(mytok); }
class: T_CLASS { $$ = new parse_tree(mytok); }
extends: T_EXTENDS { $$ = new parse_tree(mytok); }
implements: T_IMPLEMENTS { $$ = new parse_tree(mytok); }
for: T_FOR { $$ = new parse_tree(mytok); }
while: T_WHILE { $$ = new parse_tree(mytok); }
interface: T_INTERFACE { $$ = new parse_tree(mytok); }


/* single character terminals */
scplus: '+' { $$ = new parse_tree(mytok); }
scminus: '-' { $$ = new parse_tree(mytok); }
sctimes: '*' { $$ = new parse_tree(mytok); }
scdiv: '/' { $$ = new parse_tree(mytok); }
scmod: '%' { $$ = new parse_tree(mytok); }
sclt: '<' { $$ = new parse_tree(mytok); }
scgt: '>' { $$ = new parse_tree(mytok); }
sceq: '=' { $$ = new parse_tree(mytok); }
scneq: '!' { $$ = new parse_tree(mytok); }
//sccolon: ';' { $$ = new parse_tree(mytok); }
//sccomma: ',' { $$ = new parse_tree(mytok); }
//scperiod: '.' { $$ = new parse_tree(mytok); }
//sclbracket: '[' { $$ = new parse_tree(mytok); }
//scrbracket: ']' { $$ = new parse_tree(mytok); }
//sclparen: '(' { $$ = new parse_tree(mytok); }
//scrparen: ')' { $$ = new parse_tree(mytok); }
//sclcurly: '{' { $$ = new parse_tree(mytok); }
//scrcurly: '}' { $$ = new parse_tree(mytok); }
//scbackslash: '\\' { $$ = new parse_tree(mytok); }

%%
