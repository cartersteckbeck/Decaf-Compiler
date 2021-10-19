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
#define YYLAST   676

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  303

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
       2,    44,    56,    45,     2,     2,     2,     2,     2,     2,
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
       0,    71,    71,    77,    79,    80,    81,    82,    83,    84,
      87,    90,    91,    93,    95,    96,    98,    99,   101,   102,
     103,   105,   106,   107,   109,   110,   111,   113,   115,   117,
     117,   117,   119,   121,   122,   123,   124,   126,   127,   130,
     131,   133,   134,   135,   137,   138,   140,   141,   143,   145,
     147,   148,   149,   152,   152,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   164,   164,   166,   167,   170,   171,
     173,   176,   178,   180,   183,   186,   189,   192,   196,   199,
     202,   205,   208,   212,   214,   216,   219,   222,   223,   224,
     225,   227,   229,   234,   235,   237,   238,   242,   243,   245,
     246,   247,   249,   250,   251,   252,   253,   255,   256,   257,
     259,   260,   261,   262,   264,   265,   266,   268,   269,   270,
     272,   273,   276,   285,   286,   287,   289,   290,   292,   293,
     294,   295,   296,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   309,   310,   311,   312,   313,   314,   318,   319,
     320,   321,   322,   325,   326,   327,   330,   331,   332,   333,
     334,   335,   336,   337,   338
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
  "'>'", "'='", "'!'", "'\\\\'", "$accept", "pgm", "program", "decl",
  "varDecl", "funcDecl", "interfaceDecl", "prototypes", "prototypeDecl",
  "classDecl", "fields", "implements", "functionCall", "variable", "type",
  "usertype", "primtype", "arraytype", "formals", "varDeclStar",
  "stmtStar", "stmtblock", "print_stmt", "return_stmt", "stmt",
  "matched_stmt", "unmatched_stmt", "matched_stmtStar",
  "unmatched_stmtStar", "matched_stmtBlock", "unmatched_stmtBlock",
  "common_if", "matched_if", "unmatched_if", "common_while",
  "matched_while", "unmatched_while", "common_for", "matched_for", "expr",
  "expr1", "expr2", "expr3", "expr4", "expr5", "expr6", "expr7", "expr8",
  "expr9", "actuals", "print_actuals", "constant", "typeidentifier",
  "identifier", "string", "int", "double", "bool", "array", "void",
  "break", "le", "ge", "eq", "neq", "and", "or", "intlit", "dbllit",
  "boollit", "stringlit", "null", "else", "print", "return", "scplus",
  "scminus", "sctimes", "scdiv", "scmod", "sclt", "scgt", "sceq", "scneq", YY_NULLPTR
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
      47,    37,    60,    62,    61,    33,    92
};
# endif

