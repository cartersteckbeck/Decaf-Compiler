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
#define YYLAST   472

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
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
     118,   119,   120,   122,   123,   125,   126,   129,   131,   132,
     134,   135,   138,   140,   141,   143,   144,   146,   146,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   158,   159,
     160,   163,   165,   166,   168,   171,   173,   175,   176,   177,
     181,   183,   185,   189,   190,   191,   192,   194,   196,   200,
     201,   203,   204,   206,   207,   209,   210,   211,   213,   214,
     215,   216,   217,   219,   220,   221,   223,   224,   225,   226,
     228,   229,   230,   232,   233,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   245,   246,   247,   249,   252,   254,
     255,   256,   258,   259,   261,   262,   263,   264,   265,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   306,   307,   308,   309,   310,   311,
     312,   313,   314
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

#define YYPACT_NINF -129

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-129)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -129,    19,  -129,   111,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,   -28,   -13,     8,     8,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,   -13,   -10,   -13,
    -129,  -129,    32,  -129,  -129,  -129,    42,    65,     5,    41,
    -129,  -129,  -129,  -129,    -1,   -10,   -13,  -129,  -129,   380,
     389,  -129,   -13,  -129,  -129,    68,  -129,    39,    86,    53,
      23,  -129,   -13,    53,   271,   123,   -13,  -129,  -129,  -129,
    -129,  -129,   -13,  -129,   -13,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,   287,    59,    61,    23,   366,  -129,  -129,
    -129,  -129,   164,  -129,   399,   406,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,   344,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,    24,    75,    96,   215,  -129,  -129,   215,  -129,  -129,
     215,  -129,  -129,    99,   128,   112,  -129,   140,   168,    74,
    -129,    82,  -129,    98,  -129,  -129,  -129,  -129,  -129,   130,
     134,   137,  -129,  -129,  -129,  -129,  -129,   142,   153,   161,
     344,   174,   175,   433,   433,   179,   180,   182,  -129,  -129,
    -129,   206,  -129,  -129,  -129,  -129,  -129,  -129,  -129,   344,
    -129,   344,  -129,  -129,   344,   344,  -129,  -129,  -129,  -129,
    -129,   344,   344,   344,   344,   344,   344,  -129,  -129,  -129,
     344,   344,   344,  -129,   344,   -13,  -129,   344,   184,   -13,
     344,   187,   344,   344,  -129,   248,   344,    82,  -129,    82,
    -129,  -129,  -129,  -129,   215,   112,  -129,  -129,  -129,   124,
     124,    74,    74,   124,   124,  -129,  -129,  -129,   122,   -12,
    -129,   128,  -129,   188,   191,  -129,   200,  -129,   149,   344,
     203,    10,  -129,  -129,  -129,   344,  -129,  -129,  -129,   427,
    -129,  -129,   344,   204,   344,  -129,  -129,   211,   220,  -129,
    -129,   278,   205,  -129,  -129,  -129,   221,   311,  -129,  -129,
     222,  -129
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     3,     1,   136,   132,   133,   134,   131,
     158,   163,   129,     5,     0,     0,    11,    12,    13,     6,
       8,     7,    14,    15,    16,    17,    18,     0,     0,     0,
       9,   130,    10,   135,    19,    20,     0,     0,     0,     0,
      23,    23,   159,   160,     0,     0,     0,    30,    38,     0,
       0,    30,     0,    36,    35,     0,    33,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,    30,    26,    32,
      31,    37,     0,    39,     0,    43,    21,    25,    10,    22,
      27,    30,    34,     0,     0,     0,    45,     0,    28,    23,
      23,    44,     0,    29,     0,     0,   152,   138,   161,   162,
     154,   157,   137,   146,   147,   156,   145,   153,   149,   148,
     150,   151,    49,     0,    42,   165,   172,    57,    46,    47,
      48,     0,     0,     0,     0,    51,    58,     0,    52,    59,
       0,    53,    60,     0,    79,    81,    83,    85,    88,    93,
      96,   100,   103,   104,   108,   105,   114,    61,   106,     0,
       0,     0,   124,   125,   126,   127,   128,     0,     0,     0,
      62,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    67,    69,    71,    72,    77,    78,    50,   144,     0,
     143,     0,   141,   142,     0,     0,   139,   140,   164,   169,
     170,     0,     0,     0,     0,     0,     0,   166,   167,   168,
       0,     0,     0,   119,     0,     0,   171,     0,     0,     0,
       0,     0,     0,     0,    63,     0,     0,   102,   104,   101,
      40,    41,   107,   155,     0,    82,    84,    86,    87,    91,
      92,    94,    95,    89,    90,    97,    98,    99,     0,     0,
     116,    80,   109,     0,     0,   110,     0,   122,     0,     0,
       0,     0,    66,    68,   117,     0,   120,   115,   111,     0,
      65,    64,     0,     0,     0,    70,   121,     0,     0,   118,
     123,     0,     0,   112,   113,    76,     0,     0,    74,    75,
       0,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,  -129,  -129,  -129,     1,    36,    -3,  -129,  -129,  -129,
     241,   -20,  -129,   -44,   194,  -129,  -129,  -129,  -129,   -39,
    -129,  -129,  -129,  -121,  -119,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -111,  -110,    76,
      83,    20,   -56,    15,   -52,    47,  -129,  -128,  -129,  -129,
    -129,  -129,  -129,   -11,   -14,  -129,  -129,  -129,  -129,   249,
     207,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,   223,  -129,  -129,  -129,  -129,  -122,
    -129,  -129,  -129,  -129,  -129,  -129,  -129
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    69,    14,    62,    16,    17,    18,
      70,    49,    20,    57,    55,    44,    21,    58,    73,   117,
      86,    92,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   268,
     238,   248,   145,    22,   146,    23,    24,    25,    26,    34,
      27,   147,   148,   191,   192,   184,   185,   181,   179,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   224,
     159,   160,    28,    45,    46,   161,   162,    29,   193,   163,
     200,   201,   202,   195,   196,   207,   164
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      15,    32,   167,   171,    13,   172,   173,    64,   174,   175,
      30,   176,    43,    36,    38,    39,   194,    37,   178,     4,
      76,    50,    31,    83,    79,    31,    12,     6,     7,     8,
       9,    54,    56,   257,    53,   218,   218,    87,    56,    33,
     178,    51,     5,     6,     7,     8,     9,    47,    78,   214,
     265,   218,    82,   218,    15,    72,   218,   218,    84,    12,
      85,    15,   168,   218,   218,   218,   218,   218,   218,    94,
      95,    40,   218,   218,   218,    12,   218,    42,    43,   218,
      15,    41,    68,    48,    15,    61,    61,    91,   218,     5,
       6,     7,     8,     9,   239,    75,    77,   241,    89,   244,
      90,   246,   247,   252,   250,   253,   251,   194,   194,    66,
      67,   194,   194,   169,     5,     6,     7,     8,     9,    10,
      11,   203,    12,   197,   198,   199,   204,   256,   205,    71,
      61,    61,    96,    97,   170,   229,   230,   177,   263,   233,
     234,   180,   103,   104,   266,   106,   107,    12,   235,   236,
     237,   270,   206,   272,   108,   109,   110,    31,   178,   111,
     276,   113,   254,   255,    66,    81,   280,   182,   183,   208,
     115,   188,   115,   209,    96,    97,   210,   116,    98,    99,
     100,   211,   101,   102,   103,   104,   105,   106,   107,   261,
     262,   240,   212,   186,   187,   243,   108,   109,   110,    31,
     213,   111,   112,   113,   227,   228,    75,   114,   231,   232,
     217,   219,   115,   215,   216,   188,   115,   220,   221,   116,
     189,   190,   222,   223,   242,    96,    97,   245,   258,    98,
      99,   100,   259,   101,   102,   103,   104,   105,   106,   107,
     260,   264,   271,   277,    19,   269,    65,   108,   109,   110,
      31,   273,   111,   112,   113,   225,   267,    75,    96,    97,
     274,   278,   281,   115,   226,    74,    35,    52,   103,   104,
     116,   106,   107,     0,     5,     6,     7,     8,     9,     0,
     108,   109,   110,    31,     0,   111,   249,   113,    96,    97,
       5,     6,     7,     8,     9,     0,   115,     0,   103,   104,
       0,   106,   107,   116,     0,     0,     0,    12,     0,     0,
     108,   109,   110,    31,    80,   111,     0,   113,   275,     0,
       0,    96,    97,    12,     0,     0,   115,     0,     0,     0,
      88,   103,   104,   116,   106,   107,     0,     0,     0,     0,
       0,     0,     0,   108,   109,   110,    31,     0,   111,     0,
     113,   279,     0,     0,    96,    97,     0,     0,     0,   115,
       0,     0,     0,     0,   103,   104,   116,   106,   107,     5,
       6,     7,     8,     9,     0,     0,   108,   109,   110,    31,
       0,   111,     0,   113,     6,     7,     8,     9,     0,     0,
       0,     0,   115,     6,     7,     8,     9,     0,     0,   116,
       0,     0,    12,     6,     7,     8,     9,     0,     0,    93,
       6,     7,     8,     9,     0,     0,    12,     0,     0,     0,
      59,    60,     0,     0,     0,    12,     0,     0,     0,    63,
      60,     6,     7,     8,     9,    12,     0,     0,     0,   165,
      60,     0,    12,    96,    97,     0,   166,    60,     0,     0,
       0,     0,     0,   103,   104,     0,   106,   107,     0,     0,
       0,     0,    31,    12,     0,   108,   109,   110,    31,     0,
     111,     0,   113
};

