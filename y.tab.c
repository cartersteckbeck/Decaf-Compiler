/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 37 "decaf.y"

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

bool ensure_top_scope()
{
  return current_class == nullptr &&
         current_interface == nullptr &&
         current_function == nullptr;
}

void func_p1(parse_tree* i, parse_tree* t)
{
  std::string ident = i->tok->text;
  semantic_assert(!current_scope->lookup_local(ident),
                  "\"%s\" is already defined",
                  ident.c_str());

  current_function = new s_function(ident);
  semantics *type = nullptr;
  std::string typestr;
  if (t->description == "arraytype")
  {
    typestr = t->children[0]->children[0]->tok->text;
    type = current_scope->lookup(typestr);
  }
  else if (t->children.size() == 0)
  {
    typestr = "void";
    type = current_scope->lookup(typestr);
  }
  else 
  {
    typestr = t->children[0]->tok->text;
    type = current_scope->lookup(typestr);
  }
  if (!type)
  {
    s_class *undefined_class = new s_class(typestr);
    undefined_class->defined = false;
    current_scope->add(typestr, undefined_class);
    type = undefined_class;
  }
  current_function->return_type = dynamic_cast<s_type*>(type);
  current_scope->add(ident, current_function);
}

void func_p2()
{
  if(current_class)
      current_class->function_map.insert({current_function->name, current_function});
  current_function = nullptr;
}

void class_p1(parse_tree* a)
/* Checks if class ident exists, whether its actually a class,
   and if so whether its defined, producing the correct errors
   for each case. */
{
  std::string new_class_ident = a->tok->text;
  current_class = new s_class(new_class_ident);

  if (current_scope->lookup(new_class_ident))
    if (dynamic_cast<s_class *>(current_scope->lookup(new_class_ident)))
      if (dynamic_cast<s_class *>(current_scope->lookup(new_class_ident))->defined)
        semantic_assert(false,
                        "\"%s\" is redefining an existing class",
                        new_class_ident.c_str());
      else
      {
        current_class = dynamic_cast<s_class *>(current_scope->lookup(new_class_ident));
        current_class->defined = true;
      }
    else
      semantic_assert(false,
                      "\"%s\" is already defined as a different type",
                      new_class_ident.c_str());
  else
    current_scope->add(new_class_ident, current_class);
}

void class_extends(parse_tree* a, parse_tree* ext)
/* Runs class_p1 to check the same stuff for new class. Then
   checks if parent ident exists, whether its actually a class,
   and if so whether its defined, producing the correct errors
   for each case. If its not defined yet, add it to the top scope
   and make sure its defined at some point later in pass 1.5. */
{
    class_p1(a);

    std::string parent_class_ident = ext->children[0]->tok->text;
    semantics *parent_class = current_scope->lookup(parent_class_ident);

    if (parent_class && dynamic_cast<s_class*>(parent_class))
        current_class->superclass = dynamic_cast<s_class*>(parent_class);
    else if (parent_class)
        semantic_assert(false,
                        "cannot extend non-class \"%s\"",
                        parent_class_ident.c_str());
    else {
        s_class *new_class = new s_class(parent_class_ident);
        new_class->defined = false;
        current_class->superclass = new_class;
        current_scope->add(parent_class_ident, new_class);
   }
}

void identifierplus_p1(parse_tree* i)
/* Checks if interface ident exists, whether its actually an interface,
   producing the correct errors for each case. If its not defined yet,
   add it to the top scope and make sure its defined at some point later
   in pass 1.5. */
{
  std::string interface_ident = i->tok->text;
  semantics *curr_interface = current_scope->lookup(interface_ident);

  if (curr_interface && dynamic_cast<s_interface*>(curr_interface))
    current_class->interfaces.push_back(dynamic_cast<s_interface*>(curr_interface));
  else if (curr_interface)
      semantic_assert(false,
                "cannot implement non-interface \"%s\"",
                interface_ident.c_str());
  else {
      s_interface *new_interface = new s_interface(interface_ident);
      new_interface->defined = false;
      current_scope->add(interface_ident, new_interface);
      current_class->interfaces.push_back(new_interface);
  }
}

void variable_p1(parse_tree* type, parse_tree* identifier)
{
  /* make sure ident not defined locally. */
  std::string ident = identifier->tok->text;
  semantic_assert(!current_scope->lookup_local(ident),
                  "\"%s\" is already defined",
                  ident.c_str());

  /* find type */
  std::string typestr;
  if (type->description == "arraytype")
    typestr = type->children[0]->children[0]->tok->text;
  else
    typestr = type->children[0]->tok->text;

  semantics *existing_type = current_scope->lookup(typestr);

  /* create variable */
  s_var *new_var = new s_var(ident, dynamic_cast<s_type *>(existing_type));

  /* if undefined type, add to scope with defined=false */
  if (!existing_type)
  {
    s_class *undefined_class = new s_class(typestr);
    undefined_class->defined = false;
    current_scope->add(typestr, undefined_class);
  }

  current_scope->add(ident, new_var);

  /* add declared variables to parameter maps
     if inside a function or prototype. */
  if(current_prototype)
      current_prototype->params.push_back(new_var);
  if(current_function)
      current_function->params.push_back(new_var);
  if (current_class)
    current_class->locals.push_back(new_var);
}

void interface_p1(parse_tree* interface, parse_tree* identifier)
{
  std::string interface_ident = identifier->tok->text;
  semantics *existing_interface = current_scope->lookup(interface_ident);
  current_interface = new s_interface(interface_ident);

  if (existing_interface)
    if(dynamic_cast<s_interface*> (existing_interface))
        if(dynamic_cast<s_interface*>(existing_interface)->defined)
          semantic_assert(false,
                          "\"%s\" is already a defined interface",
                          interface_ident.c_str());
        else
          current_scope->replace(interface_ident, current_interface);
    else
      semantic_assert(false,
                      "\"%s\" is already defined",
                      interface_ident.c_str());
  else
    current_scope->add(interface_ident, current_interface);
}

void prototypes_p1(parse_tree* type, parse_tree* identifier)
{
  std::string ident = identifier->tok->text;
  semantic_assert(!current_scope->lookup_local(ident),
                  "\"%s\" is already defined",
                  ident.c_str());

  current_prototype = new s_prototype(ident);
  std::string typestr;

  if (type->description == "arraytype")
    typestr = type->children[0]->children[0]->tok->text;
  else
    typestr = type->children[0]->tok->text;

  semantics *existing_type = current_scope->lookup(typestr);
  if (!existing_type){
      s_class *undefined_class = new s_class(typestr);
      undefined_class->defined = false;
      current_scope->add(typestr, undefined_class);
  }
  current_prototype->return_type = dynamic_cast<s_type*>(existing_type);
  current_scope->add(ident, current_prototype);
}


