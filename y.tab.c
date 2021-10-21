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
#line 46 "decaf.y" /* yacc.c:339  */

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
#define YYLAST   524

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
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
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    76,    78,    79,    80,    81,    82,    86,
      88,    90,    90,    90,    92,    94,    95,    96,    97,    99,
     100,   104,   105,   107,   108,   109,   113,   114,   115,   116,
     118,   119,   120,   122,   123,   125,   126,   128,   134,   136,
     137,   139,   140,   143,   145,   146,   148,   149,   151,   151,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   163,
     164,   165,   168,   170,   171,   173,   176,   178,   180,   181,
     182,   186,   188,   190,   194,   195,   196,   197,   199,   201,
     205,   206,   207,   209,   210,   212,   213,   215,   216,   218,
     219,   220,   222,   223,   224,   225,   226,   228,   229,   230,
     232,   233,   234,   235,   237,   238,   239,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   253,   255,   256,
     257,   259,   260,   262,   263,   264,   265,   266,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   307,   308,   309,   310,   311,   312,   313,
     314,   315
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
  "'>'", "'='", "'!'", "$accept", "pgm", "program", "decl", "varDecl",
  "variable", "type", "usertype", "primtype", "arraytype", "funcDecl",
  "formals", "classDecl", "fields", "identifiersPlus", "ext", "call",
  "interfaceDecl", "prototypes", "prototype", "stmtblock", "varDeclStar",
  "stmtStar", "stmt", "matched_stmt", "unmatched_stmt", "break_stmt",
  "return_stmt", "print_stmt", "common_if", "matched_if", "unmatched_if",
  "common_while", "matched_while", "unmatched_while", "common_for",
  "matched_for", "unmatched_for", "Lvalue", "expr", "expr1", "expr2",
  "expr3", "expr4", "expr5", "expr6", "expr7", "expr8", "special",
  "nactuals", "actuals", "constant", "typeidentifier", "identifier",
  "string", "int", "double", "bool", "array", "void", "break", "this",
  "le", "ge", "eq", "neq", "and", "or", "readint", "new", "newarray",
  "intlit", "dbllit", "boollit", "stringlit", "null", "readline", "if",
  "else", "print", "return", "class", "extends", "implements", "for",
  "while", "interface", "scplus", "scminus", "sctimes", "scdiv", "scmod",
  "sclt", "scgt", "sceq", "scneq", YY_NULLPTR
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
      47,    37,    60,    62,    61,    33
};
# endif

#define YYPACT_NINF -166

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-166)))

