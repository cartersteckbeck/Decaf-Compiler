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
#line 46 "decaf.y"

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


#line 89 "y.tab.c"

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
  YYSYMBOL_formals = 67,                   /* formals  */
  YYSYMBOL_classDecl = 68,                 /* classDecl  */
  YYSYMBOL_fields = 69,                    /* fields  */
  YYSYMBOL_identifiersPlus = 70,           /* identifiersPlus  */
  YYSYMBOL_ext = 71,                       /* ext  */
  YYSYMBOL_interfaceDecl = 72,             /* interfaceDecl  */
  YYSYMBOL_prototypes = 73,                /* prototypes  */
  YYSYMBOL_prototype = 74,                 /* prototype  */
  YYSYMBOL_stmtblock = 75,                 /* stmtblock  */
  YYSYMBOL_varDeclStar = 76,               /* varDeclStar  */
  YYSYMBOL_stmtStar = 77,                  /* stmtStar  */
  YYSYMBOL_stmt = 78,                      /* stmt  */
  YYSYMBOL_matched_stmt = 79,              /* matched_stmt  */
  YYSYMBOL_unmatched_stmt = 80,            /* unmatched_stmt  */
  YYSYMBOL_break_stmt = 81,                /* break_stmt  */
  YYSYMBOL_return_stmt = 82,               /* return_stmt  */
  YYSYMBOL_print_stmt = 83,                /* print_stmt  */
  YYSYMBOL_common_if = 84,                 /* common_if  */
  YYSYMBOL_matched_if = 85,                /* matched_if  */
  YYSYMBOL_unmatched_if = 86,              /* unmatched_if  */
  YYSYMBOL_common_while = 87,              /* common_while  */
  YYSYMBOL_matched_while = 88,             /* matched_while  */
  YYSYMBOL_unmatched_while = 89,           /* unmatched_while  */
  YYSYMBOL_common_for = 90,                /* common_for  */
  YYSYMBOL_matched_for = 91,               /* matched_for  */
  YYSYMBOL_unmatched_for = 92,             /* unmatched_for  */
  YYSYMBOL_expr = 93,                      /* expr  */
  YYSYMBOL_expr1 = 94,                     /* expr1  */
  YYSYMBOL_expr2 = 95,                     /* expr2  */
  YYSYMBOL_expr3 = 96,                     /* expr3  */
  YYSYMBOL_expr4 = 97,                     /* expr4  */
  YYSYMBOL_expr5 = 98,                     /* expr5  */
  YYSYMBOL_expr6 = 99,                     /* expr6  */
  YYSYMBOL_expr7 = 100,                    /* expr7  */
  YYSYMBOL_expr8 = 101,                    /* expr8  */
  YYSYMBOL_expr9 = 102,                    /* expr9  */
  YYSYMBOL_Lvalue = 103,                   /* Lvalue  */
  YYSYMBOL_call = 104,                     /* call  */
  YYSYMBOL_special = 105,                  /* special  */
  YYSYMBOL_nactuals = 106,                 /* nactuals  */
  YYSYMBOL_actuals = 107,                  /* actuals  */
  YYSYMBOL_constant = 108,                 /* constant  */
  YYSYMBOL_typeidentifier = 109,           /* typeidentifier  */
  YYSYMBOL_identifier = 110,               /* identifier  */
  YYSYMBOL_string = 111,                   /* string  */
  YYSYMBOL_int = 112,                      /* int  */
  YYSYMBOL_double = 113,                   /* double  */
  YYSYMBOL_bool = 114,                     /* bool  */
  YYSYMBOL_array = 115,                    /* array  */
  YYSYMBOL_void = 116,                     /* void  */
  YYSYMBOL_break = 117,                    /* break  */
  YYSYMBOL_this = 118,                     /* this  */
  YYSYMBOL_le = 119,                       /* le  */
  YYSYMBOL_ge = 120,                       /* ge  */
  YYSYMBOL_eq = 121,                       /* eq  */
  YYSYMBOL_neq = 122,                      /* neq  */
  YYSYMBOL_and = 123,                      /* and  */
  YYSYMBOL_or = 124,                       /* or  */
  YYSYMBOL_readint = 125,                  /* readint  */
  YYSYMBOL_new = 126,                      /* new  */
  YYSYMBOL_newarray = 127,                 /* newarray  */
  YYSYMBOL_intlit = 128,                   /* intlit  */
  YYSYMBOL_dbllit = 129,                   /* dbllit  */
  YYSYMBOL_boollit = 130,                  /* boollit  */
  YYSYMBOL_stringlit = 131,                /* stringlit  */
  YYSYMBOL_null = 132,                     /* null  */
  YYSYMBOL_readline = 133,                 /* readline  */
  YYSYMBOL_if = 134,                       /* if  */
  YYSYMBOL_else = 135,                     /* else  */
  YYSYMBOL_print = 136,                    /* print  */
  YYSYMBOL_return = 137,                   /* return  */
  YYSYMBOL_class = 138,                    /* class  */
  YYSYMBOL_extends = 139,                  /* extends  */
  YYSYMBOL_implements = 140,               /* implements  */
  YYSYMBOL_for = 141,                      /* for  */
  YYSYMBOL_while = 142,                    /* while  */
  YYSYMBOL_interface = 143,                /* interface  */
  YYSYMBOL_scplus = 144,                   /* scplus  */
  YYSYMBOL_scminus = 145,                  /* scminus  */
  YYSYMBOL_sctimes = 146,                  /* sctimes  */
  YYSYMBOL_scdiv = 147,                    /* scdiv  */
  YYSYMBOL_scmod = 148,                    /* scmod  */
  YYSYMBOL_sclt = 149,                     /* sclt  */
  YYSYMBOL_scgt = 150,                     /* scgt  */
  YYSYMBOL_sceq = 151,                     /* sceq  */
  YYSYMBOL_scneq = 152                     /* scneq  */
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
#define YYLAST   402

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  280

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
       0,    72,    72,    76,    78,    79,    80,    81,    82,    86,
      88,    90,    90,    90,    92,    94,    95,    96,    97,    99,
     100,   104,   105,   107,   108,   109,   113,   114,   115,   116,
     118,   119,   120,   122,   123,   125,   126,   129,   131,   132,
     134,   135,   138,   140,   141,   143,   144,   146,   146,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   158,   159,
     160,   163,   165,   166,   168,   171,   173,   175,   176,   177,
     181,   183,   185,   189,   190,   191,   192,   194,   196,   200,
     201,   203,   204,   206,   207,   209,   210,   211,   213,   214,
     215,   216,   217,   219,   220,   221,   223,   224,   225,   226,
     228,   229,   230,   232,   233,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   245,   246,   247,   249,   252,   254,
     255,   257,   258,   260,   261,   262,   263,   264,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   305,   306,   307,   308,   309,   310,   311,
     312,   313
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
  "formals", "classDecl", "fields", "identifiersPlus", "ext",
  "interfaceDecl", "prototypes", "prototype", "stmtblock", "varDeclStar",
  "stmtStar", "stmt", "matched_stmt", "unmatched_stmt", "break_stmt",
  "return_stmt", "print_stmt", "common_if", "matched_if", "unmatched_if",
  "common_while", "matched_while", "unmatched_while", "common_for",
  "matched_for", "unmatched_for", "expr", "expr1", "expr2", "expr3",
  "expr4", "expr5", "expr6", "expr7", "expr8", "expr9", "Lvalue", "call",
  "special", "nactuals", "actuals", "constant", "typeidentifier",
  "identifier", "string", "int", "double", "bool", "array", "void",
  "break", "this", "le", "ge", "eq", "neq", "and", "or", "readint", "new",
  "newarray", "intlit", "dbllit", "boollit", "stringlit", "null",
  "readline", "if", "else", "print", "return", "class", "extends",
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

