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
#line 2 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "treeNode.h"
#define YYDEBUG 1
void yyerror(const char*);
int yyerrornum = 0;
extern int cur_line;

#line 77 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_Type = 258,
    T_Return = 259,
    T_Print = 260,
    T_ReadInt = 261,
    T_While = 262,
    T_SelfPLUS = 263,
    T_SelfMINUS = 264,
    T_If = 265,
    T_Else = 266,
    T_Break = 267,
    T_Continue = 268,
    T_Le = 269,
    T_Ge = 270,
    T_Eq = 271,
    T_Ne = 272,
    T_LM = 273,
    T_RM = 274,
    T_And = 275,
    T_Or = 276,
    T_IntConstant = 277,
    T_StringConstant = 278,
    T_Identifier = 279,
    T_MINUS = 280,
    T_DIV = 281,
    T_PLUS = 282,
    T_STAR = 283,
    T_PER = 284,
    T_ASSIGNOP = 285,
    T_COMMA = 286,
    T_SEMI = 287,
    T_NOT = 288,
    T_LC = 289,
    T_RC = 290,
    T_LB = 291,
    T_RB = 292,
    T_LP = 293,
    T_RP = 294,
    T_FloatConstant = 295,
    T_For = 296
  };
#endif
/* Tokens.  */
#define T_Type 258
#define T_Return 259
#define T_Print 260
#define T_ReadInt 261
#define T_While 262
#define T_SelfPLUS 263
#define T_SelfMINUS 264
#define T_If 265
#define T_Else 266
#define T_Break 267
#define T_Continue 268
#define T_Le 269
#define T_Ge 270
#define T_Eq 271
#define T_Ne 272
#define T_LM 273
#define T_RM 274
#define T_And 275
#define T_Or 276
#define T_IntConstant 277
#define T_StringConstant 278
#define T_Identifier 279
#define T_MINUS 280
#define T_DIV 281
#define T_PLUS 282
#define T_STAR 283
#define T_PER 284
#define T_ASSIGNOP 285
#define T_COMMA 286
#define T_SEMI 287
#define T_NOT 288
#define T_LC 289
#define T_RC 290
#define T_LB 291
#define T_RB 292
#define T_LP 293
#define T_RP 294
#define T_FloatConstant 295
#define T_For 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "parser.y" /* yacc.c:355  */

   struct treeNode* type_treenode;

#line 203 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "y.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   378

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    57,    58,    64,    66,    68,    70,    72,
      78,    82,    87,    88,    92,    93,    99,   100,   101,   106,
     107,   111,   113,   115,   121,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   138,   143,   145,   150,   155,   156,
     160,   164,   169,   170,   174,   175,   180,   182,   186,   189,
     193,   197,   203,   207,   211,   214,   219,   223,   227,   233,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   264
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Type", "T_Return", "T_Print",
  "T_ReadInt", "T_While", "T_SelfPLUS", "T_SelfMINUS", "T_If", "T_Else",
  "T_Break", "T_Continue", "T_Le", "T_Ge", "T_Eq", "T_Ne", "T_LM", "T_RM",
  "T_And", "T_Or", "T_IntConstant", "T_StringConstant", "T_Identifier",
  "T_MINUS", "T_DIV", "T_PLUS", "T_STAR", "T_PER", "T_ASSIGNOP", "T_COMMA",
  "T_SEMI", "T_NOT", "T_LC", "T_RC", "T_LB", "T_RB", "T_LP", "T_RP",
  "T_FloatConstant", "T_For", "$accept", "S", "Program", "FuncDecl",
  "RetType", "FuncName", "Args", "_Args", "BlockContent", "VarDecls",
  "VarDecl", "Stmts", "Stmt", "AssignStmts", "AssignStmt", "PrintStmt",
  "PActuals", "CallStmt", "CallExpr", "Actuals", "ReturnStmt", "IfStmt",
  "If", "TestExpr", "StmtsBlock", "Else", "WhileStmt", "While",
  "BreakStmt", "ContinueStmt", "ForStmt", "For", "ForExpr", "ArrayStmt",
  "Expr", "ReadInt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

