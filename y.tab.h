/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