#define YYPACT_NINF (-135)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -135,    27,  -135,   366,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,     1,    24,     5,     5,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,    24,    41,    24,
    -135,  -135,    -6,  -135,  -135,  -135,     7,   114,    50,    76,
    -135,  -135,  -135,  -135,    11,    41,    24,  -135,  -135,   131,
     289,  -135,    24,  -135,  -135,   113,  -135,    38,   125,    79,
      15,  -135,    24,    79,   138,   115,    24,  -135,  -135,  -135,
    -135,  -135,    24,  -135,    24,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,   144,    30,    32,    15,   243,  -135,  -135,
    -135,  -135,   178,  -135,   302,   350,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,    62,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,    60,    86,    95,   220,  -135,  -135,   220,  -135,  -135,
     220,  -135,  -135,   101,   128,   123,  -135,   135,   340,    40,
    -135,    70,  -135,   110,  -135,  -135,  -135,  -135,  -135,   145,
     147,   151,  -135,  -135,  -135,  -135,  -135,   164,   175,   185,
      62,   186,   188,    62,    62,   190,   191,   192,  -135,  -135,
    -135,   234,  -135,  -135,  -135,  -135,  -135,  -135,  -135,    62,
    -135,    62,  -135,  -135,    62,    62,  -135,  -135,  -135,  -135,
    -135,    62,    62,    62,    62,    62,    62,  -135,  -135,  -135,
      62,    62,    62,    62,    62,    24,  -135,    62,   197,    24,
      62,   223,    62,    62,  -135,   250,    62,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,   220,   123,  -135,  -135,  -135,   122,
     122,    40,    40,   122,   122,  -135,  -135,  -135,  -135,   224,
     225,   -19,  -135,   128,  -135,   227,   228,  -135,   232,   142,
      62,   238,    -5,  -135,  -135,  -135,    62,  -135,  -135,   171,
    -135,  -135,   239,    62,  -135,  -135,   240,   241,  -135,   280,
     254,  -135,  -135,  -135,   257,   313,  -135,  -135,   259,  -135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     3,     1,   135,   131,   132,   133,   130,
     157,   162,   128,     5,     0,     0,    11,    12,    13,     6,
       8,     7,    14,    15,    16,    17,    18,     0,     0,     0,
       9,   129,    10,   134,    19,    20,     0,     0,     0,     0,
      23,    23,   158,   159,     0,     0,     0,    30,    38,     0,
       0,    30,     0,    36,    35,     0,    33,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,    30,    26,    32,
      31,    37,     0,    39,     0,    43,    21,    25,    10,    22,
      27,    30,    34,     0,     0,     0,    45,     0,    28,    23,
      23,    44,     0,    29,     0,     0,   151,   137,   160,   161,
     153,   156,   136,   145,   146,   155,   144,   152,   148,   147,
     149,   150,    49,     0,    42,   164,   171,    57,    46,    47,
      48,     0,     0,     0,     0,    51,    58,     0,    52,    59,
       0,    53,    60,     0,    79,    81,    83,    85,    88,    93,
      96,   100,   103,   104,   108,   105,   114,    61,   106,     0,
       0,     0,   123,   124,   125,   126,   127,     0,     0,     0,
      62,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    67,    69,    71,    72,    77,    78,    50,   143,     0,
     142,     0,   140,   141,     0,     0,   138,   139,   163,   168,
     169,     0,     0,     0,     0,     0,     0,   165,   166,   167,
       0,     0,     0,   119,     0,     0,   170,     0,     0,     0,
       0,     0,     0,     0,    63,     0,     0,   102,   104,   101,
      40,    41,   107,   154,     0,    82,    84,    86,    87,    91,
      92,    94,    95,    89,    90,    97,    98,    99,   121,     0,
     120,     0,   116,    80,   109,     0,     0,   110,     0,     0,
       0,     0,     0,    66,    68,   117,     0,   115,   111,     0,
      65,    64,     0,     0,    70,   122,     0,     0,   118,     0,
       0,   112,   113,    76,     0,     0,    74,    75,     0,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,  -135,  -135,     2,   -32,    -3,  -135,  -135,  -135,
     262,   -33,  -135,    -2,   226,  -135,  -135,  -135,  -135,    56,
    -135,  -135,  -135,  -120,  -118,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -110,  -129,   132,
     121,    34,    13,    29,  -134,  -135,  -135,   -90,  -135,  -135,
    -135,    97,  -135,    19,   -14,  -135,  -135,  -135,  -135,   299,
     260,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,   277,  -135,  -135,  -135,  -135,  -122,
    -135,  -135,  -135,  -135,  -135,  -135,  -135
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,    69,    14,    62,    16,    17,    18,
      70,    49,    20,    57,    55,    44,    21,    58,    73,   117,
      86,    92,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   218,   144,   267,
     239,   240,   145,    22,   146,    23,    24,    25,    26,    34,
      27,   147,   148,   191,   192,   184,   185,   181,   179,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   224,
     159,   160,    28,    45,    46,   161,   162,    29,   193,   163,
     200,   201,   202,   195,   196,   207,   164
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    32,   143,   167,   171,    13,   172,   173,    50,   174,
     175,   178,   176,    36,    38,    39,   194,    61,    61,     6,
       7,     8,     9,   143,    43,   178,   257,     4,    77,   217,
     219,    54,    56,    40,   143,   264,    33,   143,    56,    30,
     143,     5,     6,     7,     8,     9,    41,    37,    78,    64,
     214,    12,    82,    51,    15,    72,    94,    95,    84,    31,
      85,    15,    61,    61,    53,    83,   235,   236,   237,    89,
     143,    90,    96,    97,    12,   241,    31,    12,   243,    87,
      15,    68,   103,   104,    15,   106,   107,   252,    91,   197,
     198,   199,    47,   238,   108,   109,   110,    31,   168,   111,
     246,   113,   248,   238,   253,   251,   254,   194,   194,   203,
     115,   194,   194,   143,   204,    76,   205,   116,    48,    79,
     143,    75,   143,   143,   169,   143,    42,    43,     5,     6,
       7,     8,     9,   170,   143,     6,     7,     8,     9,   177,
     262,     5,     6,     7,     8,     9,   265,     5,     6,     7,
       8,     9,   180,   270,    66,    67,    66,    81,   178,   274,
     143,    12,   182,   183,   206,   278,   143,    12,    71,   188,
     115,    59,    60,   143,    12,     6,     7,     8,     9,   143,
      12,    80,   261,   256,   208,   143,   209,    88,    96,    97,
     210,   242,    98,    99,   100,   245,   101,   102,   103,   104,
     105,   106,   107,   211,   229,   230,    31,    12,   233,   234,
     108,   109,   110,    31,   212,   111,   112,   113,   227,   228,
      75,   114,   231,   232,   213,   215,   115,   216,   220,   221,
      96,    97,   222,   116,    98,    99,   100,   244,   101,   102,
     103,   104,   105,   106,   107,   268,     5,     6,     7,     8,
       9,   223,   108,   109,   110,    31,   266,   111,   112,   113,
      96,    97,    75,   247,   255,    19,   256,   258,   115,   259,
     103,   104,   260,   106,   107,   116,   263,   269,    65,    12,
     271,   272,   108,   109,   110,    31,    93,   111,   250,   113,
      96,    97,   275,     6,     7,     8,     9,   276,   115,   279,
     103,   104,   226,   106,   107,   116,     6,     7,     8,     9,
     249,   225,   108,   109,   110,    31,    35,   111,    74,   113,
     273,    52,     0,    96,    97,    12,     0,     0,   115,    63,
      60,     0,     0,   103,   104,   116,   106,   107,    12,     0,
       0,     0,   165,    60,     0,   108,   109,   110,    31,     0,
     111,     0,   113,   277,     6,     7,     8,     9,     0,     0,
       0,   115,     0,     0,     0,   186,   187,     0,   116,     5,
       6,     7,     8,     9,    10,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,   188,   115,     0,
     166,    60,   189,   190,     0,     0,     0,     0,     0,     0,
       0,     0,    12
};

