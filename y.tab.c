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


#line 84 "y.tab.c" /* yacc.c:339  */

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

#line 173 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   455

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  172
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  282

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
      39,    40,    49,    47,    43,    48,    46,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
      52,    54,    53,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
       0,    71,    71,    77,    79,    80,    81,    82,    83,    86,
      89,    90,    93,    94,    95,    96,    98,    99,   100,   102,
     103,   105,   106,   108,   111,   113,   114,   116,   117,   119,
     121,   121,   121,   123,   125,   126,   127,   128,   130,   131,
     133,   134,   135,   137,   138,   140,   141,   143,   145,   147,
     148,   149,   152,   152,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   165,   165,   165,   167,   169,   173,
     176,   179,   183,   185,   188,   191,   192,   193,   194,   196,
     199,   204,   205,   207,   208,   210,   211,   213,   214,   215,
     217,   218,   219,   220,   221,   223,   224,   225,   227,   228,
     229,   230,   232,   233,   234,   236,   237,   238,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   251,   253,
     254,   255,   257,   258,   260,   261,   262,   263,   264,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   305,   306,   307,   308,   309,   310,
     311,   312,   313
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
  "T_TYPEIDENTIFIER", "T_STRINGLITERAL", "';'", "'('", "')'", "'{'", "'}'",
  "','", "'['", "']'", "'.'", "'+'", "'-'", "'*'", "'/'", "'%'", "'<'",
  "'>'", "'='", "'!'", "$accept", "pgm", "program", "decl", "varDecl",
  "funcDecl", "classDecl", "fields", "imp", "ext", "call", "interfaceDecl",
  "prototypes", "prototype", "variable", "type", "usertype", "primtype",
  "arraytype", "formals", "varDeclStar", "stmtStar", "stmtblock",
  "print_stmt", "return_stmt", "stmt", "matched_stmt", "unmatched_stmt",
  "common_if", "matched_if", "unmatched_if", "common_while",
  "matched_while", "unmatched_while", "common_for", "matched_for",
  "unmatched_for", "expr", "expr1", "expr2", "expr3", "expr4", "expr5",
  "expr6", "expr7", "expr8", "expr9", "special", "actuals",
  "print_actuals", "constant", "typeidentifier", "identifier", "string",
  "int", "double", "bool", "array", "void", "break", "this", "le", "ge",
  "eq", "neq", "and", "or", "readint", "new", "newarray", "intlit",
  "dbllit", "boollit", "stringlit", "null", "readline", "if", "else",
  "print", "return", "class", "extends", "implements", "for", "while",
  "interface", "scplus", "scminus", "sctimes", "scdiv", "scmod", "sclt",
  "scgt", "sceq", "scneq", YY_NULLPTR
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
      41,   123,   125,    44,    91,    93,    46,    43,    45,    42,
      47,    37,    60,    62,    61,    33
};
# endif

#define YYPACT_NINF -143

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-143)))