#define YYTABLE_NINF -101

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -166,     7,  -166,   228,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,   -17,   -10,    16,    16,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,   -10,     1,   -10,
    -166,  -166,    12,  -166,  -166,  -166,    20,   117,    31,    46,
    -166,  -166,  -166,  -166,    11,     1,   -10,  -166,  -166,    58,
      70,  -166,   -10,  -166,  -166,    92,  -166,    36,   262,    62,
      85,  -166,   -10,    62,   325,   103,   -10,  -166,  -166,  -166,
    -166,  -166,   -10,  -166,   -10,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,   341,    39,    54,    85,   420,  -166,  -166,
    -166,  -166,   239,  -166,   279,   434,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,   398,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,    69,    79,    93,   104,  -166,  -166,   104,  -166,
    -166,   104,  -166,  -166,    81,   116,    41,   129,  -166,    55,
     199,    -5,  -166,  -166,  -166,   133,  -166,  -166,   134,   145,
     148,  -166,  -166,  -166,  -166,  -166,   156,   157,   162,   398,
     163,   165,   398,   398,   168,   170,   143,  -166,  -166,  -166,
     195,  -166,  -166,  -166,  -166,  -166,  -166,   398,  -166,  -166,
     398,   -10,   398,  -166,   398,  -166,  -166,   398,   398,  -166,
    -166,  -166,  -166,  -166,   398,   398,   398,   398,   398,   398,
    -166,  -166,  -166,   398,   398,   398,  -166,   173,   -10,   398,
     174,   398,   398,  -166,   302,   398,  -166,    41,   432,   432,
    -166,  -166,  -166,  -166,   104,    41,    51,  -166,   131,   270,
     366,   366,   471,   471,   461,   461,   471,   471,   432,   432,
     432,   269,  -166,   175,   182,  -166,   176,  -166,   123,   398,
     191,   371,  -166,  -166,  -166,  -166,   398,  -166,  -166,   144,
    -166,  -166,   398,   192,   398,  -166,  -166,   200,   201,  -166,
    -166,   332,   204,  -166,  -166,  -166,   203,   365,  -166,  -166,
     208,  -166
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
      23,    23,   158,   159,     0,     0,     0,    30,    39,     0,
       0,    30,     0,    36,    35,     0,    33,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,    30,    26,    32,
      31,    38,     0,    40,     0,    44,    21,    25,    10,    22,
      27,    30,    34,     0,     0,     0,    46,     0,    28,    23,
      23,    45,     0,    29,     0,     0,   151,   137,   160,   161,
     153,   156,   136,   145,   146,   155,   144,   152,   148,   147,
     149,   150,    50,     0,    43,   164,   171,   111,    58,    47,
      48,    49,     0,     0,     0,     0,    52,    59,     0,    53,
      60,     0,    54,    61,   107,     0,    83,    85,    87,    89,
      92,    97,   100,   104,   108,    80,    62,   109,     0,     0,
       0,   123,   124,   125,   126,   127,     0,     0,     0,    63,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      68,    70,    72,    73,    78,    79,   170,     0,    51,   143,
       0,     0,     0,   142,     0,   140,   141,     0,     0,   138,
     139,   163,   168,   169,     0,     0,     0,     0,     0,     0,
     165,   166,   167,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,    64,     0,     0,   107,     0,   106,   105,
      41,    42,   110,   154,     0,    84,     0,    82,    86,    88,
      90,    91,    95,    96,    98,    99,    93,    94,   101,   102,
     103,     0,   112,     0,     0,   113,     0,   121,     0,     0,
       0,     0,    67,    69,    81,    37,     0,   119,   114,     0,
      66,    65,     0,     0,     0,    71,   120,     0,     0,   117,
     122,     0,     0,   115,   116,    77,     0,     0,    75,    76,
       0,    74
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -166,  -166,     0,   -38,    -3,  -166,  -166,  -166,
     236,   -23,  -166,   -32,   218,  -166,  -166,  -166,  -166,  -166,
     -53,  -166,  -166,  -166,  -123,  -108,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,    -6,  -109,
      23,   106,    60,   -22,  -165,   -27,  -135,  -166,  -166,  -166,
    -166,  -166,   -19,   -14,  -166,  -166,  -166,  -166,   258,   233,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,   251,  -166,  -166,  -166,  -166,  -124,  -166,
    -166,  -166,  -166,  -166,  -166,  -166
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    69,    14,    62,    16,    17,    18,
      70,    49,    20,    57,    55,    44,   117,    21,    58,    73,
     118,    86,    92,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   268,   241,
     248,   144,    22,   145,    23,    24,    25,    26,    34,    27,
     146,   147,   194,   195,   187,   188,   184,   182,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   224,   158,
     159,    28,    45,    46,   160,   161,    29,   196,   162,   203,
     204,   205,   198,   199,   177,   163
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    32,   170,    13,   166,   172,    76,     4,   174,    37,
      79,    61,    61,    36,    38,    39,   197,   171,    50,    64,
     173,    30,    77,   175,    43,    31,    53,   218,   219,   232,
     233,    54,    56,   236,   237,    83,    31,    12,    56,     5,
       6,     7,     8,     9,   200,   201,   202,    33,    78,    87,
     213,    40,    82,    51,    15,    72,    61,    61,    84,    41,
      85,    15,     6,     7,     8,     9,    94,    95,   238,   239,
     240,   179,    12,    47,     6,     7,     8,     9,    89,    68,
      15,   179,   185,   186,    15,   180,    91,   181,    48,     6,
       7,     8,     9,    90,    12,   180,   254,   181,    59,    60,
     244,   252,   246,   247,    75,   250,    12,   167,   197,   197,
      63,    60,   197,   197,    96,    97,   253,   168,    98,    99,
     100,    12,   101,   102,   103,   104,   105,   106,   107,    42,
      43,   169,   257,    66,    67,   176,   108,   109,   110,    31,
     263,   111,   112,   113,    66,    81,    75,   266,     6,     7,
       8,     9,   115,   270,   178,   272,   216,   216,   183,   116,
     183,   -85,   276,   261,   262,   230,   231,   227,   280,   234,
     235,   216,   206,   207,   216,   -85,   216,   -85,   216,    31,
      12,   216,   216,   222,   208,   217,   217,   209,   216,   216,
     216,   216,   216,   216,   243,   210,   211,   216,   216,   216,
     225,   212,   214,   226,   215,   217,   220,   217,   221,   216,
     217,   217,   223,   242,   245,   258,   260,   217,   217,   217,
     217,   217,   217,   259,   189,   190,   217,   217,   217,   264,
     271,     5,     6,     7,     8,     9,    10,    11,   251,    19,
     273,   274,   277,   278,   229,   269,   191,   115,   281,    96,
      97,   192,   193,    98,    99,   100,   267,   101,   102,   103,
     104,   105,   106,   107,    12,     5,     6,     7,     8,     9,
      65,   108,   109,   110,    31,    35,   111,   112,   113,    96,
      97,    75,   114,     6,     7,     8,     9,   115,   228,   103,
     104,    74,   106,   107,   116,    52,     0,     0,    12,   -87,
     -87,   108,   109,   110,    31,    71,   111,     0,   113,   255,
     256,     0,    96,    97,   -87,    12,   -87,   115,     0,   164,
      60,     0,   103,   104,   116,   106,   107,     0,     5,     6,
       7,     8,     9,     0,   108,   109,   110,    31,     0,   111,
     249,   113,    96,    97,     5,     6,     7,     8,     9,     0,
     115,     0,   103,   104,     0,   106,   107,   116,     0,     0,
       0,    12,     0,     0,   108,   109,   110,    31,    80,   111,
       0,   113,   275,     0,     0,    96,    97,    12,     0,     0,
     115,     0,     0,     0,    88,   103,   104,   116,   106,   107,
       0,     0,     0,   185,   186,   -89,   -89,   108,   109,   110,
      31,   179,   111,     0,   113,   279,     0,     0,    96,    97,
     -89,   265,   -89,   115,     0,   180,     0,   181,   103,   104,
     116,   106,   107,     5,     6,     7,     8,     9,     0,     0,
     108,   109,   110,    31,     0,   111,     0,   113,     6,     7,
       8,     9,     0,     0,     0,     0,   115,     0,     0,     0,
       0,     0,     0,   116,     0,     0,    12,  -100,  -100,  -100,
    -100,  -100,  -100,    93,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,   165,    60,  -100,     0,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,   -97,   -97,   -97,   -97,
     -97,   -97,     0,     0,     0,     0,   189,   190,   -92,   -92,
     -92,   -92,     0,     0,     0,   -97,     0,   -97,   -97,   -97,
     200,   201,   202,   -97,   -97,   -92,     0,   -92,   191,   115,
       0,     0,     0,   192,   193
};