#line 302 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 295,                 /* "invalid token"  */
    T_VOID = 260,                  /* "void"  */
    T_INT = 261,                   /* "int"  */
    T_DOUBLE = 262,                /* "double"  */
    T_BOOL = 263,                  /* "bool"  */
    T_STRING = 264,                /* "string"  */
    T_CLASS = 265,                 /* "class"  */
    T_INTERFACE = 266,             /* "interface"  */
    T_NULL = 267,                  /* "null"  */
    T_THIS = 268,                  /* "this"  */
    T_EXTENDS = 269,               /* "extends"  */
    T_IMPLEMENTS = 270,            /* "implements"  */
    T_FOR = 271,                   /* "for"  */
    T_WHILE = 272,                 /* "while"  */
    T_IF = 273,                    /* "if"  */
    T_ELSE = 274,                  /* "else"  */
    T_RETURN = 275,                /* "return"  */
    T_BREAK = 276,                 /* "break"  */
    T_NEW = 277,                   /* "New"  */
    T_NEWARRAY = 278,              /* "NewArray"  */
    T_PRINT = 279,                 /* "Print"  */
    T_READINTEGER = 280,           /* "ReadInteger"  */
    T_READLINE = 281,              /* "ReadLine"  */
    T_LE = 282,                    /* "<="  */
    T_GE = 283,                    /* ">="  */
    T_EQ = 284,                    /* "=="  */
    T_NEQ = 285,                   /* "!="  */
    T_AND = 286,                   /* "&&"  */
    T_OR = 287,                    /* "||"  */
    T_ARRAY = 288,                 /* "[]"  */
    T_DBLLITERAL = 289,            /* T_DBLLITERAL  */
    T_INTLITERAL = 290,            /* T_INTLITERAL  */
    T_BOOLLITERAL = 291,           /* T_BOOLLITERAL  */
    T_IDENTIFIER = 292,            /* T_IDENTIFIER  */
    T_TYPEIDENTIFIER = 293,        /* T_TYPEIDENTIFIER  */
    T_STRINGLITERAL = 294          /* T_STRINGLITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_VOID = 3,                     /* "void"  */
  YYSYMBOL_T_INT = 4,                      /* "int"  */
  YYSYMBOL_T_DOUBLE = 5,                   /* "double"  */
  YYSYMBOL_T_BOOL = 6,                     /* "bool"  */
  YYSYMBOL_T_STRING = 7,                   /* "string"  */
  YYSYMBOL_T_CLASS = 8,                    /* "class"  */
  YYSYMBOL_T_INTERFACE = 9,                /* "interface"  */
  YYSYMBOL_T_NULL = 10,                    /* "null"  */
  YYSYMBOL_T_THIS = 11,                    /* "this"  */
  YYSYMBOL_T_EXTENDS = 12,                 /* "extends"  */
  YYSYMBOL_T_IMPLEMENTS = 13,              /* "implements"  */
  YYSYMBOL_T_FOR = 14,                     /* "for"  */
  YYSYMBOL_T_WHILE = 15,                   /* "while"  */
  YYSYMBOL_T_IF = 16,                      /* "if"  */
  YYSYMBOL_T_ELSE = 17,                    /* "else"  */
  YYSYMBOL_T_RETURN = 18,                  /* "return"  */
  YYSYMBOL_T_BREAK = 19,                   /* "break"  */
  YYSYMBOL_T_NEW = 20,                     /* "New"  */
  YYSYMBOL_T_NEWARRAY = 21,                /* "NewArray"  */
  YYSYMBOL_T_PRINT = 22,                   /* "Print"  */
  YYSYMBOL_T_READINTEGER = 23,             /* "ReadInteger"  */
  YYSYMBOL_T_READLINE = 24,                /* "ReadLine"  */
  YYSYMBOL_T_LE = 25,                      /* "<="  */
  YYSYMBOL_T_GE = 26,                      /* ">="  */
  YYSYMBOL_T_EQ = 27,                      /* "=="  */
  YYSYMBOL_T_NEQ = 28,                     /* "!="  */
  YYSYMBOL_T_AND = 29,                     /* "&&"  */
  YYSYMBOL_T_OR = 30,                      /* "||"  */
  YYSYMBOL_T_ARRAY = 31,                   /* "[]"  */
  YYSYMBOL_T_DBLLITERAL = 32,              /* T_DBLLITERAL  */
  YYSYMBOL_T_INTLITERAL = 33,              /* T_INTLITERAL  */
  YYSYMBOL_T_BOOLLITERAL = 34,             /* T_BOOLLITERAL  */
  YYSYMBOL_T_IDENTIFIER = 35,              /* T_IDENTIFIER  */
  YYSYMBOL_T_TYPEIDENTIFIER = 36,          /* T_TYPEIDENTIFIER  */
  YYSYMBOL_T_STRINGLITERAL = 37,           /* T_STRINGLITERAL  */
  YYSYMBOL_38_ = 38,                       /* ';'  */
  YYSYMBOL_39_ = 39,                       /* '('  */
  YYSYMBOL_40_ = 40,                       /* ')'  */
  YYSYMBOL_41_ = 41,                       /* ','  */
  YYSYMBOL_42_ = 42,                       /* '{'  */
  YYSYMBOL_43_ = 43,                       /* '}'  */
  YYSYMBOL_44_ = 44,                       /* '['  */
  YYSYMBOL_45_ = 45,                       /* ']'  */
  YYSYMBOL_46_ = 46,                       /* '.'  */
  YYSYMBOL_47_ = 47,                       /* '+'  */
  YYSYMBOL_48_ = 48,                       /* '-'  */
  YYSYMBOL_49_ = 49,                       /* '*'  */
  YYSYMBOL_50_ = 50,                       /* '/'  */
  YYSYMBOL_51_ = 51,                       /* '%'  */
  YYSYMBOL_52_ = 52,                       /* '<'  */
  YYSYMBOL_53_ = 53,                       /* '>'  */
  YYSYMBOL_54_ = 54,                       /* '='  */
  YYSYMBOL_55_ = 55,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_pgm = 57,                       /* pgm  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_decl = 59,                      /* decl  */
  YYSYMBOL_varDecl = 60,                   /* varDecl  */
  YYSYMBOL_variable = 61,                  /* variable  */
  YYSYMBOL_type = 62,                      /* type  */
  YYSYMBOL_usertype = 63,                  /* usertype  */
  YYSYMBOL_primtype = 64,                  /* primtype  */
  YYSYMBOL_arraytype = 65,                 /* arraytype  */
  YYSYMBOL_funcDecl = 66,                  /* funcDecl  */
  YYSYMBOL_67_1 = 67,                      /* $@1  */
  YYSYMBOL_68_2 = 68,                      /* $@2  */
  YYSYMBOL_69_3 = 69,                      /* $@3  */
  YYSYMBOL_70_4 = 70,                      /* $@4  */
  YYSYMBOL_formals = 71,                   /* formals  */
  YYSYMBOL_classDecl = 72,                 /* classDecl  */
  YYSYMBOL_73_5 = 73,                      /* $@5  */
  YYSYMBOL_74_6 = 74,                      /* $@6  */
  YYSYMBOL_75_7 = 75,                      /* $@7  */
  YYSYMBOL_76_8 = 76,                      /* $@8  */
  YYSYMBOL_77_9 = 77,                      /* $@9  */
  YYSYMBOL_78_10 = 78,                     /* $@10  */
  YYSYMBOL_fields = 79,                    /* fields  */
  YYSYMBOL_identifiersPlus = 80,           /* identifiersPlus  */
  YYSYMBOL_ext = 81,                       /* ext  */
  YYSYMBOL_interfaceDecl = 82,             /* interfaceDecl  */
  YYSYMBOL_83_11 = 83,                     /* $@11  */
  YYSYMBOL_prototypes = 84,                /* prototypes  */
  YYSYMBOL_prototype = 85,                 /* prototype  */
  YYSYMBOL_86_12 = 86,                     /* $@12  */
  YYSYMBOL_87_13 = 87,                     /* $@13  */
  YYSYMBOL_stmtblock = 88,                 /* stmtblock  */
  YYSYMBOL_varDeclStar = 89,               /* varDeclStar  */
  YYSYMBOL_stmtStar = 90,                  /* stmtStar  */
  YYSYMBOL_stmt = 91,                      /* stmt  */
  YYSYMBOL_matched_stmt = 92,              /* matched_stmt  */
  YYSYMBOL_unmatched_stmt = 93,            /* unmatched_stmt  */
  YYSYMBOL_break_stmt = 94,                /* break_stmt  */
  YYSYMBOL_return_stmt = 95,               /* return_stmt  */
  YYSYMBOL_print_stmt = 96,                /* print_stmt  */
  YYSYMBOL_common_if = 97,                 /* common_if  */
  YYSYMBOL_matched_if = 98,                /* matched_if  */
  YYSYMBOL_unmatched_if = 99,              /* unmatched_if  */
  YYSYMBOL_common_while = 100,             /* common_while  */
  YYSYMBOL_matched_while = 101,            /* matched_while  */
  YYSYMBOL_unmatched_while = 102,          /* unmatched_while  */
  YYSYMBOL_common_for = 103,               /* common_for  */
  YYSYMBOL_matched_for = 104,              /* matched_for  */
  YYSYMBOL_unmatched_for = 105,            /* unmatched_for  */
  YYSYMBOL_expr = 106,                     /* expr  */
  YYSYMBOL_expr1 = 107,                    /* expr1  */
  YYSYMBOL_expr2 = 108,                    /* expr2  */
  YYSYMBOL_expr3 = 109,                    /* expr3  */
  YYSYMBOL_expr4 = 110,                    /* expr4  */
  YYSYMBOL_expr5 = 111,                    /* expr5  */
  YYSYMBOL_expr6 = 112,                    /* expr6  */
  YYSYMBOL_expr7 = 113,                    /* expr7  */
  YYSYMBOL_expr8 = 114,                    /* expr8  */
  YYSYMBOL_expr9 = 115,                    /* expr9  */
  YYSYMBOL_Lvalue = 116,                   /* Lvalue  */
  YYSYMBOL_call = 117,                     /* call  */
  YYSYMBOL_special = 118,                  /* special  */
  YYSYMBOL_nactuals = 119,                 /* nactuals  */
  YYSYMBOL_actuals = 120,                  /* actuals  */
  YYSYMBOL_constant = 121,                 /* constant  */
  YYSYMBOL_typeidentifier = 122,           /* typeidentifier  */
  YYSYMBOL_identifier = 123,               /* identifier  */
  YYSYMBOL_string = 124,                   /* string  */
  YYSYMBOL_int = 125,                      /* int  */
  YYSYMBOL_double = 126,                   /* double  */
  YYSYMBOL_bool = 127,                     /* bool  */
  YYSYMBOL_array = 128,                    /* array  */
  YYSYMBOL_void = 129,                     /* void  */
  YYSYMBOL_break = 130,                    /* break  */
  YYSYMBOL_this = 131,                     /* this  */
  YYSYMBOL_le = 132,                       /* le  */
  YYSYMBOL_ge = 133,                       /* ge  */
  YYSYMBOL_eq = 134,                       /* eq  */
  YYSYMBOL_neq = 135,                      /* neq  */
  YYSYMBOL_and = 136,                      /* and  */
  YYSYMBOL_or = 137,                       /* or  */
  YYSYMBOL_readint = 138,                  /* readint  */
  YYSYMBOL_new = 139,                      /* new  */
  YYSYMBOL_newarray = 140,                 /* newarray  */
  YYSYMBOL_intlit = 141,                   /* intlit  */
  YYSYMBOL_dbllit = 142,                   /* dbllit  */
  YYSYMBOL_boollit = 143,                  /* boollit  */
  YYSYMBOL_stringlit = 144,                /* stringlit  */
  YYSYMBOL_null = 145,                     /* null  */
  YYSYMBOL_readline = 146,                 /* readline  */
  YYSYMBOL_if = 147,                       /* if  */
  YYSYMBOL_else = 148,                     /* else  */
  YYSYMBOL_print = 149,                    /* print  */
  YYSYMBOL_return = 150,                   /* return  */
  YYSYMBOL_class = 151,                    /* class  */
  YYSYMBOL_extends = 152,                  /* extends  */
  YYSYMBOL_implements = 153,               /* implements  */
  YYSYMBOL_for = 154,                      /* for  */
  YYSYMBOL_while = 155,                    /* while  */
  YYSYMBOL_interface = 156,                /* interface  */
  YYSYMBOL_scplus = 157,                   /* scplus  */
  YYSYMBOL_scminus = 158,                  /* scminus  */
  YYSYMBOL_sctimes = 159,                  /* sctimes  */
  YYSYMBOL_scdiv = 160,                    /* scdiv  */
  YYSYMBOL_scmod = 161,                    /* scmod  */
  YYSYMBOL_sclt = 162,                     /* sclt  */
  YYSYMBOL_scgt = 163,                     /* scgt  */
  YYSYMBOL_sceq = 164,                     /* sceq  */
  YYSYMBOL_scneq = 165                     /* scneq  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   429

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,     2,     2,    51,     2,     2,
      39,    40,    49,    47,    41,    48,    46,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
      52,    54,    53,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,     2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   272,   272,   276,   278,   279,   280,   281,   282,   286,
     288,   291,   291,   291,   293,   295,   296,   297,   298,   300,
     301,   304,   305,   304,   308,   309,   308,   312,   313,   314,
     317,   317,   322,   322,   327,   328,   327,   333,   334,   333,
     341,   342,   343,   346,   348,   351,   352,   355,   355,   360,
     361,   363,   363,   368,   368,   385,   387,   388,   390,   391,
     393,   393,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   405,   406,   407,   410,   412,   413,   415,   418,   420,
     422,   423,   424,   427,   429,   431,   435,   436,   437,   438,
     440,   442,   445,   446,   448,   449,   451,   452,   454,   455,
     456,   458,   459,   460,   461,   462,   464,   465,   466,   468,
     469,   470,   471,   473,   474,   475,   477,   478,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   490,   491,   492,
     494,   497,   499,   500,   502,   503,   505,   506,   507,   508,
     509,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   550,   551,   552,   553,
     554,   555,   556,   557,   558
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"void\"", "\"int\"",
  "\"double\"", "\"bool\"", "\"string\"", "\"class\"", "\"interface\"",
  "\"null\"", "\"this\"", "\"extends\"", "\"implements\"", "\"for\"",
  "\"while\"", "\"if\"", "\"else\"", "\"return\"", "\"break\"", "\"New\"",
  "\"NewArray\"", "\"Print\"", "\"ReadInteger\"", "\"ReadLine\"", "\"<=\"",
  "\">=\"", "\"==\"", "\"!=\"", "\"&&\"", "\"||\"", "\"[]\"",
  "T_DBLLITERAL", "T_INTLITERAL", "T_BOOLLITERAL", "T_IDENTIFIER",
  "T_TYPEIDENTIFIER", "T_STRINGLITERAL", "';'", "'('", "')'", "','", "'{'",
  "'}'", "'['", "']'", "'.'", "'+'", "'-'", "'*'", "'/'", "'%'", "'<'",
  "'>'", "'='", "'!'", "$accept", "pgm", "program", "decl", "varDecl",
  "variable", "type", "usertype", "primtype", "arraytype", "funcDecl",
  "$@1", "$@2", "$@3", "$@4", "formals", "classDecl", "$@5", "$@6", "$@7",
  "$@8", "$@9", "$@10", "fields", "identifiersPlus", "ext",
  "interfaceDecl", "$@11", "prototypes", "prototype", "$@12", "$@13",
  "stmtblock", "varDeclStar", "stmtStar", "stmt", "matched_stmt",
  "unmatched_stmt", "break_stmt", "return_stmt", "print_stmt", "common_if",
  "matched_if", "unmatched_if", "common_while", "matched_while",
  "unmatched_while", "common_for", "matched_for", "unmatched_for", "expr",
  "expr1", "expr2", "expr3", "expr4", "expr5", "expr6", "expr7", "expr8",
  "expr9", "Lvalue", "call", "special", "nactuals", "actuals", "constant",
  "typeidentifier", "identifier", "string", "int", "double", "bool",
  "array", "void", "break", "this", "le", "ge", "eq", "neq", "and", "or",
  "readint", "new", "newarray", "intlit", "dbllit", "boollit", "stringlit",
  "null", "readline", "if", "else", "print", "return", "class", "extends",
  "implements", "for", "while", "interface", "scplus", "scminus",
  "sctimes", "scdiv", "scmod", "sclt", "scgt", "sceq", "scneq", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   295,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,    59,    40,
      41,    44,   123,   125,    91,    93,    46,    43,    45,    42,
      47,    37,    60,    62,    61,    33
};
#endif

#define YYPACT_NINF (-198)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-38)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -198,     7,  -198,   379,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,   -26,     1,     9,     9,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,     1,    92,     1,
    -198,  -198,     3,  -198,  -198,  -198,  -198,    36,  -198,  -198,
      15,    17,  -198,    39,    45,    92,    21,    24,  -198,  -198,
    -198,     1,    30,    39,  -198,  -198,  -198,  -198,   166,   250,
      41,  -198,  -198,     1,    40,    74,  -198,   145,  -198,     1,
    -198,     1,    42,    82,    41,  -198,  -198,  -198,  -198,     1,
    -198,     1,    51,  -198,  -198,    51,  -198,  -198,  -198,    55,
    -198,  -198,  -198,  -198,  -198,   126,  -198,    68,    72,   145,
    -198,   139,  -198,  -198,  -198,   177,  -198,   300,   313,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,   357,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,    81,    96,   110,   228,  -198,  -198,
     228,  -198,  -198,   228,  -198,  -198,   115,   129,   136,  -198,
     112,    43,   -21,  -198,    76,  -198,   114,  -198,  -198,  -198,
    -198,  -198,   140,   144,   146,  -198,  -198,  -198,  -198,  -198,
     150,   151,   155,   357,   164,   174,   357,   357,   167,   185,
     138,  -198,  -198,  -198,   207,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,   357,  -198,   357,  -198,  -198,   357,   357,  -198,
    -198,  -198,  -198,  -198,   357,   357,   357,   357,   357,   357,
    -198,  -198,  -198,   357,   357,   357,   357,   357,     1,  -198,
     357,   186,     1,   357,   187,   357,   357,  -198,   261,   357,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,   228,   136,  -198,
    -198,  -198,   108,   108,   -21,   -21,   108,   108,  -198,  -198,
    -198,  -198,   188,   143,   -12,  -198,   129,  -198,   189,   190,
    -198,   193,   117,   357,   192,   -19,  -198,  -198,  -198,   357,
    -198,  -198,   393,  -198,  -198,   196,   357,  -198,  -198,   195,
     197,  -198,   291,   198,  -198,  -198,  -198,   200,   324,  -198,
    -198,   201,  -198
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     3,     1,   148,   144,   145,   146,   143,
     170,   175,   141,     5,     0,     0,    11,    12,    13,     6,
       8,     7,    14,    15,    16,    17,    18,     0,     0,     0,
       9,   142,    10,   147,    19,    20,    24,    34,    30,    47,
       0,     0,   171,     0,    32,     0,     0,     0,    27,    27,
     172,     0,     0,     0,    46,    45,    40,    49,     0,     0,
      35,    43,    40,     0,     0,     0,    22,     0,    28,     0,
      25,     0,     0,     0,    38,    31,    42,    41,    48,     0,
      50,     0,     0,    29,    10,     0,    44,    40,    33,     0,
      51,    53,    56,    23,    26,     0,    40,     0,     0,    58,
      36,     0,    27,    27,    57,     0,    39,     0,     0,   164,
     150,   173,   174,   166,   169,   149,   158,   159,   168,   157,
     165,   161,   160,   162,   163,    62,     0,    55,   177,   184,
      70,    59,    60,    61,     0,     0,     0,     0,    64,    71,
       0,    65,    72,     0,    66,    73,     0,    92,    94,    96,
      98,   101,   106,   109,   113,   116,   117,   121,   118,   127,
      74,   119,     0,     0,     0,   136,   137,   138,   139,   140,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    80,    82,    84,    85,    90,    91,
      63,   156,     0,   155,     0,   153,   154,     0,     0,   151,
     152,   176,   181,   182,     0,     0,     0,     0,     0,     0,
     178,   179,   180,     0,     0,     0,   132,     0,     0,   183,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
     115,   117,   114,    52,    54,   120,   167,     0,    95,    97,
      99,   100,   104,   105,   107,   108,   102,   103,   110,   111,
     112,   134,     0,   133,     0,   129,    93,   122,     0,     0,
     123,     0,     0,     0,     0,     0,    79,    81,   130,     0,
     128,   124,     0,    78,    77,     0,     0,    83,   135,     0,
       0,   131,     0,     0,   125,   126,    89,     0,     0,    87,
      88,     0,    86
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,  -198,  -198,  -198,     6,   -33,    -3,  -198,  -198,  -198,
     242,  -198,  -198,  -198,  -198,   -43,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,   -23,   205,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,   -32,  -198,  -198,  -198,  -135,  -121,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -122,  -197,    61,    65,   -34,    13,   -30,   -77,  -198,  -198,
    -102,  -198,  -198,  -198,    38,  -198,   -18,   -14,  -198,  -198,
    -198,  -198,   256,   209,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,   222,  -198,  -198,
    -198,  -198,  -134,  -198,  -198,  -198,  -198,  -198,  -198,  -198
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,    76,    14,    69,    16,    17,    18,
      77,    40,    82,    41,    85,    58,    20,    46,    52,    43,
      72,    53,    89,    64,    60,    44,    21,    47,    65,    80,
      97,    98,   130,    99,   105,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     231,   157,   280,   252,   253,   158,    22,   159,    23,    24,
      25,    26,    34,    27,   160,   161,   204,   205,   197,   198,
     194,   192,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   237,   172,   173,    28,    45,    51,   174,   175,
      29,   206,   176,   213,   214,   215,   208,   209,   220,   177
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    32,   184,   156,   180,   186,    59,     4,   188,    13,
      37,   191,    30,    36,    38,    39,   185,   207,   191,   187,
     254,   277,   189,   256,   156,    68,    68,    54,   210,   211,
     212,    55,   265,   270,    83,   156,    31,    61,   156,    73,
      33,   156,   -21,     5,     6,     7,     8,     9,    42,    61,
      93,   227,    50,    94,    48,    84,    49,    86,   -37,   107,
     108,    15,    79,    56,    95,    90,    57,    91,   199,   200,
      15,   156,    62,   101,    68,    68,    12,     5,     6,     7,
       8,     9,    71,    75,    87,     5,     6,     7,     8,     9,
     201,   128,    15,    92,   251,   202,   203,    96,    15,   230,
     232,   259,   266,   261,   251,   104,   264,   102,   207,   207,
      12,   103,   207,   207,   156,   216,   267,    78,    12,   181,
     217,   156,   218,   156,   156,    88,   156,    31,    12,     5,
       6,     7,     8,     9,   182,   156,   248,   249,   250,   195,
     196,   275,     5,     6,     7,     8,     9,   278,   183,     6,
       7,     8,     9,   190,   283,   201,   128,   274,   269,   191,
     287,   156,    12,   240,   241,   193,   291,   156,   219,   100,
       6,     7,     8,     9,   156,    12,   244,   245,   235,   221,
     156,    12,   106,   222,   269,   223,   156,   109,   110,   224,
     225,   111,   112,   113,   226,   114,   115,   116,   117,   118,
     119,   120,    12,   228,   255,   233,    66,    67,   258,   121,
     122,   123,    31,   229,   124,   125,   126,   242,   243,    92,
     127,   246,   247,   234,   236,   128,   257,   260,   268,   271,
     276,   272,   129,   273,   282,   284,   288,   285,   109,   110,
     289,   292,   111,   112,   113,    19,   114,   115,   116,   117,
     118,   119,   120,   238,     6,     7,     8,     9,   281,   239,
     121,   122,   123,    31,   262,   124,   125,   126,    74,   279,
      92,   109,   110,    35,    81,    63,   128,     0,     0,     0,
       0,   116,   117,   129,   119,   120,    12,     0,     0,     0,
      70,    67,     0,   121,   122,   123,    31,     0,   124,   263,
     126,   109,   110,     0,     6,     7,     8,     9,     0,   128,
       0,   116,   117,     0,   119,   120,   129,     6,     7,     8,
       9,     0,     0,   121,   122,   123,    31,     0,   124,     0,
     126,   286,     0,     0,   109,   110,    12,     0,     0,   128,
     178,    67,     0,     0,   116,   117,   129,   119,   120,    12,
       0,     0,     0,   179,    67,     0,   121,   122,   123,    31,
       0,   124,     0,   126,   290,     0,     0,   109,   110,     0,
       0,     0,   128,     0,     0,     0,     0,   116,   117,   129,
     119,   120,     5,     6,     7,     8,     9,    10,    11,   121,
     122,   123,    31,     0,   124,     0,   126,     6,     7,     8,
       9,     0,     0,     0,     0,   128,     0,     0,     0,     0,
       0,     0,   129,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    12
};

static const yytype_int16 yycheck[] =
{
       3,    15,   137,   105,   126,   140,    49,     0,   143,     3,
      28,    30,    38,    27,    28,    29,   137,   151,    30,   140,
     217,    40,   143,   220,   126,    58,    59,    45,    49,    50,
      51,    45,   229,    45,    67,   137,    35,    51,   140,    62,
      31,   143,    39,     3,     4,     5,     6,     7,    12,    63,
      82,   173,    13,    85,    39,    69,    39,    71,    13,   102,
     103,    64,    65,    42,    87,    79,    42,    81,    25,    26,
      73,   173,    42,    96,   107,   108,    36,     3,     4,     5,
       6,     7,    41,    43,    42,     3,     4,     5,     6,     7,
      47,    48,    95,    42,   216,    52,    53,    42,   101,   176,
     177,   223,   237,   225,   226,    99,   228,    39,   242,   243,
      36,    39,   246,   247,   216,    39,   237,    43,    36,    38,
      44,   223,    46,   225,   226,    43,   228,    35,    36,     3,
       4,     5,     6,     7,    38,   237,   213,   214,   215,    27,
      28,   263,     3,     4,     5,     6,     7,   269,    38,     4,
       5,     6,     7,    38,   276,    47,    48,    40,    41,    30,
     282,   263,    36,   197,   198,    29,   288,   269,    54,    43,
       4,     5,     6,     7,   276,    36,   206,   207,    40,    39,
     282,    36,    43,    39,    41,    39,   288,    10,    11,    39,
      39,    14,    15,    16,    39,    18,    19,    20,    21,    22,
      23,    24,    36,    39,   218,    38,    40,    41,   222,    32,
      33,    34,    35,    39,    37,    38,    39,   204,   205,    42,
      43,   208,   209,    38,    17,    48,    40,    40,    40,    40,
      38,    41,    55,    40,    38,    40,    38,    40,    10,    11,
      40,    40,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,   192,     4,     5,     6,     7,   272,   194,
      32,    33,    34,    35,   226,    37,    38,    39,    63,   272,
      42,    10,    11,    17,    65,    53,    48,    -1,    -1,    -1,
      -1,    20,    21,    55,    23,    24,    36,    -1,    -1,    -1,
      40,    41,    -1,    32,    33,    34,    35,    -1,    37,    38,
      39,    10,    11,    -1,     4,     5,     6,     7,    -1,    48,
      -1,    20,    21,    -1,    23,    24,    55,     4,     5,     6,
       7,    -1,    -1,    32,    33,    34,    35,    -1,    37,    -1,
      39,    40,    -1,    -1,    10,    11,    36,    -1,    -1,    48,
      40,    41,    -1,    -1,    20,    21,    55,    23,    24,    36,
      -1,    -1,    -1,    40,    41,    -1,    32,    33,    34,    35,
      -1,    37,    -1,    39,    40,    -1,    -1,    10,    11,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    20,    21,    55,
      23,    24,     3,     4,     5,     6,     7,     8,     9,    32,
      33,    34,    35,    -1,    37,    -1,    39,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,    59,     0,     3,     4,     5,     6,     7,
       8,     9,    36,    60,    61,    62,    63,    64,    65,    66,
      72,    82,   122,   124,   125,   126,   127,   129,   151,   156,
      38,    35,   123,    31,   128,   128,   123,   122,   123,   123,
      67,    69,    12,    75,    81,   152,    73,    83,    39,    39,
      13,   153,    74,    77,   122,   123,    42,    42,    71,    71,
      80,   123,    42,   153,    79,    84,    40,    41,    61,    62,
      40,    41,    76,    79,    80,    43,    60,    66,    43,    62,
      85,   129,    68,    61,   123,    70,   123,    42,    43,    78,
     123,   123,    42,    88,    88,    79,    42,    86,    87,    89,
      43,    79,    39,    39,    60,    90,    43,    71,    71,    10,
      11,    14,    15,    16,    18,    19,    20,    21,    22,    23,
      24,    32,    33,    34,    37,    38,    39,    43,    48,    55,
      88,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   121,   123,
     130,   131,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   149,   150,   154,   155,   158,   165,    40,    40,
     106,    38,    38,    38,    92,    93,    92,    93,    92,    93,
      38,    30,   137,    29,   136,    27,    28,   134,   135,    25,
      26,    47,    52,    53,   132,   133,   157,   158,   162,   163,
      49,    50,    51,   159,   160,   161,    39,    44,    46,    54,
     164,    39,    39,    39,    39,    39,    39,   106,    39,    39,
     113,   116,   113,    38,    38,    40,    17,   148,   108,   109,
     110,   110,   111,   111,   112,   112,   111,   111,   113,   113,
     113,   106,   119,   120,   107,   123,   107,    40,   123,   106,
      40,   106,   120,    38,   106,   107,    92,    93,    40,    41,
      45,    40,    41,    40,    40,   106,    38,    40,   106,    62,
     118,   123,    38,   106,    40,    40,    40,   106,    38,    40,
      40,   106,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    59,    59,    59,    59,    59,    60,
      61,    62,    62,    62,    63,    64,    64,    64,    64,    65,
      65,    67,    68,    66,    69,    70,    66,    71,    71,    71,
      73,    72,    74,    72,    75,    76,    72,    77,    78,    72,
      79,    79,    79,    80,    80,    81,    81,    83,    82,    84,
      84,    86,    85,    87,    85,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    94,    95,    95,    96,    97,    98,
      99,    99,    99,   100,   101,   102,   103,   103,   103,   103,
     104,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     109,   110,   110,   110,   110,   110,   111,   111,   111,   112,
     112,   112,   112,   113,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     117,   118,   119,   119,   120,   120,   121,   121,   121,   121,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     0,     0,     8,     0,     0,     8,     0,     2,     3,
       0,     6,     0,     7,     0,     0,     9,     0,     0,    10,
       0,     2,     2,     1,     3,     2,     2,     0,     6,     0,
       2,     0,     7,     0,     7,     4,     0,     2,     0,     2,
       1,     1,     1,     2,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     4,     4,     4,
       2,     4,     2,     4,     2,     2,     8,     7,     7,     6,
       2,     2,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     2,     1,     1,     1,     1,
       3,     1,     3,     3,     4,     6,     6,     1,     4,     3,
       4,     1,     0,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* pgm: program  */