#define YYTABLE_NINF -52

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -143,    37,  -143,    68,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,     8,    16,    47,
      47,  -143,  -143,  -143,  -143,  -143,  -143,    16,    51,    16,
    -143,  -143,    59,  -143,  -143,  -143,    72,    12,    77,    96,
    -143,  -143,  -143,  -143,     0,    51,    16,  -143,  -143,    76,
      85,  -143,    16,  -143,  -143,    17,  -143,    27,    90,   109,
     137,  -143,    16,   109,   233,    81,  -143,    16,  -143,  -143,
    -143,  -143,  -143,    16,    16,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,   290,  -143,    92,   113,   137,   304,  -143,  -143,
    -143,  -143,   161,  -143,   397,   412,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,   376,  -143,  -143,  -143,   116,  -143,   121,
     127,  -143,  -143,  -143,   211,  -143,  -143,   211,  -143,  -143,
     211,  -143,  -143,   131,   -11,   141,   112,    -4,   114,    84,
    -143,    83,  -143,  -143,   135,   140,  -143,   150,   152,   158,
    -143,  -143,  -143,  -143,  -143,   162,   165,   166,   376,   167,
     168,   376,   376,   170,   172,  -143,   171,  -143,  -143,  -143,
     173,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,   376,
     376,  -143,   376,  -143,  -143,   376,   376,  -143,  -143,  -143,
    -143,   376,   376,   376,   376,  -143,   376,   376,  -143,  -143,
    -143,   376,   376,   376,   376,    16,  -143,  -143,   174,    16,
     376,   175,   376,   376,   179,  -143,   280,   376,  -143,  -143,
    -143,  -143,  -143,  -143,   211,   141,   182,   112,    -4,    -4,
     114,   114,   114,   114,    84,    84,  -143,  -143,  -143,    14,
    -143,   244,  -143,   178,   176,  -143,   180,  -143,    80,   376,
     185,   184,  -143,  -143,  -143,  -143,   376,  -143,  -143,   151,
    -143,  -143,   376,   190,   376,  -143,  -143,   201,   207,  -143,
    -143,   310,   213,  -143,  -143,  -143,   217,   343,  -143,  -143,
     218,  -143
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     3,     1,   136,   132,   133,   134,   131,
     158,   163,   129,     5,     6,     8,     7,     0,     0,    30,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       9,   130,    29,   135,    38,    39,     0,     0,     0,     0,
      40,    40,   159,   160,     0,     0,     0,    16,    25,     0,
       0,    16,     0,    22,    21,     0,    19,     0,     0,     0,
       0,    41,     0,     0,     0,     0,    16,     0,    12,    18,
      17,    24,    26,     0,     0,    43,    10,    42,    29,    11,
      13,    16,     0,    20,     0,     0,    45,     0,    14,    40,
      40,    44,     0,    15,     0,     0,   152,   138,   161,   162,
     154,   157,   137,   146,   147,   156,   145,   153,   149,   148,
     150,   151,    56,     0,    47,   165,   172,   112,    63,     0,
       0,    46,    52,    53,     0,    59,    64,     0,    60,    65,
       0,    61,    66,     0,    81,    83,    85,    87,    90,    95,
      98,   102,   105,   109,   108,     0,   110,     0,     0,     0,
     124,   125,   126,   127,   128,     0,     0,     0,    49,     0,
       0,     0,     0,     0,     0,   112,     0,    62,    57,    58,
      69,    71,    73,    74,    79,    80,    55,   144,   171,     0,
       0,   143,     0,   141,   142,     0,     0,   139,   140,   169,
     170,     0,     0,     0,     0,   164,     0,     0,   166,   167,
     168,     0,     0,     0,     0,     0,   119,    54,     0,     0,
       0,     0,     0,     0,   112,    50,     0,     0,   104,   103,
      27,    28,   111,   155,     0,    84,    82,    86,    88,    89,
      93,    94,    91,    92,    96,    97,    99,   100,   101,     0,
     107,     0,   113,     0,     0,   114,     0,   122,     0,     0,
       0,     0,    68,    70,   106,    23,     0,   120,   115,     0,
      67,    48,     0,     0,     0,    72,   121,     0,     0,   118,
     123,     0,     0,   116,   117,    78,     0,     0,    76,    77,
       0,    75
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,  -143,  -143,     2,   210,  -143,    34,   208,  -143,
     -88,  -143,  -143,  -143,   -42,    -3,  -143,  -143,  -143,   -25,
    -143,  -143,    54,  -143,  -143,  -143,  -121,  -110,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -111,  -142,    74,
      79,   -22,   -45,   -29,  -135,  -143,  -143,  -143,  -143,  -143,
    -143,    -5,   -17,  -143,  -143,  -143,  -143,   242,   205,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,   226,  -143,  -143,  -143,  -143,  -123,  -143,  -143,
    -143,  -143,  -143,  -143,  -143
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    69,    70,    15,    57,    55,    44,
     165,    16,    58,    72,    17,    62,    19,    20,    21,    49,
      86,    92,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   268,   241,   248,
     143,    22,   144,    23,    24,    25,    26,    34,    27,   145,
     146,   191,   192,   185,   186,   182,   179,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   224,   157,   158,
      28,    45,    46,   159,   160,    29,   196,   161,   201,   202,
     203,   193,   194,   180,   162
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    32,   166,   170,   117,    13,   172,    61,    61,   174,
      36,    38,    39,    43,   171,   197,    50,   173,    77,   177,
     175,   187,   188,    37,    42,    43,   218,   219,    54,    56,
       5,     6,     7,     8,     9,    56,   117,     4,   226,   117,
      53,    51,   117,   178,   177,    78,    30,   215,   189,   190,
      83,    31,    61,    61,    18,    73,    84,    85,    66,   254,
      67,    18,   239,    12,    94,    95,   236,   237,   238,    68,
     214,     5,     6,     7,     8,     9,    10,    11,    33,    18,
       6,     7,     8,     9,    18,    64,    31,    12,    91,     6,
       7,     8,     9,     5,     6,     7,     8,     9,    40,   244,
      82,   246,   247,   252,    12,   250,   251,   197,   197,   197,
     197,    41,    12,    76,   253,    87,    59,    79,    47,    60,
     261,    12,    81,   262,    67,    63,    12,   204,    60,   205,
     257,    89,    71,   198,   199,   200,   117,    48,   263,   183,
     184,     6,     7,     8,     9,   266,   230,   231,   232,   233,
      75,   270,    90,   272,   167,     6,     7,     8,     9,   168,
     276,   195,   115,   228,   229,   169,   280,   234,   235,   176,
     181,    96,    97,    12,   206,    98,    99,   100,   207,   101,
     102,   103,   104,   105,   106,   107,    31,    12,   240,   208,
     223,   209,   243,   108,   109,   110,    31,   210,   111,   112,
     113,   211,    75,   114,   212,   213,   216,   217,   220,   115,
     221,   222,   177,    14,   242,   245,   116,   -51,   258,   259,
     260,    96,    97,   264,   265,    98,    99,   100,   271,   101,
     102,   103,   104,   105,   106,   107,     5,     6,     7,     8,
       9,   273,   269,   108,   109,   110,    31,   274,   111,   112,
     113,   277,    75,   225,    96,    97,   267,   278,   281,   115,
      65,   227,    35,    74,   103,   104,   116,   106,   107,    12,
      52,     0,     0,     0,     0,    80,   108,   109,   110,    31,
       0,   111,     0,   113,   255,     0,     0,   256,     0,     0,
      96,    97,   115,     5,     6,     7,     8,     9,     0,   116,
     103,   104,     0,   106,   107,     0,     0,     5,     6,     7,
       8,     9,   108,   109,   110,    31,     0,   111,   249,   113,
      96,    97,     0,     0,     0,     0,    12,     0,   115,     0,
     103,   104,    88,   106,   107,   116,     0,     0,     0,     0,
      12,     0,   108,   109,   110,    31,    93,   111,     0,   113,
     275,     0,     0,    96,    97,     0,     0,     0,   115,     0,
       0,     0,     0,   103,   104,   116,   106,   107,     0,     0,
       0,     0,     0,     0,     0,   108,   109,   110,    31,     0,
     111,     0,   113,   279,     0,     0,    96,    97,     0,     0,
       0,   115,     0,     0,     0,     0,   103,   104,   116,   106,
     107,     6,     7,     8,     9,     0,     0,     0,   108,   109,
     110,    31,     0,   111,     0,   113,     6,     7,     8,     9,
       0,     0,     0,     0,   115,     0,     0,     0,     0,     0,
       0,   116,     0,    12,     0,     0,     0,   163,     0,     0,
      60,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,   164,     0,     0,    60
};