#define YYPACT_NINF -72

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-72)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -72,    22,    33,   -72,   -72,   -72,     3,   -72,    13,    50,
      50,     7,    21,    26,     0,   -72,    27,    59,    29,    18,
      25,    40,    25,    25,    25,    41,    61,    46,   -72,   -72,
      54,    55,    98,   -72,    56,    25,    24,    25,   -72,   -72,
      60,   -72,   -72,    63,   -72,   -72,    58,   -72,    58,   -72,
     -72,   -72,    62,    67,   -72,    68,    70,     6,    80,   -72,
      74,   -72,     2,   -72,    82,    82,   -72,   -72,   -72,   195,
     -72,    90,   -72,   -72,    82,    82,    82,   -72,   -72,    85,
      94,   -72,   -72,   -72,   -72,    82,    93,    93,    95,    93,
      82,   -72,   -72,   -72,   -72,    91,    39,   117,   -72,   -72,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,   -72,    82,    82,   -72,   220,   269,    96,   269,   -72,
     -72,   143,    25,   113,   -72,    28,    97,   -72,   269,   100,
     -72,   332,   332,   341,   341,   317,   293,    81,    39,    81,
      39,    39,   332,   332,    11,   -72,   -72,   109,   -72,   106,
     -72,    93,    82,   -72,    82,   115,   -72,   -72,   244,   269,
     -72,    82,   169,   -72
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,    10,     4,     0,    11,     0,    12,
      12,     0,     0,    13,     0,    14,     0,     0,     0,     0,
      16,     0,    16,    16,    16,     0,     0,     0,    53,    48,
       0,     0,     0,    57,     0,    16,     0,    16,    24,    25,
       0,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,     0,     0,    15,     0,     0,     0,    21,    22,
       0,    74,    76,    45,     0,     0,    75,    78,    82,     0,
      77,     0,    54,    55,     0,     0,    42,     6,    17,     0,
       0,    19,    18,    34,    40,     0,     0,     0,     0,     0,
       0,     7,     8,     9,     5,     0,    73,     0,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,    38,     0,    35,     0,    38,    20,
      23,     0,    16,    46,    52,     0,     0,    56,    36,     0,
      79,    68,    67,    69,    70,    72,    71,    61,    63,    60,
      62,    64,    66,    65,     0,    59,    41,    43,    49,     0,
      51,     0,     0,    83,     0,     0,    50,    47,     0,    39,
      37,     0,     0,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -72,   -72,   -72,   -72,   138,   -72,   -11,   -72,
     -72,   -72,   -72,   -72,    73,   -72,    31,   -72,   -14,   -72,
     -72,   -72,   -72,   102,   -71,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -20,   -31,   -72
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,     8,    12,    13,    34,    35,
      36,    37,    38,    39,    40,    41,   144,    42,    67,   117,
      44,    45,    46,    86,   123,   151,    47,    48,    49,    50,
      51,    52,    89,    68,    69,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      53,    18,    53,    53,    53,    59,    43,    93,    43,    43,
      43,    55,    56,    57,     9,    53,   124,    53,   127,    23,
      74,    43,     3,    43,    78,    79,    82,     7,    25,    26,
      27,    15,    28,    96,    97,    29,     4,    30,    31,    19,
      76,    94,   154,   115,   116,   118,    74,    98,    99,    32,
     155,    10,    24,    11,   121,    80,    81,    17,    75,   128,
      16,    20,    21,    22,    54,    58,    33,    60,    53,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     157,   142,   143,    61,    71,    62,    72,    73,    60,    98,
      99,    77,    83,    63,    64,    84,    85,    90,    74,    65,
      88,    66,    53,    91,    61,    92,    62,   107,    43,   109,
     110,   149,    95,   114,   129,    64,    74,   119,   120,   125,
      65,   158,    66,   159,   150,    98,    99,   122,    75,   152,
     162,   100,   101,   102,   103,   146,    76,   104,   105,   153,
     154,   156,   106,   107,   108,   109,   110,   160,    14,   147,
      87,    98,    99,   112,   113,     0,   130,   100,   101,   102,
     103,   126,     0,   104,   105,     0,     0,     0,   106,   107,
     108,   109,   110,     0,     0,     0,     0,    98,    99,   112,
     113,     0,   148,   100,   101,   102,   103,     0,     0,   104,
     105,     0,     0,     0,   106,   107,   108,   109,   110,     0,
       0,     0,     0,    98,    99,   112,   113,     0,   163,   100,
     101,   102,   103,     0,     0,   104,   105,     0,     0,     0,
     106,   107,   108,   109,   110,     0,     0,   111,    98,    99,
       0,   112,   113,     0,   100,   101,   102,   103,     0,   145,
     104,   105,     0,     0,     0,   106,   107,   108,   109,   110,
       0,     0,    98,    99,     0,     0,   112,   113,   100,   101,
     102,   103,     0,     0,   104,   105,     0,     0,     0,   106,
     107,   108,   109,   110,     0,     0,   161,    98,    99,     0,
     112,   113,     0,   100,   101,   102,   103,     0,     0,   104,
     105,     0,     0,     0,   106,   107,   108,   109,   110,     0,
       0,    98,    99,     0,     0,   112,   113,   100,   101,   102,
     103,     0,     0,   104,     0,     0,     0,     0,   106,   107,
     108,   109,   110,     0,     0,    98,    99,     0,     0,   112,
     113,   100,   101,   102,   103,     0,     0,     0,     0,     0,
      98,    99,   106,   107,   108,   109,   110,     0,     0,    98,
      99,     0,     0,   112,   113,   100,   101,   106,   107,   108,
     109,   110,     0,     0,     0,     0,   106,   107,   108,   109,
     110,     0,     0,     0,     0,     0,     0,   112,   113
};