static const yytype_int16 yycheck[] =
{
       3,    15,    92,   113,   124,     3,   124,   127,    41,   127,
     130,    30,   130,    27,    28,    29,   138,    49,    50,     4,
       5,     6,     7,   113,    13,    30,    45,     0,    60,   163,
     164,    45,    46,    39,   124,    40,    31,   127,    52,    38,
     130,     3,     4,     5,     6,     7,    39,    28,    62,    51,
     160,    36,    66,    42,    57,    58,    89,    90,    72,    35,
      74,    64,    94,    95,    45,    67,   200,   201,   202,    39,
     160,    39,    10,    11,    36,   204,    35,    36,   207,    81,
      83,    43,    20,    21,    87,    23,    24,   216,    86,    49,
      50,    51,    42,   203,    32,    33,    34,    35,    38,    37,
     210,    39,   212,   213,   224,   215,   224,   229,   230,    39,
      48,   233,   234,   203,    44,    59,    46,    55,    42,    63,
     210,    42,   212,   213,    38,   215,    12,    13,     3,     4,
       5,     6,     7,    38,   224,     4,     5,     6,     7,    38,
     250,     3,     4,     5,     6,     7,   256,     3,     4,     5,
       6,     7,    29,   263,    41,    42,    41,    42,    30,   269,
     250,    36,    27,    28,    54,   275,   256,    36,    43,    47,
      48,    40,    41,   263,    36,     4,     5,     6,     7,   269,
      36,    43,    40,    41,    39,   275,    39,    43,    10,    11,
      39,   205,    14,    15,    16,   209,    18,    19,    20,    21,
      22,    23,    24,    39,   191,   192,    35,    36,   195,   196,
      32,    33,    34,    35,    39,    37,    38,    39,   184,   185,
      42,    43,   193,   194,    39,    39,    48,    39,    38,    38,
      10,    11,    40,    55,    14,    15,    16,    40,    18,    19,
      20,    21,    22,    23,    24,   259,     3,     4,     5,     6,
       7,    17,    32,    33,    34,    35,   259,    37,    38,    39,
      10,    11,    42,    40,    40,     3,    41,    40,    48,    41,
      20,    21,    40,    23,    24,    55,    38,    38,    52,    36,
      40,    40,    32,    33,    34,    35,    43,    37,    38,    39,
      10,    11,    38,     4,     5,     6,     7,    40,    48,    40,
      20,    21,   181,    23,    24,    55,     4,     5,     6,     7,
     213,   179,    32,    33,    34,    35,    17,    37,    58,    39,
      40,    44,    -1,    10,    11,    36,    -1,    -1,    48,    40,
      41,    -1,    -1,    20,    21,    55,    23,    24,    36,    -1,
      -1,    -1,    40,    41,    -1,    32,    33,    34,    35,    -1,
      37,    -1,    39,    40,     4,     5,     6,     7,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    25,    26,    -1,    55,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    47,    48,    -1,
      40,    41,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,    59,     0,     3,     4,     5,     6,     7,
       8,     9,    36,    60,    61,    62,    63,    64,    65,    66,
      68,    72,   109,   111,   112,   113,   114,   116,   138,   143,
      38,    35,   110,    31,   115,   115,   110,   109,   110,   110,
      39,    39,    12,    13,    71,   139,   140,    42,    42,    67,
      67,    42,   140,   109,   110,    70,   110,    69,    73,    40,
      41,    61,    62,    40,    69,    70,    41,    42,    43,    60,
      66,    43,    62,    74,   116,    42,    75,    61,   110,    75,
      43,    42,   110,    69,   110,   110,    76,    69,    43,    39,
      39,    60,    77,    43,    67,    67,    10,    11,    14,    15,
      16,    18,    19,    20,    21,    22,    23,    24,    32,    33,
      34,    37,    38,    39,    43,    48,    55,    75,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   108,   110,   117,   118,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   136,
     137,   141,   142,   145,   152,    40,    40,    93,    38,    38,
      38,    79,    80,    79,    80,    79,    80,    38,    30,   124,
      29,   123,    27,    28,   121,   122,    25,    26,    47,    52,
      53,   119,   120,   144,   145,   149,   150,    49,    50,    51,
     146,   147,   148,    39,    44,    46,    54,   151,    39,    39,
      39,    39,    39,    39,    93,    39,    39,   100,   103,   100,
      38,    38,    40,    17,   135,    95,    96,    97,    97,    98,
      98,    99,    99,    98,    98,   100,   100,   100,    93,   106,
     107,    94,   110,    94,    40,   110,    93,    40,    93,   107,
      38,    93,    94,    79,    80,    40,    41,    45,    40,    41,
      40,    40,    93,    38,    40,    93,    62,   105,   110,    38,
      93,    40,    40,    40,    93,    38,    40,    40,    93,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    59,    59,    59,    59,    59,    60,
      61,    62,    62,    62,    63,    64,    64,    64,    64,    65,
      65,    66,    66,    67,    67,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    73,    73,
      74,    74,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    81,    82,    82,    83,    84,    85,    86,    86,    86,
      87,    88,    89,    90,    90,    90,    90,    91,    92,    93,
      93,    94,    94,    95,    95,    96,    96,    96,    97,    97,
      97,    97,    97,    98,    98,    98,    99,    99,    99,    99,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   103,   104,   105,   106,
     106,   107,   107,   108,   108,   108,   108,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     6,     6,     0,     2,     3,     5,     6,     7,     8,
       0,     2,     2,     1,     3,     2,     2,     5,     0,     2,
       6,     6,     4,     0,     2,     0,     2,     1,     1,     1,
       2,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     4,     4,     4,     2,     4,     2,
       4,     2,     2,     8,     7,     7,     6,     2,     2,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     2,     1,     1,     1,     1,     3,     1,     3,
       3,     4,     6,     6,     1,     4,     3,     4,     1,     0,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
#line 72 "decaf.y"
             {top = yyval = yyvsp[0]; }
#line 1825 "y.tab.c"
    break;

  case 3: /* program: decl  */
#line 76 "decaf.y"
              {yyval = yyvsp[0]; }
#line 1831 "y.tab.c"
    break;

  case 4: /* decl: %empty  */
#line 78 "decaf.y"
                  {yyval = new parse_tree("program"); }
#line 1837 "y.tab.c"
    break;

  case 5: /* decl: decl varDecl  */
#line 79 "decaf.y"
                   {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 1843 "y.tab.c"
    break;

  case 6: /* decl: decl funcDecl  */
#line 80 "decaf.y"
                    {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 1849 "y.tab.c"
    break;

  case 7: /* decl: decl interfaceDecl  */
#line 81 "decaf.y"
                         {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 1855 "y.tab.c"
    break;

  case 8: /* decl: decl classDecl  */
#line 82 "decaf.y"
                     {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 1861 "y.tab.c"
    break;

  case 10: /* variable: type identifier  */
#line 88 "decaf.y"
                          {yyval = new parse_tree("variable", 2, yyvsp[-1], yyvsp[0]); }
#line 1867 "y.tab.c"
    break;

  case 14: /* usertype: typeidentifier  */
#line 92 "decaf.y"
                         {yyval = new parse_tree("usertype", 1, yyvsp[0]); }
#line 1873 "y.tab.c"
    break;

  case 15: /* primtype: string  */
#line 94 "decaf.y"
                 {yyval = new parse_tree("primtype", 1, yyvsp[0]); }
#line 1879 "y.tab.c"
    break;

  case 16: /* primtype: int  */
#line 95 "decaf.y"
              {yyval = new parse_tree("primtype", 1, yyvsp[0]); }
#line 1885 "y.tab.c"
    break;

  case 17: /* primtype: double  */
#line 96 "decaf.y"
                 {yyval = new parse_tree("primtype", 1, yyvsp[0]); }
#line 1891 "y.tab.c"
    break;

  case 18: /* primtype: bool  */
#line 97 "decaf.y"
               {yyval = new parse_tree("primtype", 1, yyvsp[0]); }
#line 1897 "y.tab.c"
    break;

  case 19: /* arraytype: usertype array  */
#line 99 "decaf.y"
                          {yyval = new parse_tree("arraytype", 1, yyvsp[-1]); }
#line 1903 "y.tab.c"
    break;

  case 20: /* arraytype: primtype array  */
#line 100 "decaf.y"
                          {yyval = new parse_tree("arraytype", 1, yyvsp[-1]); }
#line 1909 "y.tab.c"
    break;

  case 21: /* funcDecl: type identifier '(' formals ')' stmtblock  */
#line 104 "decaf.y"
                                                             {yyval = new parse_tree("functiondecl", 4, yyvsp[-5], yyvsp[-4], yyvsp[-2], yyvsp[0]); }
#line 1915 "y.tab.c"
    break;

  case 22: /* funcDecl: void identifier '(' formals ')' stmtblock  */
#line 105 "decaf.y"
                                                             {yyval = new parse_tree("functiondecl", 4, yyvsp[-5], yyvsp[-4], yyvsp[-2], yyvsp[0]); }
#line 1921 "y.tab.c"
    break;

  case 23: /* formals: %empty  */
#line 107 "decaf.y"
                     {yyval = new parse_tree("formals"); }
#line 1927 "y.tab.c"
    break;

  case 24: /* formals: formals variable  */
#line 108 "decaf.y"
                                {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 1933 "y.tab.c"
    break;

  case 25: /* formals: formals ',' variable  */
#line 109 "decaf.y"
                                    {yyvsp[-2]->add_child(yyvsp[0]); yyval = yyvsp[-2]; }
#line 1939 "y.tab.c"
    break;

  case 26: /* classDecl: class identifier '{' fields '}'  */
#line 113 "decaf.y"
                                              {yyval = new parse_tree("class", 4, yyvsp[-3], nullptr, nullptr, yyvsp[-1]);}
#line 1945 "y.tab.c"
    break;

  case 27: /* classDecl: class typeidentifier ext '{' fields '}'  */
#line 114 "decaf.y"
                                                      {yyval = new parse_tree("class", 4, yyvsp[-4], yyvsp[-3], nullptr, yyvsp[-1]);}
#line 1951 "y.tab.c"
    break;

  case 28: /* classDecl: class typeidentifier implements identifiersPlus '{' fields '}'  */
#line 115 "decaf.y"
                                                                                 {yyval = new parse_tree("class", 4, yyvsp[-5], nullptr, yyvsp[-3], yyvsp[-1]);}
#line 1957 "y.tab.c"
    break;

  case 29: /* classDecl: class typeidentifier ext implements identifiersPlus '{' fields '}'  */
#line 116 "decaf.y"
                                                                                     {yyval = new parse_tree("class", 4, yyvsp[-6], yyvsp[-5], yyvsp[-3], yyvsp[-1]);}
#line 1963 "y.tab.c"
    break;

  case 30: /* fields: %empty  */
#line 118 "decaf.y"
                    {yyval = new parse_tree("fields");}
#line 1969 "y.tab.c"
    break;

  case 31: /* fields: fields funcDecl  */
#line 119 "decaf.y"
                        {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 1975 "y.tab.c"
    break;

  case 32: /* fields: fields varDecl  */
#line 120 "decaf.y"
                       {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 1981 "y.tab.c"
    break;

  case 33: /* identifiersPlus: identifier  */
#line 122 "decaf.y"
                               {yyval = new parse_tree("implements", 1, yyvsp[0]); }
#line 1987 "y.tab.c"
    break;

  case 34: /* identifiersPlus: identifiersPlus ',' identifier  */
#line 123 "decaf.y"
                                                   {yyvsp[-2]->add_child(yyvsp[0]); yyval = yyvsp[-2]; }
#line 1993 "y.tab.c"
    break;

  case 35: /* ext: extends identifier  */
#line 125 "decaf.y"
                           {yyval = new parse_tree("extends", 1, yyvsp[0]); }
#line 1999 "y.tab.c"
    break;

  case 36: /* ext: extends typeidentifier  */
#line 126 "decaf.y"
                               {yyval = new parse_tree("extends", 1, yyvsp[0]); }
#line 2005 "y.tab.c"
    break;

  case 37: /* interfaceDecl: interface identifier '{' prototypes '}'  */
#line 129 "decaf.y"
                                                             {yyval = new parse_tree("interface", 2, yyvsp[-3], yyvsp[-1]);}
#line 2011 "y.tab.c"
    break;

  case 38: /* prototypes: %empty  */
#line 131 "decaf.y"
                        {yyval = new parse_tree("prototypes");}
#line 2017 "y.tab.c"
    break;

  case 39: /* prototypes: prototypes prototype  */
#line 132 "decaf.y"
                                 {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2023 "y.tab.c"
    break;

  case 40: /* prototype: type identifier '(' formals ')' ';'  */
#line 134 "decaf.y"
                                                     {yyval = new parse_tree("prototype", 3, yyvsp[-5], yyvsp[-4], yyvsp[-2]); }
#line 2029 "y.tab.c"
    break;

  case 41: /* prototype: void identifier '(' formals ')' ';'  */
#line 135 "decaf.y"
                                                     {yyval = new parse_tree("prototype", 3, yyvsp[-5], yyvsp[-4], yyvsp[-2]); }
#line 2035 "y.tab.c"
    break;

  case 42: /* stmtblock: '{' varDeclStar stmtStar '}'  */
#line 138 "decaf.y"
                                              {yyval = new parse_tree("stmtblock", 2, yyvsp[-2], yyvsp[-1]);}
#line 2041 "y.tab.c"
    break;

  case 43: /* varDeclStar: %empty  */
#line 140 "decaf.y"
                         {yyval = new parse_tree("vardecls");}
#line 2047 "y.tab.c"
    break;

  case 44: /* varDeclStar: varDeclStar varDecl  */
#line 141 "decaf.y"
                                 {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2053 "y.tab.c"
    break;

  case 45: /* stmtStar: %empty  */
#line 143 "decaf.y"
                      {yyval = new parse_tree("stmts");}
#line 2059 "y.tab.c"
    break;

  case 46: /* stmtStar: stmtStar stmt  */
#line 144 "decaf.y"
                        {yyvsp[-1]->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2065 "y.tab.c"
    break;

  case 49: /* matched_stmt: ';'  */
#line 148 "decaf.y"
                  {yyval = new parse_tree("nullstmt"); }
#line 2071 "y.tab.c"
    break;

  case 61: /* break_stmt: break  */
#line 163 "decaf.y"
                  {yyval = new parse_tree("break", 1, yyvsp[0]); }
#line 2077 "y.tab.c"
    break;

  case 62: /* return_stmt: return  */
#line 165 "decaf.y"
                    {yyval = new parse_tree("return", 1, yyvsp[0]); }
#line 2083 "y.tab.c"
    break;

  case 63: /* return_stmt: return expr  */
#line 166 "decaf.y"
                         {yyval = new parse_tree("return", 2, yyvsp[-1], yyvsp[0]); }
#line 2089 "y.tab.c"
    break;

  case 64: /* print_stmt: print '(' actuals ')'  */
#line 168 "decaf.y"
                                        {yyval = new parse_tree("print", 2, yyvsp[-3], yyvsp[-1]); }
#line 2095 "y.tab.c"
    break;

  case 65: /* common_if: if '(' expr ')'  */
#line 171 "decaf.y"
                           {yyval = new parse_tree("if", 1, yyvsp[-1]); }
#line 2101 "y.tab.c"
    break;

  case 66: /* matched_if: common_if matched_stmt else matched_stmt  */
#line 173 "decaf.y"
                                                             {yyval->add_child(yyvsp[-2]); yyval->add_child(yyvsp[0]); yyval = yyvsp[-3]; }
#line 2107 "y.tab.c"
    break;

  case 67: /* unmatched_if: common_if matched_stmt  */
#line 175 "decaf.y"
                                                                 {yyval->add_child(yyvsp[0]); yyval->add_child(nullptr); yyval = yyvsp[-1]; }
#line 2113 "y.tab.c"
    break;

  case 68: /* unmatched_if: common_if matched_stmt else unmatched_stmt  */
#line 176 "decaf.y"
                                                                 {yyval->add_child(yyvsp[-2]); yyval->add_child(yyvsp[0]); yyval = yyvsp[-3]; }
#line 2119 "y.tab.c"
    break;

  case 69: /* unmatched_if: common_if unmatched_stmt  */
#line 177 "decaf.y"
                                                                 {yyval->add_child(yyvsp[0]); yyval->add_child(nullptr); yyval = yyvsp[-1]; }
#line 2125 "y.tab.c"
    break;

  case 70: /* common_while: while '(' expr1 ')'  */
#line 181 "decaf.y"
                                  {yyval = new parse_tree("while", 1, yyvsp[-1]); }
#line 2131 "y.tab.c"
    break;

  case 71: /* matched_while: common_while matched_stmt  */
#line 183 "decaf.y"
                                             {yyval ->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2137 "y.tab.c"
    break;

  case 72: /* unmatched_while: common_while unmatched_stmt  */
#line 185 "decaf.y"
                                                 {yyval->add_child(yyvsp[0]); yyval = yyvsp[-1]; }
#line 2143 "y.tab.c"
    break;

  case 73: /* common_for: for '(' expr ';' expr ';' expr ')'  */
#line 189 "decaf.y"
                                                        {yyval = new parse_tree("for", 3, yyvsp[-5], yyvsp[-3], yyvsp[-1]); }
#line 2149 "y.tab.c"
    break;

  case 74: /* common_for: for '(' ';' expr ';' expr ')'  */
#line 190 "decaf.y"
                                                        {yyval = new parse_tree("for", 3, nullptr, yyvsp[-3], yyvsp[-1]); }
#line 2155 "y.tab.c"
    break;

  case 75: /* common_for: for '(' expr ';' expr ';' ')'  */
#line 191 "decaf.y"
                                                        {yyval = new parse_tree("for", 3, yyvsp[-4], yyvsp[-2], nullptr); }
#line 2161 "y.tab.c"
    break;

  case 76: /* common_for: for '(' ';' expr ';' ')'  */
#line 192 "decaf.y"
                                                        {yyval = new parse_tree("for", 3, nullptr, yyvsp[-2], nullptr); }
#line 2167 "y.tab.c"
    break;

  case 77: /* matched_for: common_for matched_stmt  */
#line 194 "decaf.y"
                                         {yyval ->add_child(yyvsp[0]); yyval = yyvsp[-1];}
#line 2173 "y.tab.c"
    break;

  case 78: /* unmatched_for: common_for unmatched_stmt  */
#line 196 "decaf.y"
                                             {yyval ->add_child(yyvsp[0]); yyval = yyvsp[-1];}
#line 2179 "y.tab.c"
    break;

  case 80: /* expr: Lvalue sceq expr1  */
#line 201 "decaf.y"
                              {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2185 "y.tab.c"
    break;

  case 82: /* expr1: expr1 or expr2  */
#line 204 "decaf.y"
                             {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2191 "y.tab.c"
    break;

  case 84: /* expr2: expr2 and expr3  */
#line 207 "decaf.y"
                              {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2197 "y.tab.c"
    break;

  case 86: /* expr3: expr4 eq expr4  */
#line 210 "decaf.y"
                              {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2203 "y.tab.c"
    break;

  case 87: /* expr3: expr4 neq expr4  */
#line 211 "decaf.y"
                               {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2209 "y.tab.c"
    break;

  case 89: /* expr4: expr5 sclt expr5  */
#line 214 "decaf.y"
                                {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2215 "y.tab.c"
    break;

  case 90: /* expr4: expr5 scgt expr5  */
#line 215 "decaf.y"
                                {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2221 "y.tab.c"
    break;

  case 91: /* expr4: expr5 le expr5  */
#line 216 "decaf.y"
                              {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2227 "y.tab.c"
    break;

  case 92: /* expr4: expr5 ge expr5  */
#line 217 "decaf.y"
                              {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2233 "y.tab.c"
    break;

  case 94: /* expr5: expr5 scplus expr6  */
#line 220 "decaf.y"
                                 {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2239 "y.tab.c"
    break;

  case 95: /* expr5: expr5 scminus expr6  */
#line 221 "decaf.y"
                                  {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2245 "y.tab.c"
    break;

  case 97: /* expr6: expr6 sctimes expr7  */
#line 224 "decaf.y"
                                  {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2251 "y.tab.c"
    break;

  case 98: /* expr6: expr6 scdiv expr7  */
#line 225 "decaf.y"
                                {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2257 "y.tab.c"
    break;

  case 99: /* expr6: expr6 scmod expr7  */
#line 226 "decaf.y"
                                {yyval = new parse_tree("binop", 3, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2263 "y.tab.c"
    break;

  case 101: /* expr7: scneq expr7  */
#line 229 "decaf.y"
                          {yyval = new parse_tree("uop", 2, yyvsp[-1], yyvsp[0]);}
#line 2269 "y.tab.c"
    break;

  case 102: /* expr7: scminus expr7  */
#line 230 "decaf.y"
                            {yyval = new parse_tree("uop", 2, yyvsp[-1], yyvsp[0]);}
#line 2275 "y.tab.c"
    break;

  case 107: /* expr9: '(' expr ')'  */
#line 237 "decaf.y"
                    { yyval = yyvsp[-1]; }
#line 2281 "y.tab.c"
    break;

  case 111: /* expr9: new '(' identifier ')'  */
#line 241 "decaf.y"
                                 {yyval = new parse_tree("new", 1, yyvsp[-1]);}
#line 2287 "y.tab.c"
    break;

  case 112: /* expr9: newarray '(' expr ',' type ')'  */
#line 242 "decaf.y"
                                            {yyval = new parse_tree("newarray", 2, yyvsp[-3], yyvsp[-1]);}
#line 2293 "y.tab.c"
    break;

  case 113: /* expr9: newarray '(' expr ',' special ')'  */
#line 243 "decaf.y"
                                               {yyval = new parse_tree("newarray", 2, yyvsp[-3], yyvsp[-1]);}
#line 2299 "y.tab.c"
    break;

  case 115: /* Lvalue: expr8 '[' expr1 ']'  */
#line 246 "decaf.y"
                                    {yyval = new parse_tree("aref", 2, yyvsp[-3], yyvsp[-1]);}
#line 2305 "y.tab.c"
    break;

  case 116: /* Lvalue: expr8 '.' identifier  */
#line 247 "decaf.y"
                                    {yyval = new parse_tree("fieldaccess", 2, yyvsp[-2], yyvsp[0]);}
#line 2311 "y.tab.c"
    break;

  case 117: /* call: expr8 '(' nactuals ')'  */
#line 249 "decaf.y"
                                   {yyval = new parse_tree("call", 2, yyvsp[-3], yyvsp[-1]);}
#line 2317 "y.tab.c"
    break;

  case 118: /* special: identifier  */
#line 252 "decaf.y"
                       {yyval = new parse_tree("usertype", 1, yyvsp[0]);}
#line 2323 "y.tab.c"
    break;

  case 119: /* nactuals: %empty  */
#line 254 "decaf.y"
                      {yyval = new parse_tree("actuals");}
#line 2329 "y.tab.c"
    break;

  case 121: /* actuals: expr  */
#line 257 "decaf.y"
              {yyval = new parse_tree("actuals", 1, yyvsp[0]);}
#line 2335 "y.tab.c"
    break;

  case 122: /* actuals: actuals ',' expr  */
#line 258 "decaf.y"
                          {yyvsp[-2]->add_child(yyvsp[0]); yyval = yyvsp[-2];}
#line 2341 "y.tab.c"
    break;

  case 128: /* typeidentifier: T_TYPEIDENTIFIER  */
#line 267 "decaf.y"
                                 { yyval = new parse_tree(mytok); }
#line 2347 "y.tab.c"
    break;

  case 129: /* identifier: T_IDENTIFIER  */
#line 268 "decaf.y"
                         { yyval = new parse_tree(mytok); }
#line 2353 "y.tab.c"
    break;

  case 130: /* string: "string"  */
#line 269 "decaf.y"
                 { yyval = new parse_tree(mytok); }
#line 2359 "y.tab.c"
    break;

  case 131: /* int: "int"  */
#line 270 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2365 "y.tab.c"
    break;

  case 132: /* double: "double"  */
#line 271 "decaf.y"
                 { yyval = new parse_tree(mytok); }
#line 2371 "y.tab.c"
    break;

  case 133: /* bool: "bool"  */
#line 272 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2377 "y.tab.c"
    break;

  case 134: /* array: "[]"  */
#line 273 "decaf.y"
               { yyval = new parse_tree(mytok); }
#line 2383 "y.tab.c"
    break;

  case 135: /* void: "void"  */
#line 274 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2389 "y.tab.c"
    break;

  case 136: /* break: "break"  */
#line 275 "decaf.y"
               { yyval = new parse_tree(mytok); }
#line 2395 "y.tab.c"
    break;

  case 137: /* this: "this"  */
#line 276 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2401 "y.tab.c"
    break;

  case 138: /* le: "<="  */
#line 277 "decaf.y"
         { yyval = new parse_tree(mytok); }
#line 2407 "y.tab.c"
    break;

  case 139: /* ge: ">="  */
#line 278 "decaf.y"
         { yyval = new parse_tree(mytok); }
#line 2413 "y.tab.c"
    break;

  case 140: /* eq: "=="  */
#line 279 "decaf.y"
         { yyval = new parse_tree(mytok); }
#line 2419 "y.tab.c"
    break;

  case 141: /* neq: "!="  */
#line 280 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2425 "y.tab.c"
    break;

  case 142: /* and: "&&"  */
#line 281 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2431 "y.tab.c"
    break;

  case 143: /* or: "||"  */
#line 282 "decaf.y"
         { yyval = new parse_tree(mytok); }
#line 2437 "y.tab.c"
    break;

  case 144: /* readint: "ReadInteger"  */
#line 283 "decaf.y"
                       { yyval = new parse_tree(mytok); }
#line 2443 "y.tab.c"
    break;

  case 145: /* new: "New"  */
#line 284 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2449 "y.tab.c"
    break;

  case 146: /* newarray: "NewArray"  */
#line 285 "decaf.y"
                     { yyval = new parse_tree(mytok); }
#line 2455 "y.tab.c"
    break;

  case 147: /* intlit: T_INTLITERAL  */
#line 286 "decaf.y"
                     { yyval = new parse_tree(mytok); }
#line 2461 "y.tab.c"
    break;

  case 148: /* dbllit: T_DBLLITERAL  */
#line 287 "decaf.y"
                     { yyval = new parse_tree(mytok); }
#line 2467 "y.tab.c"
    break;

  case 149: /* boollit: T_BOOLLITERAL  */
#line 288 "decaf.y"
                       { yyval = new parse_tree(mytok); }
#line 2473 "y.tab.c"
    break;

  case 150: /* stringlit: T_STRINGLITERAL  */
#line 289 "decaf.y"
                           { yyval = new parse_tree(mytok); }
#line 2479 "y.tab.c"
    break;

  case 151: /* null: "null"  */
#line 290 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2485 "y.tab.c"
    break;

  case 152: /* readline: "ReadLine"  */
#line 291 "decaf.y"
                     { yyval = new parse_tree(mytok); }
#line 2491 "y.tab.c"
    break;

  case 153: /* if: "if"  */
#line 292 "decaf.y"
         { yyval = new parse_tree(mytok); }
#line 2497 "y.tab.c"
    break;

  case 154: /* else: "else"  */
#line 293 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2503 "y.tab.c"
    break;

  case 155: /* print: "Print"  */
#line 294 "decaf.y"
               { yyval = new parse_tree(mytok); }
#line 2509 "y.tab.c"
    break;

  case 156: /* return: "return"  */
#line 295 "decaf.y"
                 { yyval = new parse_tree(mytok); }
#line 2515 "y.tab.c"
    break;

  case 157: /* class: "class"  */
#line 296 "decaf.y"
               { yyval = new parse_tree(mytok); }
#line 2521 "y.tab.c"
    break;

  case 158: /* extends: "extends"  */
#line 297 "decaf.y"
                   { yyval = new parse_tree(mytok); }
#line 2527 "y.tab.c"
    break;

  case 159: /* implements: "implements"  */
#line 298 "decaf.y"
                         { yyval = new parse_tree(mytok); }
#line 2533 "y.tab.c"
    break;

  case 160: /* for: "for"  */
#line 299 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2539 "y.tab.c"
    break;

  case 161: /* while: "while"  */
#line 300 "decaf.y"
               { yyval = new parse_tree(mytok); }
#line 2545 "y.tab.c"
    break;

  case 162: /* interface: "interface"  */
#line 301 "decaf.y"
                       { yyval = new parse_tree(mytok); }
#line 2551 "y.tab.c"
    break;

  case 163: /* scplus: '+'  */
#line 305 "decaf.y"
            { yyval = new parse_tree(mytok); }
#line 2557 "y.tab.c"
    break;

  case 164: /* scminus: '-'  */
#line 306 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2563 "y.tab.c"
    break;

  case 165: /* sctimes: '*'  */
#line 307 "decaf.y"
             { yyval = new parse_tree(mytok); }
#line 2569 "y.tab.c"
    break;

  case 166: /* scdiv: '/'  */
#line 308 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2575 "y.tab.c"
    break;

  case 167: /* scmod: '%'  */
#line 309 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2581 "y.tab.c"
    break;

  case 168: /* sclt: '<'  */
#line 310 "decaf.y"
          { yyval = new parse_tree(mytok); }
#line 2587 "y.tab.c"
    break;

  case 169: /* scgt: '>'  */
#line 311 "decaf.y"
          { yyval = new parse_tree(mytok); }
#line 2593 "y.tab.c"
    break;

  case 170: /* sceq: '='  */
#line 312 "decaf.y"
          { yyval = new parse_tree(mytok); }
#line 2599 "y.tab.c"
    break;

  case 171: /* scneq: '!'  */
#line 313 "decaf.y"
           { yyval = new parse_tree(mytok); }
#line 2605 "y.tab.c"
    break;


#line 2609 "y.tab.c"

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

#line 325 "decaf.y"