static const yytype_int16 yycheck[] =
{
       3,    18,   113,   124,    92,     3,   127,    49,    50,   130,
      27,    28,    29,    13,   124,   138,    41,   127,    60,    30,
     130,    25,    26,    28,    12,    13,   161,   162,    45,    46,
       3,     4,     5,     6,     7,    52,   124,     0,   180,   127,
      45,    41,   130,    54,    30,    62,    38,   158,    52,    53,
      67,    35,    94,    95,    57,    58,    73,    74,    41,    45,
      43,    64,   204,    36,    89,    90,   201,   202,   203,    42,
     158,     3,     4,     5,     6,     7,     8,     9,    31,    82,
       4,     5,     6,     7,    87,    51,    35,    36,    86,     4,
       5,     6,     7,     3,     4,     5,     6,     7,    39,   210,
      66,   212,   213,   224,    36,   216,   217,   230,   231,   232,
     233,    39,    36,    59,   224,    81,    40,    63,    41,    43,
      40,    36,    41,    43,    43,    40,    36,    44,    43,    46,
     241,    39,    42,    49,    50,    51,   224,    41,   249,    27,
      28,     4,     5,     6,     7,   256,   191,   192,   193,   194,
      41,   262,    39,   264,    38,     4,     5,     6,     7,    38,
     271,    47,    48,   185,   186,    38,   277,   196,   197,    38,
      29,    10,    11,    36,    39,    14,    15,    16,    38,    18,
      19,    20,    21,    22,    23,    24,    35,    36,   205,    39,
      17,    39,   209,    32,    33,    34,    35,    39,    37,    38,
      39,    39,    41,    42,    39,    39,    39,    39,    38,    48,
      38,    40,    30,     3,    40,    40,    55,    38,    40,    43,
      40,    10,    11,    38,    40,    14,    15,    16,    38,    18,
      19,    20,    21,    22,    23,    24,     3,     4,     5,     6,
       7,    40,   259,    32,    33,    34,    35,    40,    37,    38,
      39,    38,    41,   179,    10,    11,   259,    40,    40,    48,
      52,   182,    20,    58,    20,    21,    55,    23,    24,    36,
      44,    -1,    -1,    -1,    -1,    42,    32,    33,    34,    35,
      -1,    37,    -1,    39,    40,    -1,    -1,    43,    -1,    -1,
      10,    11,    48,     3,     4,     5,     6,     7,    -1,    55,
      20,    21,    -1,    23,    24,    -1,    -1,     3,     4,     5,
       6,     7,    32,    33,    34,    35,    -1,    37,    38,    39,
      10,    11,    -1,    -1,    -1,    -1,    36,    -1,    48,    -1,
      20,    21,    42,    23,    24,    55,    -1,    -1,    -1,    -1,
      36,    -1,    32,    33,    34,    35,    42,    37,    -1,    39,
      40,    -1,    -1,    10,    11,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    20,    21,    55,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,
      37,    -1,    39,    40,    -1,    -1,    10,    11,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    20,    21,    55,    23,
      24,     4,     5,     6,     7,    -1,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    -1,    39,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    36,    -1,    -1,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    40,    -1,    -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,    59,     0,     3,     4,     5,     6,     7,
       8,     9,    36,    60,    61,    62,    67,    70,    71,    72,
      73,    74,   107,   109,   110,   111,   112,   114,   136,   141,
      38,    35,   108,    31,   113,   113,   108,   107,   108,   108,
      39,    39,    12,    13,    65,   137,   138,    41,    41,    75,
      75,    41,   138,   107,   108,    64,   108,    63,    68,    40,
      43,    70,    71,    40,    63,    64,    41,    43,    42,    60,
      61,    42,    69,    71,   114,    41,    78,    70,   108,    78,
      42,    41,    63,   108,   108,   108,    76,    63,    42,    39,
      39,    60,    77,    42,    75,    75,    10,    11,    14,    15,
      16,    18,    19,    20,    21,    22,    23,    24,    32,    33,
      34,    37,    38,    39,    42,    48,    55,    66,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   106,   108,   115,   116,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   134,   135,   139,
     140,   143,   150,    40,    40,    66,    93,    38,    38,    38,
      82,    83,    82,    83,    82,    83,    38,    30,    54,   122,
     149,    29,   121,    27,    28,   119,   120,    25,    26,    52,
      53,   117,   118,   147,   148,    47,   142,   143,    49,    50,
      51,   144,   145,   146,    44,    46,    39,    38,    39,    39,
      39,    39,    39,    39,    66,    93,    39,    39,   100,   100,
      38,    38,    40,    17,   133,    95,    94,    96,    97,    97,
      98,    98,    98,    98,    99,    99,   100,   100,   100,    94,
     108,   104,    40,   108,    93,    40,    93,    93,   105,    38,
      93,    93,    82,    83,    45,    40,    43,    93,    40,    43,
      40,    40,    43,    93,    38,    40,    93,    71,   103,   108,
      93,    38,    93,    40,    40,    40,    93,    38,    40,    40,
      93,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    59,    59,    59,    59,    59,    60,
      61,    61,    62,    62,    62,    62,    63,    63,    63,    64,
      64,    65,    65,    66,    67,    68,    68,    69,    69,    70,
      71,    71,    71,    72,    73,    73,    73,    73,    74,    74,
      75,    75,    75,    76,    76,    77,    77,    78,    79,    80,
      80,    80,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    84,    85,    86,
      86,    86,    87,    88,    89,    90,    90,    90,    90,    91,
      92,    93,    93,    94,    94,    95,    95,    96,    96,    96,
      97,    97,    97,    97,    97,    98,    98,    98,    99,    99,
      99,    99,   100,   100,   100,   101,   101,   101,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   103,   104,
     104,   104,   105,   105,   106,   106,   106,   106,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     2,     2,     2,
       6,     6,     5,     6,     7,     8,     0,     2,     2,     1,
       3,     2,     2,     4,     5,     0,     2,     6,     6,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       0,     2,     3,     0,     2,     0,     2,     4,     4,     1,
       2,     2,     1,     1,     2,     2,     1,     2,     2,     1,
       1,     1,     2,     1,     1,     1,     1,     4,     4,     2,
       4,     2,     4,     2,     2,     8,     7,     7,     6,     2,
       2,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     1,     4,     3,     1,     1,
       1,     3,     1,     3,     3,     4,     6,     6,     1,     0,
       2,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 71 "decaf.y" /* yacc.c:1646  */
    {top = (yyval) = (yyvsp[0]); }
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 77 "decaf.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); }
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 79 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("program"); }
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 82 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 83 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 89 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 90 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 93 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-3]), nullptr, nullptr, (yyvsp[-1]));}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-4]), (yyvsp[-3]), nullptr, (yyvsp[-1]));}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 95 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-5]), nullptr, (yyvsp[-3]), (yyvsp[-1]));}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 96 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("fields");}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 99 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 100 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 102 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("implements", 1, (yyvsp[0])); }
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 103 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 105 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("extends", 1, (yyvsp[0])); }
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 106 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("extends", 1, (yyvsp[0])); }
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 108 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("call", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 111 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("interface", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 113 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototypes");}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 114 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 116 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototype", 3, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2])); }
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 117 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototype", 3, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2])); }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 119 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("variable", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 123 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("usertype", 1, (yyvsp[0])); }
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 125 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 126 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 127 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 128 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 130 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("arraytype", 1, (yyvsp[-1])); }
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 131 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("arraytype", 1, (yyvsp[-1])); }
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 133 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("formals"); }
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 134 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 135 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 137 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("vardecls");}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 140 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmts");}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 141 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 143 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmtblock", 2, (yyvsp[-2]), (yyvsp[-1]));}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 145 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("print", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 147 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 1, (yyvsp[0])); }
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 148 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 149 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 154 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("break", 1, (yyvsp[-1])); }
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 156 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("nullstmt"); }
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 167 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("if", 1, (yyvsp[-1])); }
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 169 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-2]));
                                                              (yyval)->add_child((yyvsp[0]));
                                                              (yyval) = (yyvsp[-3]);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 173 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0]));
                                          (yyval)->add_child(nullptr);
                                          (yyval) = (yyvsp[-1]);}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 176 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-2]));
                                                                  (yyval)->add_child((yyvsp[0]));
                                                                  (yyval) = (yyvsp[-3]);}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 179 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0]));
                                            (yyval)->add_child(nullptr);
                                            (yyval) = (yyvsp[-1]);}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 183 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("while", 1, (yyvsp[-1]));}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 185 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[0]));
                                              (yyval) = (yyvsp[-1]);}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 188 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0]));
                                                  (yyval) = (yyvsp[-1]);}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 191 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 192 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, nullptr, (yyvsp[-3]), (yyvsp[-1]));}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 193 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, (yyvsp[-4]), (yyvsp[-2]), nullptr);}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 194 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, nullptr, (yyvsp[-2]), nullptr);}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 196 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[0]));
                                          (yyval) = (yyvsp[-1]);}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 199 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[0]));
                                          (yyval) = (yyvsp[-1]);}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 205 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 208 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 211 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 214 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 215 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 218 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 219 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 220 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 221 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 224 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 225 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 228 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 229 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 230 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 233 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("uop", 2, (yyvsp[-1]), (yyvsp[0]));}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 234 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("uop", 2, (yyvsp[-1]), (yyvsp[0]));}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 237 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("aref", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 238 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("fieldaccess", 2, (yyvsp[-2]), (yyvsp[0]));}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 243 "decaf.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 247 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("new", 1, (yyvsp[-1]));}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 248 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("newarray", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 249 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("newarray", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 251 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("usertype", 1, (yyvsp[0]));}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 253 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("actuals");}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 254 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 255 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]);}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 257 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("actuals", 1, (yyvsp[0]));}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 258 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]);}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 267 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 268 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 269 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 270 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 271 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 272 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 273 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 274 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 275 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 276 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 277 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 278 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 279 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 280 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 281 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 282 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 283 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 284 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 285 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 286 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 287 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 288 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 289 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 290 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 291 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 292 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 293 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 294 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 295 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 296 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 297 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 298 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 299 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 300 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 301 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 305 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 306 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 307 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 308 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 309 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 310 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 311 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 312 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 313 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2327 "y.tab.c" /* yacc.c:1646  */
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
#line 325 "decaf.y" /* yacc.c:1906  */