static const yytype_int16 yycheck[] =
{
      20,     1,    22,    23,    24,    25,    20,     1,    22,    23,
      24,    22,    23,    24,     1,    35,    87,    37,    89,     1,
      18,    35,     0,    37,    35,     1,    37,    24,     3,     4,
       5,    24,     7,    64,    65,    10,     3,    12,    13,    39,
      38,    35,    31,    74,    75,    76,    18,     8,     9,    24,
      39,    38,    34,     3,    85,    31,    32,    31,    30,    90,
      39,    34,     3,    34,    24,    24,    41,     6,    88,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     151,   112,   113,    22,    38,    24,    32,    32,     6,     8,
       9,    35,    32,    32,    33,    32,    38,    30,    18,    38,
      38,    40,   122,    35,    22,    35,    24,    26,   122,    28,
      29,   122,    38,    23,    23,    33,    18,    32,    24,    24,
      38,   152,    40,   154,    11,     8,     9,    34,    30,    32,
     161,    14,    15,    16,    17,    39,    38,    20,    21,    39,
      31,    35,    25,    26,    27,    28,    29,    32,    10,   118,
      48,     8,     9,    36,    37,    -1,    39,    14,    15,    16,
      17,    88,    -1,    20,    21,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,     8,     9,    36,
      37,    -1,    39,    14,    15,    16,    17,    -1,    -1,    20,
      21,    -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,     8,     9,    36,    37,    -1,    39,    14,
      15,    16,    17,    -1,    -1,    20,    21,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    -1,    32,     8,     9,
      -1,    36,    37,    -1,    14,    15,    16,    17,    -1,    19,
      20,    21,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    -1,     8,     9,    -1,    -1,    36,    37,    14,    15,
      16,    17,    -1,    -1,    20,    21,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    -1,    32,     8,     9,    -1,
      36,    37,    -1,    14,    15,    16,    17,    -1,    -1,    20,
      21,    -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      -1,     8,     9,    -1,    -1,    36,    37,    14,    15,    16,
      17,    -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    -1,     8,     9,    -1,    -1,    36,
      37,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
       8,     9,    25,    26,    27,    28,    29,    -1,    -1,     8,
       9,    -1,    -1,    36,    37,    14,    15,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,    44,     0,     3,    45,    46,    24,    47,     1,
      38,     3,    48,    49,    48,    24,    39,    31,     1,    39,
      34,     3,    34,     1,    34,     3,     4,     5,     7,    10,
      12,    13,    24,    41,    50,    51,    52,    53,    54,    55,
      56,    57,    59,    60,    62,    63,    64,    68,    69,    70,
      71,    72,    73,    75,    24,    50,    50,    50,    24,    75,
       6,    22,    24,    32,    33,    38,    40,    60,    75,    76,
      77,    38,    32,    32,    18,    30,    38,    35,    50,     1,
      31,    32,    50,    32,    32,    38,    65,    65,    38,    74,
      30,    35,    35,     1,    35,    38,    76,    76,     8,     9,
      14,    15,    16,    17,    20,    21,    25,    26,    27,    28,
      29,    32,    36,    37,    23,    76,    76,    61,    76,    32,
      24,    76,    34,    66,    66,    24,    56,    66,    76,    23,
      39,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    58,    19,    39,    58,    39,    50,
      11,    67,    32,    39,    31,    39,    35,    66,    76,    76,
      32,    32,    76,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    45,    45,    45,
      46,    47,    48,    48,    49,    49,    50,    50,    50,    51,
      51,    52,    52,    52,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    55,    56,    56,    57,    58,    58,
      59,    60,    61,    61,    62,    62,    63,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     8,     8,     8,     8,     8,
       1,     1,     0,     1,     2,     4,     0,     2,     2,     2,
       3,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     3,     6,     0,     3,
       2,     4,     0,     2,     3,     2,     3,     5,     1,     3,
       3,     1,     3,     1,     2,     2,     3,     1,     7,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     1,     1,     1,     1,     1,     3,
       2,     2,     1,     4
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 42 "parser.y" /* yacc.c:1646  */
    {
if((yyvsp[0].type_treenode) == NULL)
    {	(yyval.type_treenode) = NULL;
        printf("not ok");
        root = NULL;
    }
    else 
    {	createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"S",NULL);
    	(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode);
        root = (yyval.type_treenode);
    }
}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 57 "parser.y" /* yacc.c:1646  */
    {(yyval.type_treenode) = NULL;}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 59 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Program",NULL); (yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode); }
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 65 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"FuncDecl",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-7].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-6].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[-4].type_treenode);(yyval.type_treenode)->children[3] = (yyvsp[-1].type_treenode);}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 67 "parser.y" /* yacc.c:1646  */
    {yyerrok;yyerrornum = yyerrornum + 1;printf("Error type B at line %d: Expected type '('\n",(yyloc).first_line);createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"FuncDecl",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-7].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-6].type_treenode);}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "parser.y" /* yacc.c:1646  */
    {yyerrok;yyerrornum = yyerrornum + 1;printf("Error type B at Line %d: Expected type ')'\n",(yyloc).first_line);createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"FuncDecl",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-7].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-6].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[-4].type_treenode);}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 71 "parser.y" /* yacc.c:1646  */
    {yyerrok;yyerrornum = yyerrornum + 1;printf("Error type B at Line %d: Expected type '{'\n",(yyloc).first_line);createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"FuncDecl",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-7].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-6].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[-4].type_treenode);}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 73 "parser.y" /* yacc.c:1646  */
    {yyerrok;yyerrornum = yyerrornum + 1;printf("Error type B at Line %d: Expected type '}'\n",(yyloc).first_line);createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"FuncDecl",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-7].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-6].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[-4].type_treenode);(yyval.type_treenode)->children[3] = (yyvsp[-1].type_treenode);}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 78 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"RetType",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode);}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 82 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"FuncName",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 87 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Args",NULL);}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 88 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Args",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode);}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 92 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"_Args",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode);}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 94 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"_Args",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-3].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode);}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 99 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"BlockContent",NULL);}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 100 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"BlockContent",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode);}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 101 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"BlockContent",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 106 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"VarDecls",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode);}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 107 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"VarDecls",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);yyerrornum = yyerrornum + 1;printf("Error type B at Line %d: Expected type ';'\n",(yyloc).first_line);yyerrok;}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 112 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"VarDecl",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode); }
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 114 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"VarDecl",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode);}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 116 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"VarDecl",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode); }
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 121 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Stmts",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 125 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Stmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 126 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Stmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 127 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Stmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 128 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Stmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 129 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Stmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 130 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Stmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 131 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Stmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 132 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Stmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 133 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Stmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode);}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 139 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"AssignStmts",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 144 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"AssignStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 146 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"AssignStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode);}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 151 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"PrintStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-5].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-3].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[-2].type_treenode); }
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 155 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"PActuals",NULL); }
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 156 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"PActuals",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode); }
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 160 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"CallStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode); }
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 165 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"CallExpr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-3].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode); }
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 169 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Actuals",NULL); }
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 170 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Actuals",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode); }
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 174 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"ReturnStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode); }
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 175 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"ReturnStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode); }
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 181 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"IfStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 183 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"IfStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-4].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-3].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[3] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[4] = (yyvsp[0].type_treenode); }
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 186 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"If",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 189 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"TestExpr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode); }
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 193 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"StmtsBlock",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode); }
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 197 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Else",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 204 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"WhileStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 207 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"While",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 211 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"BreakStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode); }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 214 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"ContinueStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode); }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 219 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"ForStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 223 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"For",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 228 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"ForExpr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-5].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-3].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[-1].type_treenode);  }
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 234 "parser.y" /* yacc.c:1646  */
    {createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"ArrayStmt",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-3].type_treenode); (yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 238 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 239 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 240 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 241 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 242 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 243 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 244 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 245 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 246 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 247 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 248 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 249 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 250 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-2].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[2] = (yyvsp[0].type_treenode); }
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 251 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode); }
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 252 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 253 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode); }
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 254 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode);  }
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 255 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 256 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode);  }
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 257 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);  }
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 258 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode);}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 259 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[-1].type_treenode);(yyval.type_treenode)->children[1] = (yyvsp[0].type_treenode);}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 260 "parser.y" /* yacc.c:1646  */
    { createTreeNode(&(yyval.type_treenode),1,(yyloc).first_line,"Expr",NULL);(yyval.type_treenode)->children[0] = (yyvsp[0].type_treenode);}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 265 "parser.y" /* yacc.c:1646  */
    { printf("\treadint %s\n", (yyvsp[-1].type_treenode)); }
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2066 "y.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 269 "parser.y" /* yacc.c:1906  */


int main(){
    yyparse();
    printf("\n\n");
    printTreeNode(root,0);
    printf("\n\n\n *************************************************************************** \n");
    if(yyerrornum>0){
        printf("\n\tthere are %d errors!!! \n\n",yyerrornum);
    }
    else{
        printf("\n\t accept!!!\n\n");
    }
    
    return 1;
}
