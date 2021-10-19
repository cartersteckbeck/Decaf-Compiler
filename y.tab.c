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
#define YYLAST   386

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  269

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
      87,    90,    91,    94,    95,    96,    97,    99,   100,   101,
     103,   104,   106,   107,   109,   112,   114,   115,   117,   118,
     120,   122,   122,   122,   124,   126,   127,   128,   129,   131,
     132,   135,   136,   138,   139,   140,   142,   143,   145,   146,
     148,   150,   152,   153,   154,   157,   157,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   170,   170,   172,
     174,   178,   181,   184,   188,   190,   193,   196,   197,   198,
     199,   201,   206,   207,   209,   210,   214,   215,   217,   218,
     219,   221,   222,   223,   224,   225,   227,   228,   229,   231,
     232,   233,   234,   236,   237,   238,   240,   241,   242,   244,
     245,   247,   248,   254,   255,   256,   258,   259,   261,   262,
     263,   264,   265,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   278,   279,   280,   281,   282,   283,   287,   288,
     289,   290,   291,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   306,   307,   308,   309,   310,   311,   312,   313,
     314
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
  "varDecl", "funcDecl", "classDecl", "fields", "imp", "ext",
  "functionCall", "interfaceDecl", "prototypes", "prototypeDecl",
  "variable", "type", "usertype", "primtype", "arraytype", "formals",
  "varDeclStar", "stmtStar", "stmtblock", "print_stmt", "return_stmt",
  "stmt", "matched_stmt", "unmatched_stmt", "common_if", "matched_if",
  "unmatched_if", "common_while", "matched_while", "unmatched_while",
  "common_for", "matched_for", "expr", "expr1", "expr2", "expr3", "expr4",
  "expr5", "expr6", "expr7", "expr8", "expr9", "actuals", "print_actuals",
  "constant", "typeidentifier", "identifier", "string", "int", "double",
  "bool", "array", "void", "break", "le", "ge", "eq", "neq", "and", "or",
  "intlit", "dbllit", "boollit", "stringlit", "null", "else", "print",
  "return", "class", "extends", "implements", "for", "while", "interface",
  "scplus", "scminus", "sctimes", "scdiv", "scmod", "sclt", "scgt", "sceq",
  "scneq", YY_NULLPTR
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

#define YYPACT_NINF -151

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-151)))