static const yytype_int16 yycheck[] =
{
       3,    15,   113,   124,     3,   124,   127,    51,   127,   130,
      38,   130,    13,    27,    28,    29,   138,    28,    30,     0,
      59,    41,    35,    67,    63,    35,    36,     4,     5,     6,
       7,    45,    46,    45,    45,   163,   164,    81,    52,    31,
      30,    42,     3,     4,     5,     6,     7,    42,    62,   160,
      40,   179,    66,   181,    57,    58,   184,   185,    72,    36,
      74,    64,    38,   191,   192,   193,   194,   195,   196,    89,
      90,    39,   200,   201,   202,    36,   204,    12,    13,   207,
      83,    39,    43,    42,    87,    49,    50,    86,   216,     3,
       4,     5,     6,     7,   204,    42,    60,   207,    39,   210,
      39,   212,   213,   224,   215,   224,   216,   229,   230,    41,
      42,   233,   234,    38,     3,     4,     5,     6,     7,     8,
       9,    39,    36,    49,    50,    51,    44,   238,    46,    43,
      94,    95,    10,    11,    38,   191,   192,    38,   249,   195,
     196,    29,    20,    21,   255,    23,    24,    36,   200,   201,
     202,   262,    54,   264,    32,    33,    34,    35,    30,    37,
     271,    39,    40,    41,    41,    42,   277,    27,    28,    39,
      48,    47,    48,    39,    10,    11,    39,    55,    14,    15,
      16,    39,    18,    19,    20,    21,    22,    23,    24,    40,
      41,   205,    39,    25,    26,   209,    32,    33,    34,    35,
      39,    37,    38,    39,   184,   185,    42,    43,   193,   194,
     163,   164,    48,    39,    39,    47,    48,    38,    38,    55,
      52,    53,    40,    17,    40,    10,    11,    40,    40,    14,
      15,    16,    41,    18,    19,    20,    21,    22,    23,    24,
      40,    38,    38,    38,     3,   259,    52,    32,    33,    34,
      35,    40,    37,    38,    39,   179,   259,    42,    10,    11,
      40,    40,    40,    48,   181,    58,    17,    44,    20,    21,
      55,    23,    24,    -1,     3,     4,     5,     6,     7,    -1,
      32,    33,    34,    35,    -1,    37,    38,    39,    10,    11,
       3,     4,     5,     6,     7,    -1,    48,    -1,    20,    21,
      -1,    23,    24,    55,    -1,    -1,    -1,    36,    -1,    -1,
      32,    33,    34,    35,    43,    37,    -1,    39,    40,    -1,
      -1,    10,    11,    36,    -1,    -1,    48,    -1,    -1,    -1,
      43,    20,    21,    55,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    37,    -1,
      39,    40,    -1,    -1,    10,    11,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    20,    21,    55,    23,    24,     3,
       4,     5,     6,     7,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    -1,    39,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    48,     4,     5,     6,     7,    -1,    -1,    55,
      -1,    -1,    36,     4,     5,     6,     7,    -1,    -1,    43,
       4,     5,     6,     7,    -1,    -1,    36,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      41,     4,     5,     6,     7,    36,    -1,    -1,    -1,    40,
      41,    -1,    36,    10,    11,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    24,    -1,    -1,
      -1,    -1,    35,    36,    -1,    32,    33,    34,    35,    -1,
      37,    -1,    39
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
      39,    39,    39,    39,    93,    39,    39,   101,   103,   101,
      38,    38,    40,    17,   135,    95,    96,    97,    97,    98,
      98,    99,    99,    98,    98,   100,   100,   100,   106,    94,
     110,    94,    40,   110,    93,    40,    93,    93,   107,    38,
      93,    94,    79,    80,    40,    41,    93,    45,    40,    41,
      40,    40,    41,    93,    38,    40,    93,    62,   105,   110,
      93,    38,    93,    40,    40,    40,    93,    38,    40,    40,
      93,    40
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
     106,   106,   107,   107,   108,   108,   108,   108,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
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
#line 72 "decaf.y" /* yacc.c:1646  */
    {top = (yyval) = (yyvsp[0]); }
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "decaf.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); }
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 78 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("program"); }
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 79 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 80 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 81 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 82 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 88 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("variable", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 92 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("usertype", 1, (yyvsp[0])); }
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 94 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 95 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 99 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("arraytype", 1, (yyvsp[-1])); }
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 100 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("arraytype", 1, (yyvsp[-1])); }
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 104 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 105 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 107 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("formals"); }
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 108 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 109 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 113 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-3]), nullptr, nullptr, (yyvsp[-1]));}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 114 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-4]), (yyvsp[-3]), nullptr, (yyvsp[-1]));}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 115 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-5]), nullptr, (yyvsp[-3]), (yyvsp[-1]));}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 116 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 118 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("fields");}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 119 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 120 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 122 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("implements", 1, (yyvsp[0])); }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 123 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 125 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("extends", 1, (yyvsp[0])); }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 126 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("extends", 1, (yyvsp[0])); }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 129 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("interface", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 131 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototypes");}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 132 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 134 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototype", 3, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2])); }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 135 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototype", 3, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2])); }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 138 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmtblock", 2, (yyvsp[-2]), (yyvsp[-1]));}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 140 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("vardecls");}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 141 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 143 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmts");}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 144 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 148 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("nullstmt"); }
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 163 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("break", 1, (yyvsp[0])); }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 165 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 1, (yyvsp[0])); }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 166 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 168 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("print", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 171 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("if", 1, (yyvsp[-1])); }
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 173 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-2])); (yyval)->add_child((yyvsp[0])); (yyval) = (yyvsp[-3]); }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 175 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0])); (yyval)->add_child(nullptr); (yyval) = (yyvsp[-1]); }
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 176 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-2])); (yyval)->add_child((yyvsp[0])); (yyval) = (yyvsp[-3]); }
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 177 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0])); (yyval)->add_child(nullptr); (yyval) = (yyvsp[-1]); }
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 181 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("while", 1, (yyvsp[-1])); }
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 183 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 185 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 189 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1])); }
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 190 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, nullptr, (yyvsp[-3]), (yyvsp[-1])); }
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 191 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, (yyvsp[-4]), (yyvsp[-2]), nullptr); }
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 192 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, nullptr, (yyvsp[-2]), nullptr); }
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 194 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 196 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 201 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 204 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 207 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 210 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 211 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 214 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 215 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 216 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 217 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 220 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 221 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 224 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 225 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 226 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 229 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("uop", 2, (yyvsp[-1]), (yyval));}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 230 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("uop", 2, (yyvsp[-1]), (yyval));}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 237 "decaf.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 241 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("new", 1, (yyvsp[-1]));}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 242 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("newarray", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 243 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("newarray", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 246 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("aref", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 247 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("fieldaccess", 2, (yyvsp[-2]), (yyvsp[0]));}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 249 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("call", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 252 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("usertype", 1, (yyvsp[0]));}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 254 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("actuals");}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 255 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 256 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]);}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 258 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("actuals", 1, (yyvsp[0]));}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 259 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]);}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 268 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 269 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 270 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 271 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 272 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 273 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 274 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 275 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 276 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 277 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 278 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 279 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 280 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 281 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 282 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 283 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 284 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 285 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 286 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 287 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 288 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 289 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 290 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 291 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 292 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 293 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 294 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 295 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 296 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 297 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 298 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 299 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 300 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 301 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 302 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 306 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 307 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 308 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 309 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 310 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 311 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 312 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 313 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 314 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2313 "y.tab.c" /* yacc.c:1646  */
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
#line 326 "decaf.y" /* yacc.c:1906  */