#line 272 "decaf.y"
             {top = yyval = yyvsp[0];}
#line 2067 "y.tab.c"
    break;

  case 3: /* program: decl  */
#line 276 "decaf.y"
              {yyval = yyvsp[0];}
#line 2073 "y.tab.c"
    break;

  case 4: /* decl: %empty  */
#line 278 "decaf.y"
                  {yyval = new parse_tree("program"); }
#line 2079 "y.tab.c"
    break;

  case 5: /* decl: decl varDecl  */
#line 279 "decaf.y"
                   {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2085 "y.tab.c"
    break;

  case 6: /* decl: decl funcDecl  */
#line 280 "decaf.y"
                    {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2091 "y.tab.c"
    break;

  case 7: /* decl: decl interfaceDecl  */
#line 281 "decaf.y"
                         {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2097 "y.tab.c"
    break;

  case 8: /* decl: decl classDecl  */
#line 282 "decaf.y"
                     {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2103 "y.tab.c"
    break;

  case 10: /* variable: type identifier  */
#line 288 "decaf.y"
                          { variable_p1(yyvsp[-1], yyvsp[0]); //semantic checking
                            yyval = new parse_tree("variable", 2, yyvsp[-1], yyvsp[0]); }
#line 2110 "y.tab.c"
    break;

  case 14: /* usertype: typeidentifier  */
#line 293 "decaf.y"
                         {yyval = new parse_tree("usertype", 1, yyvsp[0]); }
#line 2116 "y.tab.c"
    break;

  case 15: /* primtype: string  */
#line 295 "decaf.y"
                 {yyval = new parse_tree("primtype", 1, yyvsp[0]); }
#line 2122 "y.tab.c"
    break;

  case 16: /* primtype: int  */
#line 296 "decaf.y"
              {yyval = new parse_tree("primtype", 1, yyvsp[0]); }
#line 2128 "y.tab.c"
    break;

  case 17: /* primtype: double  */
#line 297 "decaf.y"
                 {yyval = new parse_tree("primtype", 1, yyvsp[0]); }
#line 2134 "y.tab.c"
    break;

  case 18: /* primtype: bool  */
#line 298 "decaf.y"
               {yyval = new parse_tree("primtype", 1, yyvsp[0]); }
#line 2140 "y.tab.c"
    break;

  case 19: /* arraytype: usertype array  */
#line 300 "decaf.y"
                          {yyval = new parse_tree("arraytype", 1, yyvsp[-1]); }
#line 2146 "y.tab.c"
    break;

  case 20: /* arraytype: primtype array  */
#line 301 "decaf.y"
                          {yyval = new parse_tree("arraytype", 1, yyvsp[-1]); }
#line 2152 "y.tab.c"
    break;

  case 21: /* $@1: %empty  */
#line 304 "decaf.y"
                                { func_p1(yyvsp[0], yyvsp[-1]); open_scope(); }
#line 2158 "y.tab.c"
    break;

  case 22: /* $@2: %empty  */
#line 305 "decaf.y"
                             { open_scope(); func_p2();}
#line 2164 "y.tab.c"
    break;

  case 23: /* funcDecl: type identifier $@1 '(' formals ')' $@2 stmtblock  */
#line 306 "decaf.y"
                       { close_scope(); close_scope(); yyval = new parse_tree("functiondecl", 4, yyvsp[-7], yyvsp[-6], yyvsp[-3], yyvsp[0]); }
#line 2170 "y.tab.c"
    break;

  case 24: /* $@3: %empty  */
#line 308 "decaf.y"
                                { func_p1(yyvsp[0], yyvsp[-1]); open_scope(); }
#line 2176 "y.tab.c"
    break;

  case 25: /* $@4: %empty  */
#line 309 "decaf.y"
                             { open_scope(); func_p2();}
#line 2182 "y.tab.c"
    break;

  case 26: /* funcDecl: void identifier $@3 '(' formals ')' $@4 stmtblock  */
#line 310 "decaf.y"
                       { close_scope(); close_scope(); yyval = new parse_tree("functiondecl", 4, yyvsp[-7], yyvsp[-6], yyvsp[-3], yyvsp[0]); }
#line 2188 "y.tab.c"
    break;

  case 27: /* formals: %empty  */
#line 312 "decaf.y"
                     {yyval = new parse_tree("formals"); }
#line 2194 "y.tab.c"
    break;

  case 28: /* formals: formals variable  */
#line 313 "decaf.y"
                                {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2200 "y.tab.c"
    break;

  case 29: /* formals: formals ',' variable  */
#line 314 "decaf.y"
                                    {yyvsp[-2]->add_child(yyvsp[0]); yyval = yyvsp[-2]; }
#line 2206 "y.tab.c"
    break;

  case 30: /* $@5: %empty  */
#line 317 "decaf.y"
                               { class_p1(yyvsp[0]); open_scope(); }
#line 2212 "y.tab.c"
    break;

  case 31: /* classDecl: class identifier $@5 '{' fields '}'  */
#line 318 "decaf.y"
                          { close_scope();
                            current_class = nullptr;
                            yyval = new parse_tree("class", 4, yyvsp[-4], nullptr, nullptr, yyvsp[-1]); }
#line 2220 "y.tab.c"
    break;

  case 32: /* $@6: %empty  */
#line 322 "decaf.y"
                                       { class_extends(yyvsp[-1], yyvsp[0]); open_scope(); }
#line 2226 "y.tab.c"
    break;

  case 33: /* classDecl: class typeidentifier ext $@6 '{' fields '}'  */
#line 323 "decaf.y"
                          { close_scope();
                            current_class = nullptr;
                            yyval = new parse_tree("class", 4, yyvsp[-5], yyvsp[-4], nullptr, yyvsp[-1]); }
#line 2234 "y.tab.c"
    break;

  case 34: /* $@7: %empty  */
#line 327 "decaf.y"
                                   { class_p1(yyvsp[0]); }
#line 2240 "y.tab.c"
    break;

  case 35: /* $@8: %empty  */
#line 328 "decaf.y"
                                          { open_scope(); }
#line 2246 "y.tab.c"
    break;

  case 36: /* classDecl: class typeidentifier $@7 implements identifiersPlus $@8 '{' fields '}'  */
#line 329 "decaf.y"
                          { close_scope();
                            current_class = nullptr;
                            yyval = new parse_tree("class", 4, yyvsp[-7], nullptr, yyvsp[-4], yyvsp[-1]); }
#line 2254 "y.tab.c"
    break;

  case 37: /* $@9: %empty  */
#line 333 "decaf.y"
                                       { class_extends(yyvsp[-1], yyvsp[0]); }
#line 2260 "y.tab.c"
    break;

  case 38: /* $@10: %empty  */
#line 334 "decaf.y"
                                          { open_scope(); }
#line 2266 "y.tab.c"
    break;

  case 39: /* classDecl: class typeidentifier ext $@9 implements identifiersPlus $@10 '{' fields '}'  */
#line 335 "decaf.y"
                          { close_scope();
                            current_class = nullptr;
                            yyval = new parse_tree("class", 4, yyvsp[-8], yyvsp[-7], yyvsp[-4], yyvsp[-1]); }
#line 2274 "y.tab.c"
    break;

  case 40: /* fields: %empty  */
#line 341 "decaf.y"
                    {yyval = new parse_tree("fields");}
#line 2280 "y.tab.c"
    break;

  case 41: /* fields: fields funcDecl  */
#line 342 "decaf.y"
                        {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2286 "y.tab.c"
    break;

  case 42: /* fields: fields varDecl  */
#line 343 "decaf.y"
                       {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2292 "y.tab.c"
    break;

  case 43: /* identifiersPlus: identifier  */
#line 346 "decaf.y"
                               { identifierplus_p1(yyvsp[0]);
                                 yyval = new parse_tree("implements", 1, yyvsp[0]); }
#line 2299 "y.tab.c"
    break;

  case 44: /* identifiersPlus: identifiersPlus ',' identifier  */
#line 348 "decaf.y"
                                                   { identifierplus_p1(yyvsp[0]);
                                                     yyvsp[-2]->add_child(yyvsp[0]); yyval = yyvsp[-2]; }
#line 2306 "y.tab.c"
    break;

  case 45: /* ext: extends identifier  */
#line 351 "decaf.y"
                           { yyval = new parse_tree("extends", 1, yyvsp[0]); }
#line 2312 "y.tab.c"
    break;

  case 46: /* ext: extends typeidentifier  */
#line 352 "decaf.y"
                               {yyval = new parse_tree("extends", 1, yyvsp[0]); }
#line 2318 "y.tab.c"
    break;

  case 47: /* $@11: %empty  */
#line 355 "decaf.y"
                                       { interface_p1(yyvsp[-1], yyvsp[0]); open_scope(); }
#line 2324 "y.tab.c"
    break;

  case 48: /* interfaceDecl: interface identifier $@11 '{' prototypes '}'  */
#line 356 "decaf.y"
                                     { close_scope();
                                       current_interface = nullptr;
                                       yyval = new parse_tree("interface", 2, yyvsp[-4], yyvsp[-1]); }
#line 2332 "y.tab.c"
    break;

  case 49: /* prototypes: %empty  */
#line 360 "decaf.y"
                        {yyval = new parse_tree("prototypes");}
#line 2338 "y.tab.c"
    break;

  case 50: /* prototypes: prototypes prototype  */
#line 361 "decaf.y"
                                 {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2344 "y.tab.c"
    break;

  case 51: /* $@12: %empty  */
#line 363 "decaf.y"
                              { prototypes_p1(yyvsp[-1], yyvsp[0]); open_scope(); }
#line 2350 "y.tab.c"
    break;

  case 52: /* prototype: type identifier $@12 '(' formals ')' ';'  */
#line 364 "decaf.y"
                                   { close_scope();
                                     current_interface->prototype_map.insert({current_prototype->name, current_prototype});
                                     current_prototype = nullptr;
                                     yyval = new parse_tree("prototype", 3, yyvsp[-6], yyvsp[-5], yyvsp[-2]); }
#line 2359 "y.tab.c"
    break;

  case 53: /* $@13: %empty  */
#line 368 "decaf.y"
                              { std::string ident = yyvsp[0]->tok->text;
                                semantic_assert(!current_scope->lookup_local(ident),
                                                "\"%s\" is already defined",
                                                ident.c_str());

                                current_prototype = new s_prototype(ident);
                                semantics *type = current_scope->lookup(yyvsp[-1]->tok->text);
                                current_prototype->return_type = dynamic_cast<s_type*>(type);
                                current_scope->add(ident, current_prototype);

                                open_scope(); }
#line 2375 "y.tab.c"
    break;

  case 54: /* prototype: void identifier $@13 '(' formals ')' ';'  */
#line 379 "decaf.y"
                                  { close_scope();
                                    current_interface->prototype_map.insert({current_prototype->name, current_prototype});
                                    current_prototype = nullptr;
                                    yyval = new parse_tree("prototype", 3, yyvsp[-6], yyvsp[-5], yyvsp[-2]); }
#line 2384 "y.tab.c"
    break;

  case 55: /* stmtblock: '{' varDeclStar stmtStar '}'  */
#line 385 "decaf.y"
                                              {yyval = new parse_tree("stmtblock", 2, yyvsp[-2], yyvsp[-1]);}
#line 2390 "y.tab.c"
    break;

  case 56: /* varDeclStar: %empty  */
#line 387 "decaf.y"
                         {yyval = new parse_tree("vardecls");}
#line 2396 "y.tab.c"
    break;

  case 57: /* varDeclStar: varDeclStar varDecl  */
#line 388 "decaf.y"
                                 {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2402 "y.tab.c"
    break;

  case 58: /* stmtStar: %empty  */
#line 390 "decaf.y"
                      {yyval = new parse_tree("stmts");}
#line 2408 "y.tab.c"
    break;

  case 59: /* stmtStar: stmtStar stmt  */
#line 391 "decaf.y"
                        {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2414 "y.tab.c"
    break;

  case 62: /* matched_stmt: ';'  */
#line 395 "decaf.y"
                  {yyval = new parse_tree("nullstmt"); }
#line 2420 "y.tab.c"
    break;

  case 74: /* break_stmt: break  */
#line 410 "decaf.y"
                  {yyval = new parse_tree("break", 1, yyvsp[0]); }
#line 2426 "y.tab.c"
    break;

  case 75: /* return_stmt: return  */
#line 412 "decaf.y"
                    {yyval = new parse_tree("return", 1, yyvsp[0]); }
#line 2432 "y.tab.c"
    break;

  case 76: /* return_stmt: return expr  */
#line 413 "decaf.y"
                         {yyval = new parse_tree("return", 2, yyvsp[-1], yyvsp[0]); }
#line 2438 "y.tab.c"
    break;

  case 77: /* print_stmt: print '(' actuals ')'  */
#line 415 "decaf.y"
                                        {yyval = new parse_tree("print", 2, yyvsp[-3], yyvsp[-1]); }
#line 2444 "y.tab.c"
    break;

  case 78: /* common_if: if '(' expr ')'  */
#line 418 "decaf.y"
                           {yyval = new parse_tree("if", 1, yyvsp[-1]); }
#line 2450 "y.tab.c"
    break;

  case 79: /* matched_if: common_if matched_stmt else matched_stmt  */
#line 420 "decaf.y"
                                                             {yyval->add_child(yyvsp[-2]); yyval->add_child(yyvsp[0]); yyval = yyvsp[-3]; }
#line 2456 "y.tab.c"
    break;

  case 80: /* unmatched_if: common_if matched_stmt  */
#line 422 "decaf.y"
                                                                 {yyval->add_child(yyvsp[0]); yyval->add_child(nullptr); yyval = yyvsp[-1]; }
#line 2462 "y.tab.c"
    break;

  case 81: /* unmatched_if: common_if matched_stmt else unmatched_stmt  */
#line 423 "decaf.y"
                                                                 {yyval->add_child(yyvsp[-2]); yyval->add_child(yyvsp[0]); yyval = yyvsp[-3]; }
#line 2468 "y.tab.c"
    break;

  case 82: /* unmatched_if: common_if unmatched_stmt  */
#line 424 "decaf.y"
                                                                 {yyval->add_child(yyvsp[0]); yyval->add_child(nullptr); yyval = yyvsp[-1]; }
#line 2474 "y.tab.c"
    break;

  case 83: /* common_while: while '(' expr1 ')'  */
#line 427 "decaf.y"
                                  {yyval = new parse_tree("while", 1, yyvsp[-1]); }
#line 2480 "y.tab.c"
    break;

  case 84: /* matched_while: common_while matched_stmt  */
#line 429 "decaf.y"
                                             {yyval ->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2486 "y.tab.c"
    break;

  case 85: /* unmatched_while: common_while unmatched_stmt  */
#line 431 "decaf.y"
                                                 {yyval->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2492 "y.tab.c"
    break;

  case 86: /* common_for: for '(' expr ';' expr ';' expr ')'  */
#line 435 "decaf.y"
                                                        {yyval = new parse_tree("for", 3, yyvsp[-5], yyvsp[-3], yyvsp[-1]); }
#line 2498 "y.tab.c"
    break;

  case 87: /* common_for: for '(' ';' expr ';' expr ')'  */
#line 436 "decaf.y"
                                                        {yyval = new parse_tree("for", 3, nullptr, yyvsp[-3], yyvsp[-1]); }
#line 2504 "y.tab.c"
    break;

  case 88: /* common_for: for '(' expr ';' expr ';' ')'  */
#line 437 "decaf.y"
                                                        {yyval = new parse_tree("for", 3, yyvsp[-4], yyvsp[-2], nullptr); }
#line 2510 "y.tab.c"
    break;

  case 89: /* common_for: for '(' ';' expr ';' ')'  */
#line 438 "decaf.y"
                                                        {yyval = new parse_tree("for", 3, nullptr, yyvsp[-2], nullptr); }
#line 2516 "y.tab.c"
    break;

  case 90: /* matched_for: common_for matched_stmt  */
#line 440 "decaf.y"
                                         {yyval ->add_child(yyvsp[0]); yyval = yyvsp[-1];}
#line 2522 "y.tab.c"
    break;

  case 91: /* unmatched_for: common_for unmatched_stmt  */
#line 442 "decaf.y"
                                             {yyval ->add_child(yyvsp[0]); yyval = yyvsp[-1];}
#line 2528 "y.tab.c"
    break;

  case 93: /* expr: Lvalue sceq expr1  */
#line 446 "decaf.y"
                              {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2534 "y.tab.c"
    break;

  case 95: /* expr1: expr1 or expr2  */
#line 449 "decaf.y"
                             {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2540 "y.tab.c"
    break;

  case 97: /* expr2: expr2 and expr3  */
#line 452 "decaf.y"
                              {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2546 "y.tab.c"
    break;

  case 99: /* expr3: expr4 eq expr4  */
#line 455 "decaf.y"
                              {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2552 "y.tab.c"
    break;

  case 100: /* expr3: expr4 neq expr4  */
#line 456 "decaf.y"
                               {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2558 "y.tab.c"
    break;

  case 102: /* expr4: expr5 sclt expr5  */
#line 459 "decaf.y"
                                {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2564 "y.tab.c"
    break;

  case 103: /* expr4: expr5 scgt expr5  */
#line 460 "decaf.y"
                                {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2570 "y.tab.c"
    break;

  case 104: /* expr4: expr5 le expr5  */
#line 461 "decaf.y"
                              {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2576 "y.tab.c"
    break;

  case 105: /* expr4: expr5 ge expr5  */
#line 462 "decaf.y"
                              {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2582 "y.tab.c"
    break;

  case 107: /* expr5: expr5 scplus expr6  */
#line 465 "decaf.y"
                                 {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2588 "y.tab.c"
    break;

  case 108: /* expr5: expr5 scminus expr6  */
#line 466 "decaf.y"
                                  {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2594 "y.tab.c"
    break;

  case 110: /* expr6: expr6 sctimes expr7  */
#line 469 "decaf.y"
                                  {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2600 "y.tab.c"
    break;

  case 111: /* expr6: expr6 scdiv expr7  */
#line 470 "decaf.y"
                                {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2606 "y.tab.c"
    break;

  case 112: /* expr6: expr6 scmod expr7  */
#line 471 "decaf.y"
                                {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2612 "y.tab.c"
    break;

  case 114: /* expr7: scneq expr7  */
#line 474 "decaf.y"
                          {yyval = new parse_tree("uop", 2, yyvsp[-1], yyvsp[0]);}
#line 2618 "y.tab.c"
    break;

  case 115: /* expr7: scminus expr7  */
#line 475 "decaf.y"
                            {yyval = new parse_tree("uop", 2, yyvsp[-1], yyvsp[0]);}
#line 2624 "y.tab.c"
    break;

  case 120: /* expr9: '(' expr ')'  */
#line 482 "decaf.y"
                    { yyval = yyvsp[-1]; }
#line 2630 "y.tab.c"
    break;

  case 124: /* expr9: new '(' identifier ')'  */
#line 486 "decaf.y"
                                 {yyval = new parse_tree("new", 1, yyvsp[-1]);}
#line 2636 "y.tab.c"
    break;

  case 125: /* expr9: newarray '(' expr ',' type ')'  */
#line 487 "decaf.y"
                                            {yyval = new parse_tree("newarray", 2, yyvsp[-3], yyvsp[-1]);}
#line 2642 "y.tab.c"
    break;

  case 126: /* expr9: newarray '(' expr ',' special ')'  */
#line 488 "decaf.y"
                                               {yyval = new parse_tree("newarray", 2, yyvsp[-3], yyvsp[-1]);}
#line 2648 "y.tab.c"
    break;

  case 128: /* Lvalue: expr8 '[' expr1 ']'  */
#line 491 "decaf.y"
                                    {yyval = new parse_tree("aref", 2, yyvsp[-3], yyvsp[-1]);}
#line 2654 "y.tab.c"
    break;

  case 129: /* Lvalue: expr8 '.' identifier  */
#line 492 "decaf.y"
                                    {yyval = new parse_tree("fieldaccess", 2, yyvsp[-2], yyvsp[0]);}
#line 2660 "y.tab.c"
    break;

  case 130: /* call: expr8 '(' nactuals ')'  */
#line 494 "decaf.y"
                                   {yyval = new parse_tree("call", 2, yyvsp[-3], yyvsp[-1]);}
#line 2666 "y.tab.c"
    break;

  case 131: /* special: identifier  */
#line 497 "decaf.y"
                       {yyval = new parse_tree("usertype", 1, yyvsp[0]);}
#line 2672 "y.tab.c"
    break;

  case 132: /* nactuals: %empty  */
#line 499 "decaf.y"
                      {yyval = new parse_tree("actuals");}
#line 2678 "y.tab.c"
    break;

  case 134: /* actuals: expr  */
#line 502 "decaf.y"
              {yyval = new parse_tree("actuals", 1, yyvsp[0]);}
#line 2684 "y.tab.c"
    break;

  case 135: /* actuals: actuals ',' expr  */
#line 503 "decaf.y"
                          {yyvsp[-2]->add_child(yyvsp[0]); yyval = yyvsp[-2];}
#line 2690 "y.tab.c"
    break;

  case 141: /* typeidentifier: T_TYPEIDENTIFIER  */
#line 512 "decaf.y"
                                 { yyval = new parse_tree(mytok); }
#line 2696 "y.tab.c"
    break;

  case 142: /* identifier: T_IDENTIFIER  */
#line 513 "decaf.y"
                         { yyval = new parse_tree(mytok); }
#line 2702 "y.tab.c"
    break;

  case 143: /* string: "string"  */
#line 514 "decaf.y"
                 { yyval = new parse_tree(mytok); }
#line 2708 "y.tab.c"
    break;

  case 144: /* int: "int"  */
#line 515 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2714 "y.tab.c"
    break;

  case 145: /* double: "double"  */
#line 516 "decaf.y"
                 { yyval = new parse_tree(mytok); }
#line 2720 "y.tab.c"
    break;

  case 146: /* bool: "bool"  */
#line 517 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2726 "y.tab.c"
    break;

  case 147: /* array: "[]"  */
#line 518 "decaf.y"
               { yyval = new parse_tree(mytok); }
#line 2732 "y.tab.c"
    break;

  case 148: /* void: "void"  */
#line 519 "decaf.y"
             { yyval = new parse_tree(mytok); yyval->type = semantics_void_type; }
#line 2738 "y.tab.c"
    break;

  case 149: /* break: "break"  */
#line 520 "decaf.y"
               { yyval = new parse_tree(mytok); }
#line 2744 "y.tab.c"
    break;

  case 150: /* this: "this"  */
#line 521 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2750 "y.tab.c"
    break;

  case 151: /* le: "<="  */
#line 522 "decaf.y"
         { yyval = new parse_tree(mytok); }
#line 2756 "y.tab.c"
    break;

  case 152: /* ge: ">="  */
#line 523 "decaf.y"
         { yyval = new parse_tree(mytok); }
#line 2762 "y.tab.c"
    break;

  case 153: /* eq: "=="  */
#line 524 "decaf.y"
         { yyval = new parse_tree(mytok); }
#line 2768 "y.tab.c"
    break;

  case 154: /* neq: "!="  */
#line 525 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2774 "y.tab.c"
    break;

  case 155: /* and: "&&"  */
#line 526 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2780 "y.tab.c"
    break;

  case 156: /* or: "||"  */
#line 527 "decaf.y"
         { yyval = new parse_tree(mytok); }
#line 2786 "y.tab.c"
    break;

  case 157: /* readint: "ReadInteger"  */
#line 528 "decaf.y"
                       { yyval = new parse_tree(mytok); }
#line 2792 "y.tab.c"
    break;

  case 158: /* new: "New"  */
#line 529 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2798 "y.tab.c"
    break;

  case 159: /* newarray: "NewArray"  */
#line 530 "decaf.y"
                     { yyval = new parse_tree(mytok); }
#line 2804 "y.tab.c"
    break;

  case 160: /* intlit: T_INTLITERAL  */
#line 531 "decaf.y"
                     { yyval = new parse_tree(mytok);  yyval->type = semantics_int_type; }
#line 2810 "y.tab.c"
    break;

  case 161: /* dbllit: T_DBLLITERAL  */
#line 532 "decaf.y"
                     { yyval = new parse_tree(mytok); yyval->type = semantics_double_type; }
#line 2816 "y.tab.c"
    break;

  case 162: /* boollit: T_BOOLLITERAL  */
#line 533 "decaf.y"
                       { yyval = new parse_tree(mytok); yyval->type = semantics_bool_type; }
#line 2822 "y.tab.c"
    break;

  case 163: /* stringlit: T_STRINGLITERAL  */
#line 534 "decaf.y"
                           { yyval = new parse_tree(mytok); yyval->type = semantics_string_type; }
#line 2828 "y.tab.c"
    break;

  case 164: /* null: "null"  */
#line 535 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2834 "y.tab.c"
    break;

  case 165: /* readline: "ReadLine"  */
#line 536 "decaf.y"
                     { yyval = new parse_tree(mytok); }
#line 2840 "y.tab.c"
    break;

  case 166: /* if: "if"  */
#line 537 "decaf.y"
         { yyval = new parse_tree(mytok); }
#line 2846 "y.tab.c"
    break;

  case 167: /* else: "else"  */
#line 538 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2852 "y.tab.c"
    break;

  case 168: /* print: "Print"  */
#line 539 "decaf.y"
               { yyval = new parse_tree(mytok); }
#line 2858 "y.tab.c"
    break;

  case 169: /* return: "return"  */
#line 540 "decaf.y"
                 { yyval = new parse_tree(mytok); }
#line 2864 "y.tab.c"
    break;

  case 170: /* class: "class"  */
#line 541 "decaf.y"
               { yyval = new parse_tree(mytok); }
#line 2870 "y.tab.c"
    break;

  case 171: /* extends: "extends"  */
#line 542 "decaf.y"
                   { yyval = new parse_tree(mytok); }
#line 2876 "y.tab.c"
    break;

  case 172: /* implements: "implements"  */
#line 543 "decaf.y"
                         { yyval = new parse_tree(mytok); }
#line 2882 "y.tab.c"
    break;

  case 173: /* for: "for"  */
#line 544 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2888 "y.tab.c"
    break;

  case 174: /* while: "while"  */
#line 545 "decaf.y"
               { yyval = new parse_tree(mytok); }
#line 2894 "y.tab.c"
    break;

  case 175: /* interface: "interface"  */
#line 546 "decaf.y"
                       { yyval = new parse_tree(mytok); }
#line 2900 "y.tab.c"
    break;

  case 176: /* scplus: '+'  */
#line 550 "decaf.y"
            { yyval = new parse_tree(mytok); }
#line 2906 "y.tab.c"
    break;

  case 177: /* scminus: '-'  */
#line 551 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2912 "y.tab.c"
    break;

  case 178: /* sctimes: '*'  */
#line 552 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2918 "y.tab.c"
    break;

  case 179: /* scdiv: '/'  */
#line 553 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2924 "y.tab.c"
    break;

  case 180: /* scmod: '%'  */
#line 554 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2930 "y.tab.c"
    break;

  case 181: /* sclt: '<'  */
#line 555 "decaf.y"
          { yyval = new parse_tree(mytok); }
#line 2936 "y.tab.c"
    break;

  case 182: /* scgt: '>'  */
#line 556 "decaf.y"
          { yyval = new parse_tree(mytok); }
#line 2942 "y.tab.c"
    break;

  case 183: /* sceq: '='  */
#line 557 "decaf.y"
          { yyval = new parse_tree(mytok); }
#line 2948 "y.tab.c"
    break;

  case 184: /* scneq: '!'  */
#line 558 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2954 "y.tab.c"
    break;


#line 2958 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 560 "decaf.y"