#define YYTABLE_NINF -55

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -151,    34,  -151,    19,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,    46,     3,
      23,    23,  -151,  -151,  -151,  -151,  -151,  -151,     3,    59,
       3,  -151,  -151,    50,  -151,  -151,  -151,    60,   106,    67,
      82,  -151,  -151,  -151,  -151,     0,    59,     3,  -151,  -151,
      45,   105,  -151,     3,  -151,  -151,    49,  -151,   125,   285,
      30,   148,  -151,     3,    41,   301,    94,  -151,     3,  -151,
    -151,  -151,     3,     3,  -151,  -151,     3,     3,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,   310,  -151,    95,
     127,   129,   133,   148,   319,  -151,  -151,  -151,  -151,  -151,
    -151,   161,  -151,   324,   329,   334,   343,  -151,  -151,  -151,
     139,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,   264,
    -151,  -151,  -151,   113,  -151,   151,   169,  -151,  -151,  -151,
     196,  -151,  -151,   196,  -151,  -151,   196,  -151,   175,   -12,
     188,   112,    61,   134,   192,  -151,   118,  -151,  -151,   186,
     189,  -151,  -151,  -151,  -151,  -151,   193,   264,   197,   210,
     264,   264,   214,   214,   216,   220,   264,  -151,   219,  -151,
    -151,  -151,   243,  -151,  -151,  -151,  -151,   196,   196,  -151,
    -151,  -151,   264,   264,  -151,   264,  -151,  -151,   264,   264,
    -151,  -151,  -151,  -151,   264,   264,   264,   264,  -151,   264,
     264,  -151,  -151,  -151,   264,   264,   264,   264,   187,  -151,
    -151,   264,   228,  -151,   153,   264,  -151,  -151,   231,  -151,
    -151,   196,   243,   188,   242,   112,    61,    61,   134,   134,
     134,   134,   192,   192,  -151,  -151,  -151,    13,  -151,   213,
    -151,    40,   264,   235,   236,  -151,  -151,  -151,   196,  -151,
    -151,   264,  -151,  -151,   264,   237,   264,  -151,  -151,  -151,
     230,   239,  -151,   253,   247,  -151,  -151,   254,  -151
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     3,     1,   130,   126,   127,   128,   125,
     146,   151,   123,     5,     6,     9,     8,     7,     0,     0,
      31,    32,    33,    34,    35,    36,    37,    38,     0,     0,
       0,    10,   124,    30,   129,    39,    40,     0,     0,     0,
       0,    43,    43,   147,   148,     0,     0,     0,    17,    26,
       0,     0,    17,     0,    23,    22,     0,    20,     0,     0,
       0,     0,    44,     0,     0,     0,     0,    17,     0,    13,
      19,    18,     0,     0,    25,    27,     0,     0,    28,    46,
      11,    45,    30,    29,    12,    14,    17,     0,    21,    30,
       0,     0,     0,    48,     0,    15,    43,    43,    43,    43,
      47,     0,    16,     0,     0,     0,     0,   142,   149,   150,
       0,   145,   131,   144,   139,   138,   140,   141,    59,     0,
      50,   153,   160,   111,    66,     0,     0,    49,    55,    56,
       0,    62,    67,     0,    63,    68,     0,    64,     0,    82,
      84,    86,    88,    91,    96,    99,   103,   106,   110,   109,
       0,   118,   119,   120,   121,   122,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,    65,
      60,    61,    71,    73,    75,    76,    81,     0,     0,    58,
     137,   159,     0,     0,   136,     0,   134,   135,     0,     0,
     132,   133,   157,   158,     0,     0,     0,     0,   152,     0,
       0,   154,   155,   156,     0,     0,     0,     0,     0,   113,
      57,     0,   111,    53,     0,     0,   105,   104,     0,   112,
     143,     0,     0,    85,    83,    87,    89,    90,    94,    95,
      92,    93,    97,    98,   100,   101,   102,     0,   108,     0,
     116,     0,     0,     0,     0,    69,    70,    72,     0,   107,
      24,     0,   114,    51,     0,     0,     0,    74,   115,   117,
       0,     0,    80,     0,     0,    78,    79,     0,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,  -151,  -151,     8,   280,  -151,   -46,   256,  -151,
    -101,  -151,  -151,   241,   -31,     4,  -151,  -151,  -151,   -32,
    -151,  -151,   -56,  -151,  -151,  -151,   -99,  -121,  -133,  -151,
    -151,  -131,  -151,  -151,  -151,  -151,  -118,  -150,   128,   126,
      16,   -38,    39,  -145,  -151,   110,  -151,  -151,  -151,     7,
      97,  -151,  -151,  -151,  -151,   299,    11,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,   120,
    -151,  -151,  -151,  -151,   287,  -151,  -151,  -151,  -151,  -126,
    -151,  -151,  -151,  -151,  -151,  -151,  -151
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    70,    71,    15,    58,    56,    45,
     167,    16,    59,    17,    18,    63,    20,    21,    22,    50,
      93,   101,   124,   125,   126,   127,   174,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   239,   241,   148,    23,
     149,    24,    25,    26,    27,    35,    73,   150,   194,   195,
     188,   189,   185,   182,   151,   152,   153,   154,   155,   221,
     156,   157,    29,    46,    47,   158,   159,    30,   199,   160,
     204,   205,   206,   196,   197,   183,   161
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     123,   168,   128,   177,    80,   178,    65,    19,    84,   173,
      51,    13,   175,    44,    28,   216,   217,   200,   180,    62,
      62,    87,     5,     6,     7,     8,     9,    10,    11,   123,
      81,   172,   123,   224,     4,   123,    38,   176,    32,   213,
      94,    52,   181,   180,   177,   177,   178,   178,   218,     6,
       7,     8,     9,    54,    34,    12,   212,   237,   249,   234,
     235,   236,    72,    76,   103,   104,   105,   106,    78,    72,
      77,    79,    62,    62,    62,    62,   123,   123,   222,    83,
     253,    12,    79,   254,    31,    60,   190,   191,    61,    41,
      67,    72,    68,   240,    32,    12,   243,   244,    72,    42,
     247,   100,   200,   200,   200,   200,    80,    84,    48,     6,
       7,     8,     9,   192,   193,   177,    33,   178,    43,    44,
     123,   252,   246,    49,   255,    37,    39,    40,     5,     6,
       7,     8,     9,   258,    96,    86,   259,    68,   261,   186,
     187,    12,   263,    55,    57,    64,   267,   123,    61,   246,
      57,   169,     6,     7,     8,     9,   228,   229,   230,   231,
      82,    12,   207,   107,   208,    88,    97,    69,    98,    89,
      90,   107,    99,    91,    92,   108,   109,   110,   166,   111,
     112,   198,   121,   113,    12,   114,   115,   116,    32,   170,
     117,   242,   119,   114,   115,   116,    32,   107,   117,   118,
     119,   121,    79,   120,   226,   227,   107,   171,   122,   121,
     108,   109,   110,   179,   111,   112,   122,   184,   113,   114,
     115,   116,    32,   107,   117,   209,   119,   210,   114,   115,
     116,    32,   211,   117,   118,   119,   214,    79,   232,   233,
     107,   201,   202,   203,   121,   114,   115,   116,    32,   215,
     117,   122,   119,   250,    78,    79,   251,   107,    83,   219,
     220,   121,   114,   115,   116,    32,   -54,   117,   122,   119,
     262,   245,   180,   256,   107,   260,   257,   264,   121,   114,
     115,   116,    32,    14,   117,   122,   119,   266,     5,     6,
       7,     8,     9,   265,   268,   121,   114,   115,   116,    32,
      75,   117,   122,   119,     5,     6,     7,     8,     9,    66,
     223,   225,   121,     5,     6,     7,     8,     9,   238,   122,
      36,    12,     5,     6,     7,     8,     9,    74,     6,     7,
       8,     9,    53,     6,     7,     8,     9,    12,     6,     7,
       8,     9,   248,    85,     0,     0,    12,     6,     7,     8,
       9,     0,    95,     0,     0,    12,     0,     0,     0,     0,
      12,   102,     0,     0,   162,    12,     0,    61,     0,   163,
      12,     0,    61,     0,   164,     0,     0,    61,     0,    12,
       0,     0,     0,   165,     0,     0,    61
};