#define YYPACT_NINF -221

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-221)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -221,    24,  -221,   640,  -221,  -221,  -221,  -221,  -221,  -221,
      10,    10,  -221,  -221,  -221,  -221,  -221,  -221,    15,    10,
      36,    36,  -221,  -221,  -221,  -221,  -221,  -221,    10,  -221,
       2,    44,  -221,    69,  -221,  -221,  -221,    81,    10,  -221,
    -221,  -221,  -221,  -221,    99,    -4,   130,   341,   191,   345,
      10,  -221,    75,  -221,  -221,  -221,    10,    10,  -221,  -221,
      10,    10,   -18,   106,    10,    46,   112,   411,  -221,   119,
     121,   123,   125,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,   135,   481,   415,   485,
     602,   619,  -221,   202,  -221,   126,   126,   145,   151,  -221,
     131,   134,   163,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,   278,  -221,  -221,  -221,   165,   167,   168,  -221,  -221,
    -221,   244,  -221,  -221,   286,  -221,  -221,   321,  -221,   169,
      22,   180,    65,     4,    79,    94,  -221,    27,  -221,  -221,
     175,   184,  -221,  -221,  -221,  -221,  -221,   186,   278,   278,
     278,   153,   278,   278,   183,  -221,  -221,  -221,  -221,  -221,
     209,   356,   286,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,   278,   278,  -221,   278,  -221,  -221,   278,   278,  -221,
    -221,  -221,  -221,   278,   278,   278,   278,  -221,   278,   278,
    -221,  -221,  -221,   278,   278,   278,   278,    70,  -221,  -221,
     278,  -221,  -221,  -221,  -221,   278,   192,   189,   198,  -221,
     135,   190,   200,  -221,   391,  -221,   209,   135,   201,   207,
     180,   221,    65,     4,     4,    79,    79,    79,    79,    94,
      94,  -221,  -221,  -221,    -3,  -221,   548,  -221,    73,   214,
     278,  -221,  -221,   531,   132,   209,   209,  -221,  -221,   219,
     222,  -221,  -221,  -221,  -221,   278,  -221,  -221,   278,   565,
     227,  -221,  -221,   426,   132,   461,   531,   225,   209,   209,
    -221,  -221,  -221,   228,   582,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,   496,   531,  -221,  -221,   229,   232,   233,   238,
     242,  -221,  -221,  -221,   209,   209,  -221,  -221,    54,   531,
    -221,  -221,   135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     3,     1,   140,   136,   137,   138,   135,
       0,     0,   133,     5,     6,     8,     7,     9,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,     0,   134,
       0,     0,    10,    28,   139,    37,    38,     0,     0,    24,
      21,    14,    41,    41,     0,     0,     0,     0,     0,     0,
       0,    21,    25,    18,    23,    22,     0,     0,    13,    15,
       0,     0,     0,    42,     0,     0,     0,     0,    26,    28,
       0,     0,     0,    16,    44,    11,    43,    28,    17,    12,
      21,    19,    41,    41,    41,    41,    46,     0,     0,     0,
       0,     0,    45,     0,    20,     0,     0,     0,     0,   152,
       0,     0,     0,   155,   141,   154,   149,   148,   150,   151,
      57,     0,    48,   157,   164,     0,     0,     0,    47,    53,
      54,     0,    60,    64,     0,    61,    65,     0,    62,     0,
      93,    95,    97,    99,   102,   107,   110,   114,   117,   121,
     120,     0,   128,   129,   130,   131,   132,     0,    50,     0,
       0,     0,     0,     0,     0,   120,    63,    58,    59,    44,
      82,     0,     0,    44,    85,    86,    44,    92,    56,   147,
     163,     0,     0,   146,     0,   144,   145,     0,     0,   142,
     143,   161,   162,     0,     0,     0,     0,   156,     0,     0,
     158,   159,   160,     0,     0,     0,     0,     0,   123,    55,
       0,    52,    51,   116,   115,     0,     0,     0,     0,   122,
      66,     0,     0,   153,     0,    44,     0,    66,     0,     0,
      96,    94,    98,   100,   101,   105,   106,   103,   104,   108,
     109,   111,   112,   113,     0,   119,     0,   126,     0,     0,
       0,    83,    72,    70,    71,    80,     0,    44,    77,     0,
       0,    84,    91,   118,    27,     0,   124,    49,     0,     0,
       0,    67,    69,     0,     0,     0,     0,     0,     0,     0,
     125,   127,    90,     0,     0,    44,    82,    44,    74,    79,
      75,    76,     0,     0,    88,    89,     0,     0,     0,     0,
       0,    44,    75,    87,    80,     0,    73,    78,     0,     0,
      44,    81,    68
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,  -221,  -221,    14,   267,  -221,  -221,   224,  -221,
     -44,  -221,   138,    41,    19,  -221,  -221,  -221,    39,   -72,
    -221,   -52,  -221,  -221,  -221,   -89,   -87,  -221,  -221,  -147,
    -156,   -85,  -221,  -221,   -83,  -221,  -221,  -221,  -221,   -90,
    -108,   116,   117,   -22,    62,    11,  -116,  -221,    93,  -221,
    -221,  -221,  -221,   -10,  -221,  -221,  -221,  -221,   272,     8,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -220,  -221,  -221,  -221,  -129,  -221,  -221,  -221,
    -221,  -221,  -221,  -221
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    92,    55,    15,    47,    16,    17,
      46,    45,   115,    18,    64,    20,    21,    22,    48,   210,
      93,    75,   116,   117,   118,   164,   165,   243,   244,   289,
     290,   161,   122,   123,   162,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   236,
     238,   139,    23,   155,    24,    25,    26,    27,    35,    57,
     141,   183,   184,   177,   178,   174,   171,   142,   143,   144,
     145,   146,   214,   147,   148,   188,   149,   193,   194,   195,
     185,   186,   172,   150
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      30,    31,    86,   212,   119,   189,   120,    67,   121,    33,
     124,    28,   211,    79,    38,    39,   218,    13,    37,   219,
      73,   154,    19,    74,     4,   265,   266,   169,    44,   179,
     180,    29,   160,   203,   204,    52,    87,    51,   167,   121,
      66,   124,   253,    40,    79,    29,    69,    70,   282,   283,
      71,    72,   169,    32,    77,    61,   181,   182,   202,   250,
      54,   206,   207,   208,   221,    56,    60,    34,   249,   101,
     102,   196,   216,   197,   298,   299,   170,   231,   232,   233,
      99,    54,    49,   140,    78,    41,    56,    74,   234,    63,
      63,   217,   175,   176,   217,   300,   189,   189,   189,   189,
     267,    54,   106,   107,   108,    29,    56,   109,    42,   111,
     237,   140,    50,   257,   140,   239,   258,   140,    68,   288,
      43,    88,    89,    90,    91,   248,   187,   113,   287,    63,
      63,    63,    63,     5,     6,     7,     8,     9,   140,     6,
       7,     8,     9,   190,   191,   192,   256,   101,   102,    76,
     260,   140,   140,    80,   261,   223,   224,   262,    82,   263,
      83,   264,    84,    99,    85,   270,    12,    74,   271,   273,
     151,    12,    53,   152,   276,   217,   278,   280,   279,   263,
     121,   264,   124,    73,   286,   106,   107,   108,    29,    78,
     109,   205,   111,   278,   292,     6,     7,     8,     9,   229,
     230,   113,   153,   156,   140,   157,   158,   168,   114,   173,
     301,   279,    99,   263,   198,   264,   100,   101,   102,   217,
     103,   104,   199,   209,   105,   200,   213,    12,   302,   241,
     240,    62,   245,   140,   106,   107,   108,    29,   242,   109,
     110,   111,   246,   251,   112,   225,   226,   227,   228,   252,
     113,   169,   259,   140,    99,   140,   140,   114,   100,   101,
     102,   268,   103,   104,   269,   274,   105,   281,   284,   293,
      14,    59,   140,   140,   294,   295,   106,   107,   108,    29,
     296,   109,   110,   111,   297,   159,   201,   220,    99,   140,
     235,   222,   113,    36,     0,     0,    99,     0,     0,   114,
     100,   101,   102,     0,   103,   104,     0,     0,   105,     0,
     106,   107,   108,    29,     0,   109,     0,   111,   106,   107,
     108,    29,     0,   109,   110,   111,   113,   163,     0,     0,
       0,    99,     0,   114,   113,   100,   101,   102,     0,   103,
     104,   114,     0,   105,     5,     6,     7,     8,     9,     6,
       7,     8,     9,   106,   107,   108,    29,     0,   109,   110,
     111,     0,   166,     0,     0,     0,    99,     0,     0,   113,
     100,   101,   102,     0,   103,   104,   114,    12,   105,     0,
       0,    12,     0,    58,     0,    65,     0,     0,   106,   107,
     108,    29,     0,   109,   110,   111,     0,   215,     0,     0,
       0,    99,     0,     0,   113,   100,   101,   102,     0,   103,
     104,   114,     0,   105,     5,     6,     7,     8,     9,     6,
       7,     8,     9,   106,   107,   108,    29,     0,   109,   110,
     111,     0,   247,     0,     0,     0,    99,     0,     0,   113,
     100,   101,   102,     0,   103,   104,   114,    12,   105,     0,
       0,    12,     0,    81,     0,    95,     0,     0,   106,   107,
     108,    29,     0,   109,   110,   111,     0,   275,     0,     0,
       0,    99,     0,     0,   113,   100,   101,   102,     0,   103,
     104,   114,     0,   105,     5,     6,     7,     8,     9,     6,
       7,     8,     9,   106,   107,   108,    29,     0,   109,   110,
     111,     0,   277,     0,     0,     0,    99,     0,     0,   113,
     100,   101,   102,     0,   103,   104,   114,    12,   105,     0,
       0,    12,     0,    94,     0,    96,     0,     0,   106,   107,
     108,    29,     0,   109,   110,   111,     0,   291,     0,     0,
       0,    99,     0,     0,   113,   100,   101,   102,     0,   103,
     104,   114,     0,   105,     0,     0,     0,     0,    99,     0,
       0,     0,     0,   106,   107,   108,    29,     0,   109,   110,
     111,     0,     0,     0,     0,    99,     0,     0,     0,   113,
     106,   107,   108,    29,     0,   109,   114,   111,   254,     0,
       0,   255,    99,     0,     0,     0,   113,   106,   107,   108,
      29,     0,   109,   114,   111,   272,     6,     7,     8,     9,
       0,     0,     0,   113,   106,   107,   108,    29,     0,   109,
     114,   111,   285,     6,     7,     8,     9,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,   114,    12,     0,
       0,     0,    97,     5,     6,     7,     8,     9,    10,    11,
       0,     0,     0,     0,     0,    12,     0,     0,     0,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12
};

