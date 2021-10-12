/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 45 "decaf.y" /* yacc.c:339  */

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


#line 83 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_VOID = 260,
    T_INT = 261,
    T_DOUBLE = 262,
    T_BOOL = 263,
    T_STRING = 264,
    T_CLASS = 265,
    T_INTERFACE = 266,
    T_NULL = 267,
    T_THIS = 268,
    T_EXTENDS = 269,
    T_IMPLEMENTS = 270,
    T_FOR = 271,
    T_WHILE = 272,
    T_IF = 273,
    T_ELSE = 274,
    T_RETURN = 275,
    T_BREAK = 276,
    T_NEW = 277,
    T_NEWARRAY = 278,
    T_PRINT = 279,
    T_READINTEGER = 280,
    T_READLINE = 281,
    T_LE = 282,
    T_GE = 283,
    T_EQ = 284,
    T_NEQ = 285,
    T_AND = 286,
    T_OR = 287,
    T_ARRAY = 288,
    T_DBLLITERAL = 289,
    T_INTLITERAL = 290,
    T_BOOLLITERAL = 291,
    T_IDENTIFIER = 292,
    T_TYPEIDENTIFIER = 293,
    T_STRINGLITERAL = 294
  };
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

/* Copy the second part of user declarations.  */

#line 172 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   415

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
       2,    44,    56,    45,     2,     2,     2,     2,     2,     2,
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
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    76,    78,    79,    80,    83,    85,    87,
      87,    87,    89,    91,    92,    93,    94,    96,    97,   100,
     101,   103,   104,   105,   107,   108,   110,   111,   113,   115,
     117,   118,   121,   121,   123,   124,   125,   126,   127,   128,
     129,   131,   131,   133,   134,   136,   137,   139,   141,   143,
     145,   148,   151,   154,   158,   162,   165,   168,   172,   174,
     176,   179,   184,   185,   187,   188,   192,   193,   195,   196,
     197,   199,   200,   201,   202,   203,   205,   206,   207,   209,
     210,   211,   212,   214,   215,   216,   218,   219,   220,   222,
     223,   226,   239,   240,   242,   243,   244,   245,   246,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   259,   260,
     261,   262,   263,   264,   268,   269,   270,   271,   272,   275,
     276,   277,   280,   281,   282,   283,   284,   285,   286,   287,
     288
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"void\"", "\"int\"", "\"double\"",
  "\"bool\"", "\"string\"", "\"class\"", "\"interface\"", "\"null\"",
  "\"this\"", "\"extends\"", "\"implements\"", "\"for\"", "\"while\"",
  "\"if\"", "\"else\"", "\"return\"", "\"break\"", "\"New\"",
  "\"NewArray\"", "\"Print\"", "\"ReadInteger\"", "\"ReadLine\"", "\"<=\"",
  "\">=\"", "\"==\"", "\"!=\"", "\"&&\"", "\"||\"", "\"[]\"",
  "T_DBLLITERAL", "T_INTLITERAL", "T_BOOLLITERAL", "T_IDENTIFIER",
  "T_TYPEIDENTIFIER", "T_STRINGLITERAL", "';'", "'('", "')'", "','", "'{'",
  "'}'", "'['", "']'", "'.'", "'+'", "'-'", "'*'", "'/'", "'%'", "'<'",
  "'>'", "'='", "'!'", "'\\\\'", "$accept", "pgm", "program", "decl",
  "varDecl", "variable", "type", "usertype", "primtype", "arraytype",
  "funcDecl", "formals", "varDeclStar", "stmtStar", "stmtblock",
  "print_stmt", "return_stmt", "stmt", "matched_stmt", "unmatched_stmt",
  "matched_stmtStar", "unmatched_stmtStar", "matched_stmtBlock",
  "unmatched_stmtBlock", "common_if", "matched_if", "unmatched_if",
  "common_while", "matched_while", "unmatched_while", "expr", "expr1",
  "expr2", "expr3", "expr4", "expr5", "expr6", "expr7", "expr8", "expr9",
  "print_actuals", "constant", "typeidentifier", "identifier", "string",
  "int", "double", "bool", "array", "void", "break", "le", "ge", "eq",
  "neq", "and", "or", "intlit", "dbllit", "boollit", "stringlit", "null",
  "else", "print", "return", "scplus", "scminus", "sctimes", "scdiv",
  "scmod", "sclt", "scgt", "sceq", "scneq", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   295,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,    59,    40,
      41,    44,   123,   125,    91,    93,    46,    43,    45,    42,
      47,    37,    60,    62,    61,    33,    92
};
# endif