static const yytype_int16 yycheck[] =
{
     101,   119,   101,   136,    60,   136,    52,     3,    64,   130,
      42,     3,   133,    13,     3,   160,   161,   143,    30,    50,
      51,    67,     3,     4,     5,     6,     7,     8,     9,   130,
      61,   130,   133,   183,     0,   136,    29,   136,    35,   157,
      86,    41,    54,    30,   177,   178,   177,   178,   166,     4,
       5,     6,     7,    46,    31,    36,   157,   207,    45,   204,
     205,   206,    58,    59,    96,    97,    98,    99,    38,    65,
      59,    41,   103,   104,   105,   106,   177,   178,   177,    38,
      40,    36,    41,    43,    38,    40,    25,    26,    43,    39,
      41,    87,    43,   211,    35,    36,   214,   215,    94,    39,
     221,    93,   228,   229,   230,   231,   162,   163,    41,     4,
       5,     6,     7,    52,    53,   248,    19,   248,    12,    13,
     221,   239,   221,    41,   242,    28,    29,    30,     3,     4,
       5,     6,     7,   251,    39,    41,   254,    43,   256,    27,
      28,    36,   260,    46,    47,    40,   264,   248,    43,   248,
      53,    38,     4,     5,     6,     7,   194,   195,   196,   197,
      63,    36,    44,    10,    46,    68,    39,    42,    39,    72,
      73,    10,    39,    76,    77,    14,    15,    16,    39,    18,
      19,    47,    48,    22,    36,    32,    33,    34,    35,    38,
      37,    38,    39,    32,    33,    34,    35,    10,    37,    38,
      39,    48,    41,    42,   188,   189,    10,    38,    55,    48,
      14,    15,    16,    38,    18,    19,    55,    29,    22,    32,
      33,    34,    35,    10,    37,    39,    39,    38,    32,    33,
      34,    35,    39,    37,    38,    39,    39,    41,   199,   200,
      10,    49,    50,    51,    48,    32,    33,    34,    35,    39,
      37,    55,    39,    40,    38,    41,    43,    10,    38,    40,
      17,    48,    32,    33,    34,    35,    38,    37,    55,    39,
      40,    40,    30,    38,    10,    38,    40,    38,    48,    32,
      33,    34,    35,     3,    37,    55,    39,    40,     3,     4,
       5,     6,     7,    40,    40,    48,    32,    33,    34,    35,
      59,    37,    55,    39,     3,     4,     5,     6,     7,    53,
     182,   185,    48,     3,     4,     5,     6,     7,   208,    55,
      21,    36,     3,     4,     5,     6,     7,    42,     4,     5,
       6,     7,    45,     4,     5,     6,     7,    36,     4,     5,
       6,     7,   222,    42,    -1,    -1,    36,     4,     5,     6,
       7,    -1,    42,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      36,    42,    -1,    -1,    40,    36,    -1,    43,    -1,    40,
      36,    -1,    43,    -1,    40,    -1,    -1,    43,    -1,    36,
      -1,    -1,    -1,    40,    -1,    -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    59,    60,     0,     3,     4,     5,     6,     7,
       8,     9,    36,    61,    62,    63,    68,    70,    71,    72,
      73,    74,    75,   106,   108,   109,   110,   111,   113,   129,
     134,    38,    35,   107,    31,   112,   112,   107,   106,   107,
     107,    39,    39,    12,    13,    66,   130,   131,    41,    41,
      76,    76,    41,   131,   106,   107,    65,   107,    64,    69,
      40,    43,    71,    72,    40,    64,    65,    41,    43,    42,
      61,    62,    72,   113,    42,    70,    72,   113,    38,    41,
      79,    71,   107,    38,    79,    42,    41,    64,   107,   107,
     107,   107,   107,    77,    64,    42,    39,    39,    39,    39,
      61,    78,    42,    76,    76,    76,    76,    10,    14,    15,
      16,    18,    19,    22,    32,    33,    34,    37,    38,    39,
      42,    48,    55,    67,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   105,   107,
     114,   121,   122,   123,   124,   125,   127,   128,   132,   133,
     136,   143,    40,    40,    40,    40,    39,    67,    93,    38,
      38,    38,    83,    84,    83,    84,    83,    85,    88,    38,
      30,    54,   120,   142,    29,   119,    27,    28,   117,   118,
      25,    26,    52,    53,   115,   116,   140,   141,    47,   135,
     136,    49,    50,    51,   137,   138,   139,    44,    46,    39,
      38,    39,    67,    93,    39,    39,   100,   100,    93,    40,
      17,   126,    83,    95,    94,    96,    97,    97,    98,    98,
      98,    98,    99,    99,   100,   100,   100,    94,   102,   103,
      93,   104,    38,    93,    93,    40,    83,    84,   126,    45,
      40,    43,    93,    40,    43,    93,    38,    40,    93,    93,
      38,    93,    40,    93,    38,    40,    40,    93,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    60,    60,    60,    60,    60,    60,
      61,    62,    62,    63,    63,    63,    63,    64,    64,    64,
      65,    65,    66,    66,    67,    68,    69,    69,    70,    70,
      71,    72,    72,    72,    73,    74,    74,    74,    74,    75,
      75,    62,    62,    76,    76,    76,    77,    77,    78,    78,
      79,    80,    81,    81,    81,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    85,
      86,    87,    87,    87,    88,    89,    90,    91,    91,    91,
      91,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      96,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,    99,    99,   100,   100,   100,   101,   101,   101,   102,
     102,   102,   102,   103,   103,   103,   104,   104,   105,   105,
     105,   105,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     2,     2,     2,
       2,     6,     6,     5,     6,     7,     8,     0,     2,     2,
       1,     3,     2,     2,     4,     5,     0,     2,     6,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     6,     6,     0,     2,     3,     0,     2,     0,     2,
       4,     4,     1,     2,     2,     1,     1,     2,     2,     1,
       2,     2,     1,     1,     1,     2,     1,     1,     1,     4,
       4,     2,     4,     2,     4,     2,     2,     8,     7,     7,
       6,     2,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     2,     1,     4,     3,     1,
       1,     1,     3,     0,     2,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 71 "decaf.y" /* yacc.c:1646  */
    {top = (yyval) = (yyvsp[0]); }
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 77 "decaf.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); }
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 79 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("program"); }
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 82 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 83 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 84 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 90 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 91 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-3]), nullptr, nullptr, (yyvsp[-1]));}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 95 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-4]), (yyvsp[-3]), nullptr, (yyvsp[-1]));}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 96 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-5]), nullptr, (yyvsp[-3]), (yyvsp[-1]));}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 97 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("class", 4, (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 99 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("fields");}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 100 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 103 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("implements", 1, (yyvsp[0])); }
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 104 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 106 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("extends", 1, (yyvsp[0])); }
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 107 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("extends", 1, (yyvsp[0])); }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 109 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("call", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 112 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("interface", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 114 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototypes");}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 115 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 117 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototype", 3, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2])); }
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 118 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("prototype", 3, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2])); }
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 120 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("variable", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 124 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("usertype", 1, (yyvsp[0])); }
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 126 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 127 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 128 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 129 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("primtype", 1, (yyvsp[0])); }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 131 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("arraytype", 1, (yyvsp[-1])); }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 132 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("arraytype", 1, (yyvsp[-1])); }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 135 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 136 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("functiondecl", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 138 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("formals"); }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 139 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 140 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 142 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("vardecls");}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 143 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 145 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmts");}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 146 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 148 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("stmtblock", 2, (yyvsp[-2]), (yyvsp[-1]));}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 150 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("print", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 152 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 1, (yyvsp[0])); }
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 153 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 154 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("return", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 159 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("break", 1, (yyvsp[-1])); }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 161 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("nullstmt"); }
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 172 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("if", 1, (yyvsp[-1])); }
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 174 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-2]));
                                                              (yyval)->add_child((yyvsp[0]));
                                                              (yyval) = (yyvsp[-3]);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 178 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0]));
                                          (yyval)->add_child(nullptr);
                                          (yyval) = (yyvsp[-1]);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 181 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[-2]));
                                                                  (yyval)->add_child((yyvsp[0]));
                                                                  (yyval) = (yyvsp[-3]);}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 184 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0]));
                                            (yyval)->add_child(nullptr);
                                            (yyval) = (yyvsp[-1]);}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 188 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("while", 1, (yyvsp[-1]));}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 190 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[0]));
                                              (yyval) = (yyvsp[-1]);}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 193 "decaf.y" /* yacc.c:1646  */
    {(yyval)->add_child((yyvsp[0]));
                                                  (yyval) = (yyvsp[-1]);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 196 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 197 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, nullptr, (yyvsp[-3]), (yyvsp[-1]));}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 198 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, (yyvsp[-4]), (yyvsp[-2]), nullptr);}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 199 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("for", 3, nullptr, (yyvsp[-2]), nullptr);}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 201 "decaf.y" /* yacc.c:1646  */
    {(yyval) ->add_child((yyvsp[0]));
                                          (yyval) = (yyvsp[-1]);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 207 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 210 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 215 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 218 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 219 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 222 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 223 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 224 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 225 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 228 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 229 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 232 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 233 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 234 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("binop", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 237 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("uop", 2, (yyvsp[-1]), (yyvsp[0]));}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 238 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("uop", 2, (yyvsp[-1]), (yyvsp[0]));}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 241 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("aref", 2, (yyvsp[-3]), (yyvsp[-1]));}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 242 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("fieldaccess", 2, (yyvsp[-2]), (yyvsp[0]));}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 248 "decaf.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 254 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("actuals");}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 255 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-1])->add_child((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 256 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[0])); (yyval) = (yyvsp[-2]);}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 258 "decaf.y" /* yacc.c:1646  */
    {(yyval) = new parse_tree("actuals", 1, (yyvsp[0]));}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 259 "decaf.y" /* yacc.c:1646  */
    {(yyvsp[-2])->add_child((yyvsp[-1])); (yyval) = (yyvsp[-2]);}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 268 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 269 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 270 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 271 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 272 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 273 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 274 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 275 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 276 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 278 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 279 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 280 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 281 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 282 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 283 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 287 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 288 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 289 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 290 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 291 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 294 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 295 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 296 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 297 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 298 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 299 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 300 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 301 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 302 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 306 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 307 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 308 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 309 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 310 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 311 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 312 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 313 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 314 "decaf.y" /* yacc.c:1646  */
    { (yyval) = new parse_tree(mytok); }
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2252 "y.tab.c" /* yacc.c:1646  */
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