static const yytype_int16 yycheck[] =
{
      10,    11,    74,   159,    93,   134,    93,    51,    93,    19,
      93,     3,   159,    65,    12,    13,   163,     3,    28,   166,
      38,   111,     3,    41,     0,   245,   246,    30,    38,    25,
      26,    35,   121,   149,   150,    45,    80,    41,   127,   124,
      50,   124,    45,    41,    96,    35,    56,    57,   268,   269,
      60,    61,    30,    38,    64,    47,    52,    53,   148,   215,
      46,   151,   152,   153,   172,    46,    47,    31,   215,    15,
      16,    44,   161,    46,   294,   295,    54,   193,   194,   195,
      10,    67,    43,    93,    38,    41,    67,    41,   196,    48,
      49,   163,    27,    28,   166,    41,   225,   226,   227,   228,
     247,    87,    32,    33,    34,    35,    87,    37,    39,    39,
     200,   121,    13,    40,   124,   205,    43,   127,    43,   275,
      39,    82,    83,    84,    85,   214,    47,    48,   275,    88,
      89,    90,    91,     3,     4,     5,     6,     7,   148,     4,
       5,     6,     7,    49,    50,    51,   236,    15,    16,    43,
     240,   161,   162,    41,   243,   177,   178,   244,    39,   244,
      39,   244,    39,    10,    39,   255,    36,    41,   258,   259,
      39,    36,    42,    39,   263,   247,   265,   266,   265,   264,
     265,   264,   265,    38,   274,    32,    33,    34,    35,    38,
      37,    38,    39,   282,   283,     4,     5,     6,     7,   188,
     189,    48,    39,    38,   214,    38,    38,    38,    55,    29,
     299,   298,    10,   298,    39,   298,    14,    15,    16,   291,
      18,    19,    38,    40,    22,    39,    17,    36,   300,    40,
      38,    40,    42,   243,    32,    33,    34,    35,    40,    37,
      38,    39,    42,    42,    42,   183,   184,   185,   186,    42,
      48,    30,    38,   263,    10,   265,   266,    55,    14,    15,
      16,    42,    18,    19,    42,    38,    22,    42,    40,    40,
       3,    47,   282,   283,    42,    42,    32,    33,    34,    35,
      42,    37,    38,    39,    42,    41,   148,   171,    10,   299,
     197,   174,    48,    21,    -1,    -1,    10,    -1,    -1,    55,
      14,    15,    16,    -1,    18,    19,    -1,    -1,    22,    -1,
      32,    33,    34,    35,    -1,    37,    -1,    39,    32,    33,
      34,    35,    -1,    37,    38,    39,    48,    41,    -1,    -1,
      -1,    10,    -1,    55,    48,    14,    15,    16,    -1,    18,
      19,    55,    -1,    22,     3,     4,     5,     6,     7,     4,
       5,     6,     7,    32,    33,    34,    35,    -1,    37,    38,
      39,    -1,    41,    -1,    -1,    -1,    10,    -1,    -1,    48,
      14,    15,    16,    -1,    18,    19,    55,    36,    22,    -1,
      -1,    36,    -1,    42,    -1,    40,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    39,    -1,    41,    -1,    -1,
      -1,    10,    -1,    -1,    48,    14,    15,    16,    -1,    18,
      19,    55,    -1,    22,     3,     4,     5,     6,     7,     4,
       5,     6,     7,    32,    33,    34,    35,    -1,    37,    38,
      39,    -1,    41,    -1,    -1,    -1,    10,    -1,    -1,    48,
      14,    15,    16,    -1,    18,    19,    55,    36,    22,    -1,
      -1,    36,    -1,    42,    -1,    40,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    39,    -1,    41,    -1,    -1,
      -1,    10,    -1,    -1,    48,    14,    15,    16,    -1,    18,
      19,    55,    -1,    22,     3,     4,     5,     6,     7,     4,
       5,     6,     7,    32,    33,    34,    35,    -1,    37,    38,
      39,    -1,    41,    -1,    -1,    -1,    10,    -1,    -1,    48,
      14,    15,    16,    -1,    18,    19,    55,    36,    22,    -1,
      -1,    36,    -1,    42,    -1,    40,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    39,    -1,    41,    -1,    -1,
      -1,    10,    -1,    -1,    48,    14,    15,    16,    -1,    18,
      19,    55,    -1,    22,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      39,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    48,
      32,    33,    34,    35,    -1,    37,    55,    39,    40,    -1,
      -1,    43,    10,    -1,    -1,    -1,    48,    32,    33,    34,
      35,    -1,    37,    55,    39,    40,     4,     5,     6,     7,
      -1,    -1,    -1,    48,    32,    33,    34,    35,    -1,    37,
      55,    39,    40,     4,     5,     6,     7,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    36,    -1,
      -1,    -1,    40,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    59,    60,     0,     3,     4,     5,     6,     7,
       8,     9,    36,    61,    62,    63,    65,    66,    70,    71,
      72,    73,    74,   109,   111,   112,   113,   114,   116,    35,
     110,   110,    38,   110,    31,   115,   115,   110,    12,    13,
      41,    41,    39,    39,   110,    68,    67,    64,    75,    75,
      13,    41,   110,    42,    61,    62,    71,   116,    42,    65,
      71,   116,    40,    70,    71,    40,   110,    67,    43,   110,
     110,   110,   110,    38,    41,    78,    43,   110,    38,    78,
      41,    42,    39,    39,    39,    39,    76,    67,    75,    75,
      75,    75,    61,    77,    42,    40,    40,    40,    40,    10,
      14,    15,    16,    18,    19,    22,    32,    33,    34,    37,
      38,    39,    42,    48,    55,    69,    79,    80,    81,    82,
      83,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   108,
     110,   117,   124,   125,   126,   127,   128,   130,   131,   133,
     140,    39,    39,    39,    96,   110,    38,    38,    38,    41,
      82,    88,    91,    41,    82,    83,    41,    82,    38,    30,
      54,   123,   139,    29,   122,    27,    28,   120,   121,    25,
      26,    52,    53,   118,   119,   137,   138,    47,   132,   133,
      49,    50,    51,   134,   135,   136,    44,    46,    39,    38,
      39,    69,    96,   103,   103,    38,    96,    96,    96,    40,
      76,    86,    87,    17,   129,    41,    82,    76,    86,    86,
      98,    97,    99,   100,   100,   101,   101,   101,   101,   102,
     102,   103,   103,   103,    97,   105,   106,    96,   107,    96,
      38,    40,    40,    84,    85,    42,    42,    41,    82,    86,
      87,    42,    42,    45,    40,    43,    96,    40,    43,    38,
      96,    82,    83,    88,    91,   129,   129,    86,    42,    42,
      96,    96,    40,    96,    38,    41,    82,    41,    82,    83,
      82,    42,   129,   129,    40,    40,    96,    86,    87,    86,
      87,    41,    82,    40,    42,    42,    42,    42,   129,   129,
      41,    82,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    60,    60,    60,    60,    60,    60,
      61,    62,    62,    63,    64,    64,    65,    65,    66,    66,
      66,    67,    67,    67,    68,    68,    68,    69,    70,    71,
      71,    71,    72,    73,    73,    73,    73,    74,    74,    62,
      62,    75,    75,    75,    76,    76,    77,    77,    78,    79,
      80,    80,    80,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    84,    84,    85,    85,
      86,    87,    88,    89,    89,    89,    89,    89,    90,    90,
      90,    90,    90,    91,    92,    92,    93,    94,    94,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    99,
      99,    99,   100,   100,   100,   100,   100,   101,   101,   101,
     102,   102,   102,   102,   103,   103,   103,   104,   104,   104,
     105,   105,   105,   106,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     2,     2,     2,
       2,     6,     6,     5,     0,     2,     6,     6,     5,     7,
       9,     0,     2,     2,     0,     2,     3,     4,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     6,
       6,     0,     2,     3,     0,     2,     0,     2,     4,     4,
       1,     2,     2,     1,     1,     2,     2,     1,     2,     2,
       1,     1,     1,     2,     1,     1,     0,     2,     0,     2,
       2,     2,     4,     8,     6,     6,     6,     4,     8,     6,
       4,     6,     2,     4,     4,     2,     2,     8,     7,     7,
       6,     4,     2,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     1,     4,     3,
       1,     1,     3,     0,     2,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 77 "decaf.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); }
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 79 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("program"); }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 82 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 83 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 84 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 90 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 91 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 93 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("interface", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 95 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototypes");}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 96 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototype", 3, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2])); }
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 99 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototype", 3, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2])); }
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 101 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-3]), nullptr, nullptr, (yyvsp[-1]));}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 102 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-5]), nullptr, (yyvsp[-3]), (yyvsp[-1]));}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 103 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("classdecl", 4, (yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 105 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("fields");}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 106 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 107 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 109 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("implements"); }
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 110 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 111 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[-1])); (yyval) = (yyvsp[-2]); }
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 113 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("call", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 115 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("variable", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 119 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("usertype", 1, (yyvsp[0])); }
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 121 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 122 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 123 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 124 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 126 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("arraytype", 1, (yyvsp[-1])); }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 127 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("arraytype", 1, (yyvsp[-1])); }
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 130 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 131 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 133 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("formals"); }
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 134 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 135 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[-1])); (yyval) = (yyvsp[-2]); }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 137 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("vardecls");}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 138 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 140 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmts");}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 141 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 143 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmtblock", 2, (yyvsp[-2]), (yyvsp[-1]));}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 145 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("print", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 147 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 1, (yyvsp[0])); }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 148 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 149 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 154 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("break", 1, (yyvsp[-1])); }
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 156 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("nullstmt"); }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 166 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmts");}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 167 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])-> add_child((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 170 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmts");}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 171 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])-> add_child((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 173 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmtblock", 2, (yyvsp[-1]), (yyvsp[0]));}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 176 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmtblock", 2, (yyvsp[-1]), (yyvsp[0]));}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 178 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("if", 1, (yyvsp[-1])); }
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 180 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-5]));
                                                              (yyval)->add_child((yyvsp[-1]));
                                                              (yyval) = (yyvsp[-7]);}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 183 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-3]));
                                                              (yyval)->add_child((yyvsp[0]));
                                                              (yyval) = (yyvsp[-5]);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 186 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-3]));
                                                              (yyval)->add_child((yyvsp[0]));
                                                              (yyval) = (yyvsp[-5]);}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 189 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-4]));
                                                              (yyval)->add_child((yyvsp[-1]));
                                                              (yyval) = (yyvsp[-5]);}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 192 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-2]));
                                                              (yyval)->add_child((yyvsp[0]));
                                                              (yyval) = (yyvsp[-3]);}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 196 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-5]));
                                                                  (yyval)->add_child((yyvsp[-1]));
                                                                  (yyval) = (yyvsp[-7]);}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 199 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-3]));
                                                                  (yyval)->add_child((yyvsp[0]));
                                                                  (yyval) = (yyvsp[-5]);}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 202 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-1]));
                                                                 (yyval)->add_child(nullptr);
                                                                  (yyval) = (yyvsp[-3]);}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 205 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-3]));
									 (yyval)->add_child((yyvsp[0]));
									 (yyval) = (yyvsp[-5]);}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 208 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0]));
                              (yyval)->add_child(nullptr);
                              (yyval) = (yyvsp[-1]);}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 212 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("while", 1, (yyvsp[-1]));}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 214 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[-1]));
                                                        (yyval) = (yyvsp[-3]);}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 216 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0]));
                                         (yyval) = (yyvsp[-1]);}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 219 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0]));
                                          (yyval) = (yyvsp[-1]);}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 222 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 223 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, nullptr, (yyvsp[-3]), (yyvsp[-1]));}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 224 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, (yyvsp[-4]), (yyvsp[-2]), nullptr);}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 225 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, nullptr, (yyvsp[-2]), nullptr);}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 227 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[-1]));
                                                        (yyval) = (yyvsp[-3]);}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 229 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[0]));
                                        (yyval) = (yyvsp[-1]);}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 235 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 238 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 243 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 246 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 247 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 250 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 251 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 252 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 253 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 256 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 257 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 260 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 261 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 262 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 265 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("uop", 2, (yyvsp[-1]), (yyvsp[0]));}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 266 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("uop", 2, (yyvsp[-1]), (yyvsp[0]));}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 269 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("aref", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 270 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("fieldaccess", 2, (yyvsp[-2]), (yyvsp[0]));}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 276 "decaf.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 285 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("actuals");}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 286 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 287 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]);}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 289 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("actuals", 1, (yyvsp[0]));}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 290 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[-1])); (yyval) = (yyvsp[-2]);}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 299 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 300 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 301 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 302 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 303 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 304 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 305 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 306 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 307 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 309 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 310 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 311 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree("EQ"); }
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 312 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree("NEQ"); }
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 313 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree("AND"); }
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 314 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree("OR"); }
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 318 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 319 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 320 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 321 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 322 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 325 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 326 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 327 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 330 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 331 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 332 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 333 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 334 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 335 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 336 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 337 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 338 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2372 "y.tab.c" /* yacc.c:1646  */
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
#line 350 "decaf.y" /* yacc.c:1906  */