static const yytype_int16 yycheck[] =
{
       3,    15,   125,     3,   113,   128,    59,     0,   131,    28,
      63,    49,    50,    27,    28,    29,   140,   125,    41,    51,
     128,    38,    60,   131,    13,    35,    45,   162,   163,   194,
     195,    45,    46,   198,   199,    67,    35,    36,    52,     3,
       4,     5,     6,     7,    49,    50,    51,    31,    62,    81,
     159,    39,    66,    42,    57,    58,    94,    95,    72,    39,
      74,    64,     4,     5,     6,     7,    89,    90,   203,   204,
     205,    30,    36,    42,     4,     5,     6,     7,    39,    43,
      83,    30,    27,    28,    87,    44,    86,    46,    42,     4,
       5,     6,     7,    39,    36,    44,    45,    46,    40,    41,
     209,   224,   211,   212,    42,   214,    36,    38,   232,   233,
      40,    41,   236,   237,    10,    11,   224,    38,    14,    15,
      16,    36,    18,    19,    20,    21,    22,    23,    24,    12,
      13,    38,   241,    41,    42,    54,    32,    33,    34,    35,
     249,    37,    38,    39,    41,    42,    42,   256,     4,     5,
       6,     7,    48,   262,    38,   264,   162,   163,    29,    55,
      29,    30,   271,    40,    41,   187,   188,   181,   277,   196,
     197,   177,    39,    39,   180,    44,   182,    46,   184,    35,
      36,   187,   188,    40,    39,   162,   163,    39,   194,   195,
     196,   197,   198,   199,   208,    39,    39,   203,   204,   205,
     177,    39,    39,   180,    39,   182,    38,   184,    38,   215,
     187,   188,    17,    40,    40,    40,    40,   194,   195,   196,
     197,   198,   199,    41,    25,    26,   203,   204,   205,    38,
      38,     3,     4,     5,     6,     7,     8,     9,   215,     3,
      40,    40,    38,    40,   184,   259,    47,    48,    40,    10,
      11,    52,    53,    14,    15,    16,   259,    18,    19,    20,
      21,    22,    23,    24,    36,     3,     4,     5,     6,     7,
      52,    32,    33,    34,    35,    17,    37,    38,    39,    10,
      11,    42,    43,     4,     5,     6,     7,    48,   182,    20,
      21,    58,    23,    24,    55,    44,    -1,    -1,    36,    29,
      30,    32,    33,    34,    35,    43,    37,    -1,    39,    40,
      41,    -1,    10,    11,    44,    36,    46,    48,    -1,    40,
      41,    -1,    20,    21,    55,    23,    24,    -1,     3,     4,
       5,     6,     7,    -1,    32,    33,    34,    35,    -1,    37,
      38,    39,    10,    11,     3,     4,     5,     6,     7,    -1,
      48,    -1,    20,    21,    -1,    23,    24,    55,    -1,    -1,
      -1,    36,    -1,    -1,    32,    33,    34,    35,    43,    37,
      -1,    39,    40,    -1,    -1,    10,    11,    36,    -1,    -1,
      48,    -1,    -1,    -1,    43,    20,    21,    55,    23,    24,
      -1,    -1,    -1,    27,    28,    29,    30,    32,    33,    34,
      35,    30,    37,    -1,    39,    40,    -1,    -1,    10,    11,
      44,    40,    46,    48,    -1,    44,    -1,    46,    20,    21,
      55,    23,    24,     3,     4,     5,     6,     7,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    -1,    39,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    36,    25,    26,    27,
      28,    29,    30,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    40,    41,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    44,    -1,    46,    47,    48,
      -1,    -1,    -1,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,    59,     0,     3,     4,     5,     6,     7,
       8,     9,    36,    60,    61,    62,    63,    64,    65,    66,
      68,    73,   108,   110,   111,   112,   113,   115,   137,   142,
      38,    35,   109,    31,   114,   114,   109,   108,   109,   109,
      39,    39,    12,    13,    71,   138,   139,    42,    42,    67,
      67,    42,   139,   108,   109,    70,   109,    69,    74,    40,
      41,    61,    62,    40,    69,    70,    41,    42,    43,    60,
      66,    43,    62,    75,   115,    42,    76,    61,   109,    76,
      43,    42,   109,    69,   109,   109,    77,    69,    43,    39,
      39,    60,    78,    43,    67,    67,    10,    11,    14,    15,
      16,    18,    19,    20,    21,    22,    23,    24,    32,    33,
      34,    37,    38,    39,    43,    48,    55,    72,    76,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   107,   109,   116,   117,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   135,   136,
     140,   141,   144,   151,    40,    40,    95,    38,    38,    38,
      80,    81,    80,    81,    80,    81,    54,   150,    38,    30,
      44,    46,   123,    29,   122,    27,    28,   120,   121,    25,
      26,    47,    52,    53,   118,   119,   143,   144,   148,   149,
      49,    50,    51,   145,   146,   147,    39,    39,    39,    39,
      39,    39,    39,    95,    39,    39,    94,    96,   102,   102,
      38,    38,    40,    17,   134,    96,    96,   109,    97,    98,
      99,    99,   100,   100,   101,   101,   100,   100,   102,   102,
     102,   105,    40,   109,    95,    40,    95,    95,   106,    38,
      95,    96,    80,    81,    45,    40,    41,    95,    40,    41,
      40,    40,    41,    95,    38,    40,    95,    62,   104,   109,
      95,    38,    95,    40,    40,    40,    95,    38,    40,    40,
      95,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    59,    59,    59,    59,    59,    60,
      61,    62,    62,    62,    63,    64,    64,    64,    64,    65,
      65,    66,    66,    67,    67,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    73,    74,
      74,    75,    75,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      81,    81,    82,    83,    83,    84,    85,    86,    87,    87,
      87,    88,    89,    90,    91,    91,    91,    91,    92,    93,
      94,    94,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    98,    99,    99,    99,    99,    99,   100,   100,   100,
     101,   101,   101,   101,   102,   102,   102,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   104,   105,   105,
     105,   106,   106,   107,   107,   107,   107,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     6,     6,     0,     2,     3,     5,     6,     7,     8,
       0,     2,     2,     1,     3,     2,     2,     4,     5,     0,
       2,     6,     6,     4,     0,     2,     0,     2,     1,     1,
       1,     2,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     4,     4,     4,     2,     4,
       2,     4,     2,     2,     8,     7,     7,     6,     2,     2,
       1,     4,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     1,     1,     1,
       3,     1,     3,     3,     4,     6,     6,     1,     0,     2,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
#line 72 "decaf.y" /* yacc.c:1646  */
    {top = (yyval) = (yyvsp[0]); }
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "decaf.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 78 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("program"); }
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 79 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 80 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 81 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 82 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 88 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("variable", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 92 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("usertype", 1, (yyvsp[0])); }
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 94 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 95 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 99 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("arraytype", 1, (yyvsp[-1])); }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 100 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("arraytype", 1, (yyvsp[-1])); }
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 104 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 105 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 107 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("formals"); }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 108 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 109 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 113 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-3]), nullptr, nullptr, (yyvsp[-1]));}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 114 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-4]), (yyvsp[-3]), nullptr, (yyvsp[-1]));}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 115 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-5]), nullptr, (yyvsp[-3]), (yyvsp[-1]));}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 116 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 118 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("fields");}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 119 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 120 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 122 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("implements", 1, (yyvsp[0])); }
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 123 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 125 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("extends", 1, (yyvsp[0])); }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 126 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("extends", 1, (yyvsp[0])); }
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 128 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("call", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 134 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("interface", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 136 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototypes");}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 137 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 139 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototype", 3, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2])); }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 140 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototype", 3, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2])); }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 143 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmtblock", 2, (yyvsp[-2]), (yyvsp[-1]));}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 145 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("vardecls");}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 146 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 148 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmts");}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 149 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 153 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("nullstmt"); }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 168 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("break", 1, (yyvsp[0])); }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 170 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 1, (yyvsp[0])); }
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 171 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 173 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("print", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 176 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("if", 1, (yyvsp[-1])); }
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 178 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-2])); (yyval)->add_child((yyvsp[0])); (yyval) = (yyvsp[-3]); }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 180 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0])); (yyval)->add_child(nullptr); (yyval) = (yyvsp[-1]); }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 181 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-2])); (yyval)->add_child((yyvsp[0])); (yyval) = (yyvsp[-3]); }
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 182 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0])); (yyval)->add_child(nullptr); (yyval) = (yyvsp[-1]); }
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 186 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("while", 1, (yyvsp[-1])); }
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 188 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 190 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 194 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1])); }
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 195 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, nullptr, (yyvsp[-3]), (yyvsp[-1])); }
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 196 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, (yyvsp[-4]), (yyvsp[-2]), nullptr); }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 197 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, nullptr, (yyvsp[-2]), nullptr); }
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 199 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 201 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 206 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("aref", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 207 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("fieldaccess", 2, (yyvsp[-2]), (yyvsp[0]));}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 210 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 213 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 216 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 219 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 220 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 223 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 224 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 225 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 226 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 229 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 230 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 233 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 234 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 235 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 238 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("uop", 2, (yyvsp[-1]), (yyval));}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 239 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("uop", 2, (yyvsp[-1]), (yyval));}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 244 "decaf.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 248 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("new", 1, (yyvsp[-1]));}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 249 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("newarray", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 250 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("newarray", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 253 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("usertype", 1, (yyvsp[0]));}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 255 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("actuals");}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 256 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 257 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]);}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 259 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("actuals", 1, (yyvsp[0]));}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 260 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]);}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 269 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 270 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 271 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 272 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 273 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 274 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 275 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 276 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 277 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 278 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 279 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 280 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 281 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 282 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 283 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 284 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 285 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 286 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 287 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 288 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 289 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 290 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 291 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 292 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 293 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 294 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 295 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 296 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 297 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 298 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 299 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 300 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 301 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 302 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 303 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 307 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 308 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 309 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 310 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 311 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 312 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 313 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 314 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 315 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2323 "y.tab.c" /* yacc.c:1646  */
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
#line 327 "decaf.y" /* yacc.c:1906  */