#define YYPACT_NINF -140

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-140)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -140,    18,  -140,     8,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,   -30,   -14,    -8,    -8,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,   -14,  -140,  -140,    -4,  -140,  -140,  -140,
      24,  -140,  -140,    69,    92,    -3,    36,   -14,    -3,  -140,
    -140,  -140,  -140,  -140,   109,  -140,    14,  -140,    42,    54,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,   350,  -140,
    -140,  -140,    64,    70,  -140,  -140,  -140,    85,  -140,  -140,
     154,  -140,  -140,    83,     7,    96,     0,    30,    20,    80,
    -140,    34,  -140,  -140,  -140,   110,  -140,  -140,  -140,  -140,
    -140,   114,   350,   350,   350,   350,   350,   117,  -140,  -140,
    -140,   132,   185,   154,  -140,  -140,  -140,  -140,  -140,  -140,
     350,   350,  -140,   350,  -140,  -140,   350,   350,  -140,  -140,
    -140,  -140,   350,   350,   350,   350,  -140,   350,   350,  -140,
    -140,  -140,   350,   350,   350,   350,   376,  -140,   350,  -140,
    -140,  -140,   118,   119,  -140,   109,   122,  -140,   216,  -140,
     132,   123,    96,   138,     0,    30,    30,    20,    20,    20,
      20,    80,    80,  -140,  -140,  -140,   -23,  -140,  -140,    31,
    -140,  -140,   340,   132,  -140,  -140,   128,  -140,  -140,  -140,
     350,  -140,   247,   131,   132,  -140,  -140,  -140,  -140,  -140,
     278,   109,   134,   135,  -140,    95,  -140,  -140,  -140,   309,
      95,  -140,  -140,   136,   132,     1,  -140,   109
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     3,     1,   106,   102,   103,   104,   101,
      99,     5,     0,     0,     9,    10,    11,     6,    12,    13,
      14,    15,    16,     0,     7,   100,     8,   105,    17,    18,
       0,    21,    21,     0,     0,     0,    22,     0,     0,    24,
      19,    23,     8,    20,    26,    25,     0,   118,     0,     0,
     121,   107,   120,   115,   114,   116,   117,    36,     0,    28,
     123,   130,     0,     0,    27,    32,    33,     0,    39,    41,
       0,    40,    42,     0,    62,    64,    66,    68,    71,    76,
      79,    83,    86,    90,    89,     0,    94,    95,    96,    97,
      98,     0,    30,     0,     0,     0,     0,     0,    37,    38,
      24,    57,     0,     0,    24,    60,    61,    35,   113,   129,
       0,     0,   112,     0,   110,   111,     0,     0,   108,   109,
     127,   128,     0,     0,     0,     0,   122,     0,     0,   124,
     125,   126,     0,     0,     0,     0,     0,    34,     0,    31,
      85,    84,     0,     0,    91,    43,     0,   119,     0,    24,
       0,     0,    65,    63,    67,    69,    70,    74,    75,    72,
      73,    77,    78,    80,    81,    82,     0,    88,    92,     0,
      58,    49,    47,    56,    24,    53,     0,    59,    87,    29,
       0,    44,     0,     0,     0,    93,    24,    51,    55,    52,
       0,    43,     0,     0,    24,    48,    50,    54,    46,     0,
       0,    24,    57,     0,    56,     0,    24,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,  -140,   172,   101,   177,  -140,  -140,  -140,
    -140,   149,   -39,  -140,   144,  -140,  -140,  -140,   -36,   -43,
    -140,  -140,   -95,  -140,   -45,  -140,  -140,   -44,  -140,  -140,
     -54,   -41,    73,    71,    25,   -33,    16,   -74,  -140,    49,
    -140,  -140,  -140,    27,  -140,  -140,  -140,  -140,   175,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -139,  -140,  -140,  -140,   -72,  -140,  -140,  -140,
    -140,  -140,  -140,  -140
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    45,    12,    37,    14,    15,    16,
      17,    33,   145,    46,    40,    62,    63,    64,   105,   106,
     172,   195,   192,   193,   102,    68,    69,   103,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
     169,    83,    18,    84,    19,    20,    21,    22,    28,    23,
      85,   122,   123,   116,   117,   113,   110,    86,    87,    88,
      89,    90,   148,    91,    92,   127,    93,   132,   133,   134,
     124,   125,   111,    94
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,    67,    70,    66,    97,   146,   128,   108,    24,   151,
      65,     5,     6,     7,     8,     9,    48,    49,     4,   140,
     141,    25,   178,    27,    47,    67,    70,   114,   115,    48,
      49,   101,    50,    51,   182,    31,    52,   108,   139,    39,
      26,   142,   143,   206,    10,   190,    53,    54,    55,    25,
      30,    56,    57,    58,   176,   118,   119,    59,   163,   164,
     165,   109,    60,    32,    42,   205,   150,   126,    60,    61,
     153,   179,   180,     6,     7,     8,     9,    41,   135,   183,
     136,    95,   120,   121,   168,   128,   128,   128,   128,   157,
     158,   159,   160,    96,   166,    47,     6,     7,     8,     9,
      48,    49,    98,    50,    51,    10,   203,    52,    99,    35,
      48,    49,   175,     6,     7,     8,     9,    53,    54,    55,
      25,   107,    56,    57,    58,   112,   185,   100,    10,   129,
     130,   131,    38,    60,    36,    36,   181,    67,    70,   188,
      61,   155,   156,   161,   162,    10,   187,   191,   137,   147,
     199,   200,   198,   138,   187,   199,   200,   144,   170,   171,
     199,   200,   188,   202,    47,   173,   177,   207,   108,    48,
      49,   184,    50,    51,   189,    11,    52,   196,   197,   204,
      13,    34,    43,   152,   154,   167,    53,    54,    55,    25,
      29,    56,    57,    58,     0,    47,   104,     0,     0,     0,
      48,    49,    60,    50,    51,     0,     0,    52,     0,    61,
       0,     0,     0,     0,     0,     0,     0,    53,    54,    55,
      25,     0,    56,    57,    58,     0,    47,   149,     0,     0,
       0,    48,    49,    60,    50,    51,     0,     0,    52,     0,
      61,     0,     0,     0,     0,     0,     0,     0,    53,    54,
      55,    25,     0,    56,    57,    58,     0,    47,   174,     0,
       0,     0,    48,    49,    60,    50,    51,     0,     0,    52,
       0,    61,     0,     0,     0,     0,     0,     0,     0,    53,
      54,    55,    25,     0,    56,    57,    58,     0,    47,   186,
       0,     0,     0,    48,    49,    60,    50,    51,     0,     0,
      52,     0,    61,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    55,    25,     0,    56,    57,    58,     0,    47,
     194,     0,     0,     0,    48,    49,    60,    50,    51,     0,
       0,    52,     0,    61,     0,     0,     0,     0,     0,     0,
       0,    53,    54,    55,    25,     0,    56,    57,    58,     0,
      47,   201,     0,     0,     0,    48,    49,    60,    50,    51,
      47,     0,    52,     0,    61,     0,     0,     0,     0,     0,
       0,     0,    53,    54,    55,    25,     0,    56,    57,    58,
       0,     0,    53,    54,    55,    25,    47,    56,    60,    58,
       0,     0,     0,     0,     0,    61,     0,     0,    60,     0,
       0,     0,     0,     0,     0,    61,     0,     0,    53,    54,
      55,    25,     0,    56,     0,    58
};

static const yytype_int16 yycheck[] =
{
      39,    46,    46,    46,    58,   100,    78,    30,    38,   104,
      46,     3,     4,     5,     6,     7,    15,    16,     0,    93,
      94,    35,    45,    31,    10,    70,    70,    27,    28,    15,
      16,    67,    18,    19,   173,    39,    22,    30,    92,    42,
      13,    95,    96,    42,    36,   184,    32,    33,    34,    35,
      23,    37,    38,    39,   149,    25,    26,    43,   132,   133,
     134,    54,    48,    39,    37,   204,   102,    47,    48,    55,
     111,    40,    41,     4,     5,     6,     7,    41,    44,   174,
      46,    39,    52,    53,   138,   157,   158,   159,   160,   122,
     123,   124,   125,    39,   135,    10,     4,     5,     6,     7,
      15,    16,    38,    18,    19,    36,   201,    22,    38,    40,
      15,    16,   148,     4,     5,     6,     7,    32,    33,    34,
      35,    38,    37,    38,    39,    29,   180,    42,    36,    49,
      50,    51,    40,    48,    33,    34,   172,   182,   182,   182,
      55,   116,   117,   127,   128,    36,   182,   186,    38,    17,
     195,   195,   195,    39,   190,   200,   200,    40,    40,    40,
     205,   205,   205,   199,    10,    43,    43,   206,    30,    15,
      16,    43,    18,    19,    43,     3,    22,    43,    43,    43,
       3,    32,    38,   110,   113,   136,    32,    33,    34,    35,
      15,    37,    38,    39,    -1,    10,    42,    -1,    -1,    -1,
      15,    16,    48,    18,    19,    -1,    -1,    22,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    -1,    37,    38,    39,    -1,    10,    42,    -1,    -1,
      -1,    15,    16,    48,    18,    19,    -1,    -1,    22,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    39,    -1,    10,    42,    -1,
      -1,    -1,    15,    16,    48,    18,    19,    -1,    -1,    22,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    38,    39,    -1,    10,    42,
      -1,    -1,    -1,    15,    16,    48,    18,    19,    -1,    -1,
      22,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    39,    -1,    10,
      42,    -1,    -1,    -1,    15,    16,    48,    18,    19,    -1,
      -1,    22,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38,    39,    -1,
      10,    42,    -1,    -1,    -1,    15,    16,    48,    18,    19,
      10,    -1,    22,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    39,
      -1,    -1,    32,    33,    34,    35,    10,    37,    48,    39,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    -1,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    59,    60,     0,     3,     4,     5,     6,     7,
      36,    61,    62,    63,    64,    65,    66,    67,    99,   101,
     102,   103,   104,   106,    38,    35,   100,    31,   105,   105,
     100,    39,    39,    68,    68,    40,    62,    63,    40,    42,
      71,    41,   100,    71,    69,    61,    70,    10,    15,    16,
      18,    19,    22,    32,    33,    34,    37,    38,    39,    43,
      48,    55,    72,    73,    74,    75,    76,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    98,   100,   107,   114,   115,   116,   117,
     118,   120,   121,   123,   130,    39,    39,    87,    38,    38,
      42,    75,    81,    84,    42,    75,    76,    38,    30,    54,
     113,   129,    29,   112,    27,    28,   110,   111,    25,    26,
      52,    53,   108,   109,   127,   128,    47,   122,   123,    49,
      50,    51,   124,   125,   126,    44,    46,    38,    39,    87,
      94,    94,    87,    87,    40,    69,    79,    17,   119,    42,
      75,    79,    89,    88,    90,    91,    91,    92,    92,    92,
      92,    93,    93,    94,    94,    94,    88,    96,    87,    97,
      40,    40,    77,    43,    42,    75,    79,    43,    45,    40,
      41,    75,   119,    79,    43,    87,    42,    75,    76,    43,
     119,    69,    79,    80,    42,    78,    43,    43,    76,    81,
      84,    42,    75,    79,    43,   119,    42,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    60,    60,    60,    61,    62,    63,
      63,    63,    64,    65,    65,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    69,    69,    70,    70,    71,    72,
      73,    73,    74,    74,    75,    75,    75,    75,    75,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    80,    81,
      82,    82,    82,    82,    83,    83,    83,    83,    84,    85,
      85,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      90,    91,    91,    91,    91,    91,    92,    92,    92,    93,
      93,    93,    93,    94,    94,    94,    95,    95,    95,    96,
      96,    96,    97,    97,    98,    98,    98,    98,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     6,
       6,     0,     2,     3,     0,     2,     0,     2,     4,     4,
       1,     2,     1,     1,     2,     2,     1,     2,     2,     1,
       1,     1,     1,     0,     2,     0,     2,     2,     2,     4,
       8,     6,     6,     4,     8,     6,     4,     2,     4,     4,
       2,     2,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     2,     1,     4,     3,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 70 "decaf.y" /* yacc.c:1646  */
    {top = (yyval) = (yyvsp[0]); }
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "decaf.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); }
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 78 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("program"); }
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 79 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 80 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 85 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("variable", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 89 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("usertype", 1, (yyvsp[0])); }
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 91 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 92 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 93 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 94 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("arraytype", 1, (yyvsp[-1])); }
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("arraytype", 1, (yyvsp[-1])); }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 100 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 101 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 103 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("formals"); }
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 104 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 105 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[-1])); (yyval) = (yyvsp[-2]); }
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 107 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("vardecls");}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 108 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 110 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmts");}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 111 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 113 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmtblock", 2, (yyvsp[-2]), (yyvsp[-1]));}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 115 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("print", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 117 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 1, (yyvsp[0])); }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 118 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 123 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("break", 1, (yyvsp[-1])); }
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 125 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("nullstmt"); }
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 133 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmts");}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 134 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])-> add_child((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 136 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmts");}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 137 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])-> add_child((yyvsp[0])); (yyval) = (yyvsp[0]);}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 139 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmtblock", 2, (yyvsp[-1]), (yyvsp[0]));}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 141 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmtblock", 2, (yyvsp[-1]), (yyvsp[0]));}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 143 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("if", 1, (yyvsp[-1])); }
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 145 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-5]));
                                                              (yyval)->add_child((yyvsp[-1]));
                                                              (yyval) = (yyvsp[-7]);}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 148 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-3]));
                                                              (yyval)->add_child((yyvsp[0]));
                                                              (yyval) = (yyvsp[-5]);}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 151 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-4]));
                                                              (yyval)->add_child((yyvsp[-1]));
                                                              (yyval) = (yyvsp[-5]);}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 154 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-2]));
                                                              (yyval)->add_child((yyvsp[0]));
                                                              (yyval) = (yyvsp[-3]);}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 158 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-5]));
                                                                  (yyval)->add_child((yyvsp[-1]));
                                                                  (yyval) = (yyvsp[-7]);}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 162 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-3]));
                                                                  (yyval)->add_child((yyvsp[0]));
                                                                  (yyval) = (yyvsp[-5]);}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 165 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-1]));
                                                                  (yyval)->add_child(nullptr);
                                                                  (yyval) = (yyvsp[-3]);}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 168 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0]));
                              (yyval)->add_child(nullptr);
                              (yyval) = (yyvsp[-1]);}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 172 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("while", 1, (yyvsp[-1]));}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 174 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[-1]));
                                                        (yyval) = (yyvsp[-3]);}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 176 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0]));
                                         (yyval) = (yyvsp[-1]);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 179 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0]));
                                          (yyval) = (yyvsp[-1]);}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 185 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 188 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 193 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 196 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 197 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 200 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 201 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 202 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 203 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 206 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 207 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 210 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 211 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 212 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 215 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("uop", 2, (yyvsp[-1]), (yyvsp[0]));}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 216 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("uop", 2, (yyvsp[-1]), (yyvsp[0]));}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 219 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("aref", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 220 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("fieldaccess", 2, (yyvsp[-2]), (yyvsp[0]));}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 226 "decaf.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 239 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("actuals", 1, (yyvsp[0]));}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 240 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[-1])); (yyval) = (yyvsp[-2]);}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 249 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 250 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 251 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 252 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 253 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 254 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 255 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 256 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 257 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 259 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 260 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 261 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree("EQ"); }
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 262 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree("NEQ"); }
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 263 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree("AND"); }
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 264 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree("OR"); }
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 268 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 269 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 270 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 271 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 272 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 275 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 276 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 277 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 280 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 281 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 282 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 283 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 284 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 285 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 286 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 287 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 288 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2078 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 300 "decaf.y" /* yacc.c:1906  */

