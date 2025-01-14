
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "project.y"


# include <stdio.h>
# include <string.h>
# include <math.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdbool.h>

int yylex(void);
void yyerror(char*);
char variable[500][20]; 
int DeclaredBefore[500];
int recordTheInteger[500];
double recordTheDecimal[500];
char *recordString[500];
int maincase,subcase;
double dmaincase, dsubcase;
int intArrSize=0, doubleArrSize=0;
int funcCount=0;
int arr_int[10000];
double arr_real[10000];



int i, tmp=0;
/*takes a string x as an argument and checks if it matches 
any of the strings stored in the variable array*/
int check_the_variable(char *x)
{
    for(i=0 ; i<tmp ; i++)
    {
        if( strcmp(x,variable[i])==0 )
        {
            return i;
        }
    }
    return -1;
}





/* Line 189 of yacc.c  */
#line 120 "project.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     DECI = 259,
     STR = 260,
     BEG = 261,
     END = 262,
     NEWLINE = 263,
     ASSIGN = 264,
     INTNUMBER = 265,
     REALNUMBER = 266,
     singlecmnt = 267,
     multicmnt = 268,
     VAR = 269,
     STRING = 270,
     DIVIDER = 271,
     SCAN = 272,
     FUNC = 273,
     ARR = 274,
     LTB = 275,
     RTB = 276,
     LP = 277,
     RP = 278,
     PRINT = 279,
     SEMICOLON = 280,
     COMMA = 281,
     PLUS = 282,
     MINUS = 283,
     MUL = 284,
     DIV = 285,
     MOD = 286,
     POWER = 287,
     ABSOLUTE = 288,
     FACTORIAL = 289,
     INCRE = 290,
     DECRE = 291,
     EQUAL = 292,
     GREATER = 293,
     LESS = 294,
     GRTEQUAL = 295,
     LESSEQUAL = 296,
     NOTEQUAL = 297,
     OR = 298,
     AND = 299,
     NOT = 300,
     IF = 301,
     ELSE = 302,
     ELIF = 303,
     LB = 304,
     RB = 305,
     SWITCH = 306,
     CASE = 307,
     DEFAULT = 308,
     COLON = 309,
     FROM = 310,
     WHILE = 311,
     DO = 312,
     RANGE = 313,
     SIN = 314,
     COS = 315,
     TAN = 316,
     LOG10 = 317,
     LOG2 = 318
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 46 "project.y"

  int integer;
  double real;
  char *text;



/* Line 214 of yacc.c  */
#line 227 "project.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 239 "project.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1442

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNRULES -- Number of states.  */
#define YYNSTATES  276

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    12,    14,    16,    18,    21,
      24,    27,    30,    32,    34,    37,    40,    42,    44,    47,
      51,    57,    59,    63,    67,    73,    77,    79,    83,    89,
      93,    95,   102,   109,   113,   115,   119,   121,   125,   132,
     134,   142,   148,   151,   158,   160,   163,   171,   173,   175,
     177,   185,   197,   208,   217,   224,   231,   238,   240,   243,
     246,   253,   260,   267,   273,   275,   277,   279,   285,   291,
     293,   297,   299,   301,   303,   305,   307,   309,   314,   319,
     322,   325,   329,   333,   337,   341,   345,   349,   352,   355,
     358,   361,   364,   368,   372,   376,   380,   384,   388,   392,
     396,   400,   405,   410,   415,   420,   425
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,     6,    66,     7,    -1,    67,    -1,    66,
      67,    -1,    25,    -1,    12,    -1,    13,    -1,    68,    25,
      -1,    74,    25,    -1,    92,    25,    -1,    76,    25,    -1,
       8,    -1,    89,    -1,     3,    69,    -1,     4,    70,    -1,
      72,    -1,    73,    -1,     5,    71,    -1,    69,    26,    14,
      -1,    69,    26,    14,     9,    92,    -1,    14,    -1,    14,
       9,    92,    -1,    70,    26,    14,    -1,    70,    26,    14,
       9,    92,    -1,    14,     9,    92,    -1,    14,    -1,    71,
      26,    14,    -1,    71,    26,    14,     9,    15,    -1,    14,
       9,    15,    -1,    14,    -1,     3,    19,    14,    20,    10,
      21,    -1,     4,    19,    14,    20,    10,    21,    -1,    74,
      26,    75,    -1,    75,    -1,    14,     9,    15,    -1,    76,
      -1,    14,     9,    92,    -1,    14,    20,    10,    21,     9,
      92,    -1,    78,    -1,    46,    20,    92,    21,    49,    66,
      50,    -1,    78,    47,    49,    66,    50,    -1,    78,    79,
      -1,    78,    79,    47,    49,    66,    50,    -1,    80,    -1,
      80,    79,    -1,    48,    20,    92,    21,    49,    66,    50,
      -1,    83,    -1,    82,    -1,    84,    -1,    56,    20,    92,
      21,    49,    66,    50,    -1,    55,    20,    74,    16,    92,
      16,    92,    21,    49,    66,    50,    -1,    55,    20,    58,
      10,    16,    10,    21,    49,    66,    50,    -1,    57,    49,
      66,    50,    56,    20,    92,    21,    -1,    51,    10,    54,
      49,    86,    50,    -1,    51,    15,    54,    49,    86,    50,
      -1,    51,    11,    54,    49,    86,    50,    -1,    87,    -1,
      87,    88,    -1,    87,    86,    -1,    52,    10,    54,    49,
      66,    50,    -1,    52,    11,    54,    49,    66,    50,    -1,
      52,    15,    54,    49,    66,    50,    -1,    53,    54,    49,
      66,    50,    -1,    77,    -1,    85,    -1,    81,    -1,    24,
      22,    90,    23,    25,    -1,    17,    22,    14,    23,    25,
      -1,    91,    -1,    90,    16,    91,    -1,    92,    -1,    15,
      -1,    14,    -1,    10,    -1,    11,    -1,    14,    -1,    14,
      20,    10,    21,    -1,    14,    20,    14,    21,    -1,    33,
      92,    -1,    34,    92,    -1,    92,    27,    92,    -1,    92,
      28,    92,    -1,    92,    29,    92,    -1,    92,    30,    92,
      -1,    92,    31,    92,    -1,    92,    32,    92,    -1,    35,
      14,    -1,    36,    14,    -1,    14,    35,    -1,    14,    36,
      -1,    45,    92,    -1,    92,    39,    92,    -1,    92,    38,
      92,    -1,    92,    41,    92,    -1,    92,    40,    92,    -1,
      92,    37,    92,    -1,    92,    42,    92,    -1,    92,    43,
      92,    -1,    92,    44,    92,    -1,    22,    92,    23,    -1,
      59,    22,    92,    23,    -1,    60,    22,    92,    23,    -1,
      61,    22,    92,    23,    -1,    62,    22,    92,    23,    -1,
      63,    22,    92,    23,    -1,    18,    14,    20,     3,    14,
      21,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    95,    95,    98,    99,   102,   103,   104,   106,   107,
     108,   109,   110,   113,   116,   117,   118,   119,   120,   125,
     138,   155,   168,   187,   200,   215,   232,   247,   260,   280,
     296,   311,   330,   348,   349,   350,   360,   361,   384,   412,
     414,   419,   422,   423,   427,   428,   431,   438,   439,   440,
     443,   455,   459,   474,   486,   490,   496,   503,   504,   505,
     507,   516,   524,   530,   537,   538,   539,   540,   543,   575,
     576,   579,   582,   589,   622,   623,   624,   636,   660,   703,
     704,   719,   720,   721,   722,   733,   734,   736,   755,   775,
     797,   816,   819,   825,   832,   839,   846,   853,   860,   867,
     874,   877,   880,   883,   886,   889,   893
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "DECI", "STR", "BEG", "END",
  "NEWLINE", "ASSIGN", "INTNUMBER", "REALNUMBER", "singlecmnt",
  "multicmnt", "VAR", "STRING", "DIVIDER", "SCAN", "FUNC", "ARR", "LTB",
  "RTB", "LP", "RP", "PRINT", "SEMICOLON", "COMMA", "PLUS", "MINUS", "MUL",
  "DIV", "MOD", "POWER", "ABSOLUTE", "FACTORIAL", "INCRE", "DECRE",
  "EQUAL", "GREATER", "LESS", "GRTEQUAL", "LESSEQUAL", "NOTEQUAL", "OR",
  "AND", "NOT", "IF", "ELSE", "ELIF", "LB", "RB", "SWITCH", "CASE",
  "DEFAULT", "COLON", "FROM", "WHILE", "DO", "RANGE", "SIN", "COS", "TAN",
  "LOG10", "LOG2", "$accept", "program", "statements", "statement",
  "declaration", "writeINT", "writeReal", "writeString", "array_int",
  "array_real", "assignment", "assigTheVal", "assign_array",
  "conditionalStmt", "if_stmt", "elif_stmts", "elif_stmt", "loop_stmts",
  "whileLoop", "forLoop", "dowhileLoop", "switchStmt", "caseStmt",
  "case_stmt", "defaultStmt", "special", "all", "printtype", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    70,    70,    70,    70,    71,    71,    71,
      71,    72,    73,    74,    74,    75,    75,    75,    76,    77,
      78,    78,    78,    78,    79,    79,    80,    81,    81,    81,
      82,    83,    83,    84,    85,    85,    85,    86,    86,    86,
      87,    87,    87,    88,    89,    89,    89,    89,    89,    90,
      90,    91,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     2,     2,     1,     1,     2,     3,
       5,     1,     3,     3,     5,     3,     1,     3,     5,     3,
       1,     6,     6,     3,     1,     3,     1,     3,     6,     1,
       7,     5,     2,     6,     1,     2,     7,     1,     1,     1,
       7,    11,    10,     8,     6,     6,     6,     1,     2,     2,
       6,     6,     6,     5,     1,     1,     1,     5,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     4,     4,     2,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     4,     4,     4,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    12,    74,    75,     6,
       7,    76,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,    16,    17,     0,    34,    36,
      64,    39,    66,    48,    47,    49,    65,    13,     0,     1,
      21,     0,    14,    26,     0,    15,    30,    18,     0,     0,
      89,    90,     0,     0,    76,     0,     0,    79,    80,    87,
      88,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     4,     8,     9,     0,    11,
       0,     0,    42,    44,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    37,     0,
       0,     0,     0,     0,   100,    76,    72,     0,    69,    71,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    45,
      81,    82,    83,    84,    85,    86,    96,    93,    92,    95,
      94,    97,    98,    99,    22,     0,    19,    25,     0,    23,
      29,    27,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
     103,   104,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     0,    77,    70,    67,     0,     0,     0,
      57,     0,     0,     0,     0,     0,     0,     0,    41,     0,
       0,    31,    20,    32,    24,    28,    38,   106,     0,     0,
       0,     0,    54,     0,    59,    58,    56,    55,     0,     0,
       0,     0,     0,     0,    43,    40,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    53,    46,     0,     0,     0,     0,     0,     0,    60,
      61,    62,    63,    52,     0,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    32,    33,    34,    52,    55,    57,    35,    36,
      37,    38,    39,    40,    41,    92,    93,    42,    43,    44,
      45,    46,   209,   210,   235,    47,   127,   128,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -172
static const yytype_int16 yypact[] =
{
      11,  1026,    44,   -11,    21,    50,  -172,  -172,  -172,  -172,
    -172,    -5,    36,    52,  1085,    79,  -172,  1085,  1085,    58,
      94,  1085,    95,    42,    98,   109,    85,   130,   140,   152,
     153,   154,   233,  -172,   155,  -172,  -172,    54,  -172,   156,
    -172,    69,  -172,  -172,  -172,  -172,  -172,  -172,  1322,  -172,
     122,   127,   151,   170,   168,   157,   175,   160,    14,    41,
    -172,  -172,   181,   177,     2,  1192,  1031,  1340,  1340,  -172,
    -172,  1071,  1085,   144,   145,   146,   -13,  1085,  1026,  1085,
    1085,  1085,  1085,  1085,  -172,  -172,  -172,  -172,   187,  -172,
     161,   182,   164,   173,  -172,  1085,  1085,  1085,  1085,  1085,
    1085,  1085,  1085,  1085,  1085,  1085,  1085,  1085,  1085,  1085,
     192,   209,  1085,   204,   211,   212,   215,  -172,  1340,   205,
     218,   225,   246,    68,  -172,    -2,  -172,     4,  -172,  1340,
     116,   203,   207,   210,     3,   243,     0,  -172,  1095,   294,
    1214,  1236,  1258,  1280,  1302,  -172,  1026,  1085,   213,  -172,
     176,  1356,  1371,  1385,  1398,  1071,    -1,    62,   126,    19,
      96,   106,   216,  -172,  1340,   244,   252,  1340,   253,   255,
    -172,   256,   261,  -172,   247,   257,   254,  1031,   248,   227,
     222,   222,   222,   267,   264,  1085,   232,   226,  -172,  -172,
    -172,  -172,  -172,   355,  1122,  1026,   262,  1085,   265,  1085,
     270,  1085,  -172,   266,  -172,  -172,  -172,  1026,   117,   241,
     119,   250,   251,   282,   299,    82,  1026,   290,  -172,   268,
     416,  -172,  1340,  -172,  1340,  -172,  1340,  -172,   477,   259,
     260,   269,  -172,   271,  -172,  -172,  -172,  -172,   261,   300,
    1085,   538,  1085,  1026,  -172,  -172,   273,   275,   277,   283,
     284,  1146,  -172,  1170,   599,  1026,  1026,  1026,  1026,  1026,
     285,  -172,  -172,   660,   721,   782,   843,   904,  1026,  -172,
    -172,  -172,  -172,  -172,   965,  -172
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,   -65,   -32,  -172,  -172,  -172,  -172,  -172,  -172,
     239,   249,   -69,  -172,  -172,   238,  -172,  -172,  -172,  -172,
    -172,  -172,  -171,  -172,  -172,  -172,  -172,   143,   -12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -74
static const yytype_int16 yytable[] =
{
      85,   134,    65,    50,    58,    67,    68,   137,    51,    71,
     211,   212,    58,   139,   -73,    59,   185,     1,   123,   137,
     177,   -73,   123,   183,     7,     8,    88,   178,    64,   117,
      60,    61,    13,    60,    61,    53,    14,    60,    61,   234,
      54,   106,   107,   108,    49,   135,   118,    17,    18,    19,
      20,   119,    73,    74,   129,   120,   101,    75,    62,    21,
     130,   106,   107,   108,    56,   138,    63,   140,   141,   142,
     143,   144,    69,    27,    28,    29,    30,    31,   176,    87,
      88,   193,   120,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   240,   101,
     167,    66,   104,   105,   106,   107,   108,    85,    70,    95,
      96,    97,    98,    99,   100,    72,    90,    91,    76,   101,
     102,   103,   104,   105,   106,   107,   108,   229,   230,    77,
     220,   109,   231,   101,    78,   194,   104,   179,   106,   107,
     108,   110,   228,    95,    96,    97,    98,    99,   100,   107,
     108,   241,    79,   101,   102,   103,   104,   105,   106,   107,
     108,    85,    80,   101,   102,   129,   104,   105,   106,   107,
     108,   208,   233,   215,    81,    82,    83,   111,   254,   112,
      86,    89,   113,   114,   115,   222,   116,   224,    85,   226,
     263,   264,   265,   266,   267,   121,    85,   122,   131,   132,
     133,   134,   147,   274,    96,    97,    98,    99,   100,    85,
     146,   148,   165,   101,   102,   103,   104,   105,   106,   107,
     108,    91,    85,   166,   168,   169,   172,   170,   251,   171,
     253,    85,    85,    85,    85,    85,     3,     4,     5,   173,
      84,     6,    85,     7,     8,     9,    10,    11,   174,   175,
      12,    13,   180,   184,   196,    14,   181,    15,    16,   182,
     108,   197,   195,   198,   199,   200,    17,    18,    19,    20,
     201,   203,   202,   206,   208,   204,   207,   213,    21,    22,
     214,   216,   217,   221,    23,   225,   223,   227,    24,    25,
      26,   232,    27,    28,    29,    30,    31,     3,     4,     5,
     236,   237,     6,   238,     7,     8,     9,    10,    11,   239,
     242,    12,    13,   246,   247,   136,    14,   243,    15,    16,
     205,   250,   255,   248,   256,   249,   257,    17,    18,    19,
      20,   149,   258,   259,   268,     0,     0,   145,     0,    21,
      22,     0,     0,     0,   187,    23,     0,     0,     0,    24,
      25,    26,     0,    27,    28,    29,    30,    31,     3,     4,
       5,     0,     0,     6,     0,     7,     8,     9,    10,    11,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,     0,     0,     0,     0,     0,     0,     0,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     0,   218,    23,     0,     0,     0,
      24,    25,    26,     0,    27,    28,    29,    30,    31,     3,
       4,     5,     0,     0,     6,     0,     7,     8,     9,    10,
      11,     0,     0,    12,    13,     0,     0,     0,    14,     0,
      15,    16,     0,     0,     0,     0,     0,     0,     0,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,   244,    23,     0,     0,
       0,    24,    25,    26,     0,    27,    28,    29,    30,    31,
       3,     4,     5,     0,     0,     6,     0,     7,     8,     9,
      10,    11,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,     0,     0,     0,     0,     0,     0,     0,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,     0,     0,   245,    23,     0,
       0,     0,    24,    25,    26,     0,    27,    28,    29,    30,
      31,     3,     4,     5,     0,     0,     6,     0,     7,     8,
       9,    10,    11,     0,     0,    12,    13,     0,     0,     0,
      14,     0,    15,    16,     0,     0,     0,     0,     0,     0,
       0,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,     0,     0,     0,   252,    23,
       0,     0,     0,    24,    25,    26,     0,    27,    28,    29,
      30,    31,     3,     4,     5,     0,     0,     6,     0,     7,
       8,     9,    10,    11,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,     0,     0,     0,     0,     0,
       0,     0,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,     0,     0,   262,
      23,     0,     0,     0,    24,    25,    26,     0,    27,    28,
      29,    30,    31,     3,     4,     5,     0,     0,     6,     0,
       7,     8,     9,    10,    11,     0,     0,    12,    13,     0,
       0,     0,    14,     0,    15,    16,     0,     0,     0,     0,
       0,     0,     0,    17,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
     269,    23,     0,     0,     0,    24,    25,    26,     0,    27,
      28,    29,    30,    31,     3,     4,     5,     0,     0,     6,
       0,     7,     8,     9,    10,    11,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,     0,     0,     0,
       0,     0,     0,     0,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,     0,     0,
       0,   270,    23,     0,     0,     0,    24,    25,    26,     0,
      27,    28,    29,    30,    31,     3,     4,     5,     0,     0,
       6,     0,     7,     8,     9,    10,    11,     0,     0,    12,
      13,     0,     0,     0,    14,     0,    15,    16,     0,     0,
       0,     0,     0,     0,     0,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,     0,
       0,     0,   271,    23,     0,     0,     0,    24,    25,    26,
       0,    27,    28,    29,    30,    31,     3,     4,     5,     0,
       0,     6,     0,     7,     8,     9,    10,    11,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,     0,
       0,     0,     0,     0,     0,     0,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    22,
       0,     0,     0,   272,    23,     0,     0,     0,    24,    25,
      26,     0,    27,    28,    29,    30,    31,     3,     4,     5,
       0,     0,     6,     0,     7,     8,     9,    10,    11,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
       0,     0,     0,     0,     0,     0,     0,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,    21,
      22,     0,     0,     0,   273,    23,     0,     0,     0,    24,
      25,    26,     0,    27,    28,    29,    30,    31,     3,     4,
       5,     0,     0,     6,     0,     7,     8,     9,    10,    11,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,     0,     0,     0,     0,     0,     0,     0,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     0,   275,    23,     0,     0,     0,
      24,    25,    26,     0,    27,    28,    29,    30,    31,     3,
       4,     5,     0,     0,     6,     0,     7,     8,     9,    10,
      11,     7,     8,    12,    13,   125,   126,     0,    14,    13,
      15,    16,     0,    14,     0,     0,     0,     0,     0,    17,
      18,    19,    20,     0,    17,    18,    19,    20,     0,     0,
       0,    21,    22,     0,     0,     0,    21,    23,     0,     0,
       0,    24,    25,    26,     0,    27,    28,    29,    30,    31,
      27,    28,    29,    30,    31,     7,     8,     0,     0,    64,
       0,     0,     0,    13,     0,     0,     0,    14,   101,   102,
     103,   104,   105,   106,   107,   108,   186,     0,    17,    18,
      19,    20,    95,    96,    97,    98,    99,   100,     0,     0,
      21,     0,   101,   102,   103,   104,   105,   106,   107,   108,
       0,     0,     0,   219,    27,    28,    29,    30,    31,    95,
      96,    97,    98,    99,   100,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,   107,   108,   260,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,   100,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,   107,
     108,   261,     0,     0,     0,     0,     0,    95,    96,    97,
      98,    99,   100,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   107,   108,   124,     0,     0,     0,    95,
      96,    97,    98,    99,   100,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,   107,   108,   188,     0,     0,
       0,    95,    96,    97,    98,    99,   100,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   189,
       0,     0,     0,    95,    96,    97,    98,    99,   100,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,   107,
     108,   190,     0,     0,     0,    95,    96,    97,    98,    99,
     100,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,   107,   108,   191,     0,     0,     0,    95,    96,    97,
      98,    99,   100,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   107,   108,   192,     0,     0,     0,    95,
      96,    97,    98,    99,   100,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,   107,   108,    94,     0,    95,
      96,    97,    98,    99,   100,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,   107,   108,    95,    96,    97,
      98,    99,   100,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   107,   108,    97,    98,    99,   100,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,   107,
     108,    98,    99,   100,     0,     0,     0,     0,   101,   102,
     103,   104,   105,   106,   107,   108,    99,   100,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,   107,   108,
     100,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,   107,   108
};

static const yytype_int16 yycheck[] =
{
      32,    14,    14,    14,     9,    17,    18,    76,    19,    21,
     181,   182,     9,    78,    16,    20,    16,     6,    20,    88,
      16,    23,    20,    20,    10,    11,    26,    23,    14,    15,
      35,    36,    18,    35,    36,    14,    22,    35,    36,   210,
      19,    42,    43,    44,     0,    58,    58,    33,    34,    35,
      36,    10,    10,    11,    66,    14,    37,    15,    22,    45,
      72,    42,    43,    44,    14,    77,    14,    79,    80,    81,
      82,    83,    14,    59,    60,    61,    62,    63,    10,    25,
      26,   146,    14,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    16,    37,
     112,    22,    40,    41,    42,    43,    44,   139,    14,    27,
      28,    29,    30,    31,    32,    20,    47,    48,    20,    37,
      38,    39,    40,    41,    42,    43,    44,    10,    11,    20,
     195,     9,    15,    37,    49,   147,    40,    21,    42,    43,
      44,    14,   207,    27,    28,    29,    30,    31,    32,    43,
      44,   216,    22,    37,    38,    39,    40,    41,    42,    43,
      44,   193,    22,    37,    38,   177,    40,    41,    42,    43,
      44,    52,    53,   185,    22,    22,    22,    26,   243,     9,
      25,    25,    14,    26,     9,   197,    26,   199,   220,   201,
     255,   256,   257,   258,   259,    14,   228,    20,    54,    54,
      54,    14,    20,   268,    28,    29,    30,    31,    32,   241,
      49,    47,    20,    37,    38,    39,    40,    41,    42,    43,
      44,    48,   254,    14,    20,    14,    21,    15,   240,    14,
     242,   263,   264,   265,   266,   267,     3,     4,     5,    21,
       7,     8,   274,    10,    11,    12,    13,    14,    23,     3,
      17,    18,    49,    10,    10,    22,    49,    24,    25,    49,
      44,     9,    49,    10,     9,     9,    33,    34,    35,    36,
       9,    14,    25,    25,    52,    21,    49,    10,    45,    46,
      16,    49,    56,    21,    51,    15,    21,    21,    55,    56,
      57,    50,    59,    60,    61,    62,    63,     3,     4,     5,
      50,    50,     8,    21,    10,    11,    12,    13,    14,    10,
      20,    17,    18,    54,    54,    76,    22,    49,    24,    25,
     177,    21,    49,    54,    49,    54,    49,    33,    34,    35,
      36,    93,    49,    49,    49,    -1,    -1,    88,    -1,    45,
      46,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,     3,     4,
       5,    -1,    -1,     8,    -1,    10,    11,    12,    13,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,     3,
       4,     5,    -1,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
       3,     4,     5,    -1,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    51,    -1,
      -1,    -1,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,     3,     4,     5,    -1,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    51,
      -1,    -1,    -1,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,     3,     4,     5,    -1,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,     3,     4,     5,    -1,    -1,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    17,    18,    -1,
      -1,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,     3,     4,     5,    -1,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,     3,     4,     5,    -1,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    17,
      18,    -1,    -1,    -1,    22,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,     3,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    22,    -1,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,     3,     4,     5,
      -1,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    22,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,     3,     4,
       5,    -1,    -1,     8,    -1,    10,    11,    12,    13,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,     3,
       4,     5,    -1,    -1,     8,    -1,    10,    11,    12,    13,
      14,    10,    11,    17,    18,    14,    15,    -1,    22,    18,
      24,    25,    -1,    22,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    45,    51,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      59,    60,    61,    62,    63,    10,    11,    -1,    -1,    14,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    37,    38,
      39,    40,    41,    42,    43,    44,    21,    -1,    33,    34,
      35,    36,    27,    28,    29,    30,    31,    32,    -1,    -1,
      45,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    21,    59,    60,    61,    62,    63,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    25,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    31,    32,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      32,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    65,     3,     4,     5,     8,    10,    11,    12,
      13,    14,    17,    18,    22,    24,    25,    33,    34,    35,
      36,    45,    46,    51,    55,    56,    57,    59,    60,    61,
      62,    63,    66,    67,    68,    72,    73,    74,    75,    76,
      77,    78,    81,    82,    83,    84,    85,    89,    92,     0,
      14,    19,    69,    14,    19,    70,    14,    71,     9,    20,
      35,    36,    22,    14,    14,    92,    22,    92,    92,    14,
      14,    92,    20,    10,    11,    15,    20,    20,    49,    22,
      22,    22,    22,    22,     7,    67,    25,    25,    26,    25,
      47,    48,    79,    80,    25,    27,    28,    29,    30,    31,
      32,    37,    38,    39,    40,    41,    42,    43,    44,     9,
      14,    26,     9,    14,    26,     9,    26,    15,    92,    10,
      14,    14,    20,    20,    23,    14,    15,    90,    91,    92,
      92,    54,    54,    54,    14,    58,    74,    76,    92,    66,
      92,    92,    92,    92,    92,    75,    49,    20,    47,    79,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    20,    14,    92,    20,    14,
      15,    14,    21,    21,    23,     3,    10,    16,    23,    21,
      49,    49,    49,    20,    10,    16,    21,    50,    23,    23,
      23,    23,    23,    66,    92,    49,    10,     9,    10,     9,
       9,     9,    25,    14,    21,    91,    25,    49,    52,    86,
      87,    86,    86,    10,    16,    92,    49,    56,    50,    21,
      66,    21,    92,    21,    92,    15,    92,    21,    66,    10,
      11,    15,    50,    53,    86,    88,    50,    50,    21,    10,
      16,    66,    20,    49,    50,    50,    54,    54,    54,    54,
      21,    92,    50,    92,    66,    49,    49,    49,    49,    49,
      21,    21,    50,    66,    66,    66,    66,    66,    49,    50,
      50,    50,    50,    50,    66,    50
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 95 "project.y"
    { printf("\nThe program starts\n"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 106 "project.y"
    {     printf("\nSuccessful Declaration\n");   ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 107 "project.y"
    {     printf("\nSuccessful Assignment\n");    ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 110 "project.y"
    {     printf("\n");                            ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 116 "project.y"
    {     printf("\nSuccessfully Declared Integer.\n");       ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 117 "project.y"
    {     printf("\nSuccessfully Declared Real Number.\n");   ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 118 "project.y"
    {     printf("\nSuccessfully Declared Integer Array.\n"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 119 "project.y"
    {     printf("\nSuccessfully Declared Real Array.\n");    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 120 "project.y"
    {     printf("\nSuccessfully Declared Text.\n");          ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 125 "project.y"
    {
int varID = check_the_variable((yyvsp[(3) - (3)].text)); 
//$3 means VAR
if(varID!=-1)
{
    printf("\n%s is declared before.\n", (yyvsp[(3) - (3)].text));
}
else{
    strcpy(variable[tmp],(yyvsp[(3) - (3)].text));
    DeclaredBefore[tmp]=1;
    tmp++;
}
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 138 "project.y"
    {
//
	        int varID = check_the_variable((yyvsp[(3) - (5)].text));

	if(varID!=-1)
  {
          printf("\n%s is declared before.\n" , (yyvsp[(3) - (5)].text));
  }
  else{
          int x = (int)(yyvsp[(5) - (5)].real) ;
          strcpy( variable[tmp] , (yyvsp[(3) - (5)].text) ); // storing the variable name
          DeclaredBefore[tmp] = 1;    //storing that it's successfully assigned
          recordTheInteger[tmp] = x ; // storing the value
          tmp++;
    }

	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 155 "project.y"
    {
        int varID = check_the_variable((yyvsp[(1) - (1)].text));
    if(varID!=-1)
    {
        printf("\n%s is declared before.\n",(yyvsp[(1) - (1)].text));
    }
    else
    {
        strcpy(variable[tmp],(yyvsp[(1) - (1)].text));
        DeclaredBefore[tmp]=1;
        tmp++;
    }
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 168 "project.y"
    {
        int varID = check_the_variable((yyvsp[(1) - (3)].text));
  if(varID!=-1)
  {
        printf("%s is declared before.\n", (yyvsp[(1) - (3)].text));
  }
  else{

        int x = (int)(yyvsp[(3) - (3)].real) ;
        strcpy( variable[tmp] , (yyvsp[(1) - (3)].text)) ;
        DeclaredBefore[tmp] = 1; // 1 for the integer
        recordTheInteger[tmp] = x ;
        tmp++;

   }

	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 187 "project.y"
    {
    int varID = check_the_variable((yyvsp[(3) - (3)].text));
    if(varID!=-1)
    {
        printf("\n%s is declared before.\n",(yyvsp[(3) - (3)].text));
    }
    else
    {
        strcpy(variable[tmp],(yyvsp[(3) - (3)].text));
        DeclaredBefore[tmp]=2; // 2 for the double
        tmp++;
    }
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 200 "project.y"
    {

        int varID = check_the_variable((yyvsp[(3) - (5)].text));
  if(varID!=-1)
  {
   printf("\n%s is declared before.\n" , (yyvsp[(3) - (5)].text));
  }
  else{
        double x = (yyvsp[(5) - (5)].real) ; // storing the variable
        strcpy( variable[tmp] , (yyvsp[(3) - (5)].text) );
        DeclaredBefore[tmp] = 2;
        recordTheDecimal[tmp] = x ;
        tmp++;
  }
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 215 "project.y"
    {

        int varID = check_the_variable((yyvsp[(1) - (3)].text));
  if(varID!=-1)
  {
        printf("%s is declared before.\n", (yyvsp[(1) - (3)].text));
  }   
  else{

        double x = (yyvsp[(3) - (3)].real) ;
        strcpy( variable[tmp] , (yyvsp[(1) - (3)].text)) ;
        DeclaredBefore[tmp] = 2;
        recordTheDecimal[tmp] = x ;
        tmp++;
      }

  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 232 "project.y"
    {
    int varID = check_the_variable((yyvsp[(1) - (1)].text));
    if(varID!=-1)
    {
        printf("%s is declared before.\n",(yyvsp[(1) - (1)].text));
    }
    else
    {
        strcpy(variable[tmp],(yyvsp[(1) - (1)].text));
        DeclaredBefore[tmp]=2;
        tmp++;
    }
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 247 "project.y"
    {
    int varID = check_the_variable((yyvsp[(3) - (3)].text));
 if(varID!=-1)
    {
        printf("\n%s is declared before.",(yyvsp[(3) - (3)].text));
    }
    else
    {
        strcpy(variable[tmp],(yyvsp[(3) - (3)].text));
        DeclaredBefore[tmp]=3; // 3 for the char
        tmp++;
    }
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 260 "project.y"
    {

        int varID = check_the_variable((yyvsp[(3) - (5)].text));
  if(varID!=-1)
  {
         printf("\n%s is declared before.\n" , (yyvsp[(3) - (5)].text));
  }
  else{

        strcpy( variable[tmp] , (yyvsp[(3) - (5)].text) );
        DeclaredBefore[tmp] = 3;

        recordString[tmp] = (char *) malloc (sizeof(char)*(strlen((yyvsp[(5) - (5)].text)) + 1) );
      
        strcpy(recordString[tmp] , (yyvsp[(5) - (5)].text));
        tmp++;

   }

  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 280 "project.y"
    {

        int varID = check_the_variable((yyvsp[(1) - (3)].text));
  if(varID!=-1)
  {
        printf("\n%s is already declared!\n", (yyvsp[(1) - (3)].text));
  }
  else{
        strcpy( variable[tmp] , (yyvsp[(1) - (3)].text)) ;
        DeclaredBefore[tmp] = 3;
        recordString[tmp] = (char*) malloc (sizeof(char)*(strlen((yyvsp[(3) - (3)].text)) ) );
        strcpy(recordString[tmp] , (yyvsp[(3) - (3)].text));
        tmp++;

   };}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 296 "project.y"
    {
        int varID = check_the_variable((yyvsp[(1) - (1)].text));
    if(varID!=-1)
    {
        printf("\n%s is declared before.\n",(yyvsp[(1) - (1)].text));
    }
    else
    {
        strcpy(variable[tmp],(yyvsp[(1) - (1)].text));
        DeclaredBefore[tmp]=3;
        tmp++;
    }
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 311 "project.y"
    {
  
  int varID = check_the_variable((yyvsp[(3) - (6)].text));
  
  if(varID!=-1)
  {
      printf("\n%s is declared before.\n" , (yyvsp[(3) - (6)].text));
  }
  else{

      strcpy( variable[tmp] , (yyvsp[(3) - (6)].text)) ;
      DeclaredBefore[tmp]=10; // 10 for the int type array
      recordTheInteger[tmp]= intArrSize;
      intArrSize+=(yyvsp[(5) - (6)].integer);
      tmp++;
   }
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 330 "project.y"
    {
  int varID = check_the_variable((yyvsp[(3) - (6)].text));
  if(varID!=-1)
  {
      printf("\n%s is declared before.\n" , (yyvsp[(3) - (6)].text));
  }
  else{

    strcpy( variable[tmp] , (yyvsp[(3) - (6)].text)) ;
    DeclaredBefore[tmp]=11; //11 for the double type array
    recordTheInteger[tmp]= doubleArrSize;
    doubleArrSize+=(yyvsp[(5) - (6)].integer);
    tmp++;
   }
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 350 "project.y"
    {
  int varID = check_the_variable((yyvsp[(1) - (3)].text));
  if(varID==-1){
    printf("\nVariable %s has not been Declared Yet\n", (yyvsp[(1) - (3)].text));
  }
  else {
    recordString[varID] = (char*)malloc(sizeof(char)*(strlen((yyvsp[(3) - (3)].text))));
    strcpy(recordString[varID] , (yyvsp[(3) - (3)].text));
    }
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 361 "project.y"
    {
  
  int varID = check_the_variable((yyvsp[(1) - (3)].text));

  if(varID==-1){
    printf("\nVariable %s not declared.\n", (yyvsp[(1) - (3)].text));
  }
  else {
    if(DeclaredBefore[varID]==1){
       int x = (int)(yyvsp[(3) - (3)].real); //type casting
      recordTheInteger[varID]=x;
  
    }
    else if(DeclaredBefore[varID]==2){
       double x = (yyvsp[(3) - (3)].real) ;
      recordTheDecimal[varID]=x;
      
    }
    
  }
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 384 "project.y"
    {
    int varID = check_the_variable((yyvsp[(1) - (6)].text));
    if(varID==-1)
    {
        printf("\nVariable %s not declared\n",(yyvsp[(1) - (6)].text));
    }
    else{
        if(DeclaredBefore[varID]==10) // int array
        {
            int x = recordTheInteger[varID];
            x+= (yyvsp[(3) - (6)].integer);
            int y= (int) (yyvsp[(6) - (6)].real);
            arr_int[x]=y;
        }
        else if(DeclaredBefore[varID]==11) // double array
        {
            int x= recordTheInteger[varID];
            x+= (yyvsp[(3) - (6)].integer);
            double y =(yyvsp[(6) - (6)].real);
            arr_real[x]=y;
        }
        else{
            printf("\nNot array\n");
        }
    }
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 414 "project.y"
    {
  if( (int)(yyvsp[(3) - (7)].real) ){
    printf("\nInside If Block\n");
  }
;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 419 "project.y"
    {
     printf("\nInside if else Block\n");
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 431 "project.y"
    {
  printf("\nInside elseif Block\n"); 
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 443 "project.y"
    {
  if((yyvsp[(3) - (7)].real))
  {
    printf("while loop will be executed\n");
  }
  else {
    printf("while loop wont be executed\n");
  }

;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 455 "project.y"
    {
  int count = 0;
  printf("\ninside for loop\n");
;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 459 "project.y"
    {
  printf("\nFor loop with range\n");
  int lower=(int)(yyvsp[(4) - (10)].integer);
  int upper=(int)(yyvsp[(6) - (10)].integer);
  int index,count=0;
  for(index=lower;index<=upper;index++)
  {
    count++;
    printf("\nIteration Number %d \n",count);
  }
  printf("\nrange for loop ran %d times \n",count);
;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 475 "project.y"
    {
  if((yyvsp[(7) - (8)].real))
  {
    printf("\nDo while loop\n");
  }
  else {
    printf("\nDo while loop\n");
  }
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 486 "project.y"
    {
   maincase =(int)(yyvsp[(2) - (6)].integer); //type casting
   printf("\nInside switch statement (integer)\n")
;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 490 "project.y"
    {
   recordString[450]=(char*)malloc(sizeof(char)*(strlen((yyvsp[(2) - (6)].text))));
   strcpy(recordString[450] , (yyvsp[(2) - (6)].text));
   printf ("Inside switch statement string");

;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 496 "project.y"
    {
   dmaincase=(yyvsp[(2) - (6)].real);
   printf ("\nInside switch statement (double)\n");

;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 507 "project.y"
    {
 subcase =(int)(yyvsp[(2) - (6)].integer);
 int vall = maincase-subcase;
 if(vall==0)
 {
   printf("\n%d integer matched\n",(yyvsp[(2) - (6)].integer));
 }
  
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 516 "project.y"
    {
 dsubcase = (yyvsp[(2) - (6)].real);
 if(dmaincase==dsubcase)
 {
  printf("\n%lf double matched\n",(yyvsp[(2) - (6)].real));
 }
  
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 524 "project.y"
    {
 
  printf("\nstring matched\n");

;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 530 "project.y"
    {
  printf("\ndefault case\n");
;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 540 "project.y"
    {
    
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 543 "project.y"
    {
    int varID = check_the_variable((yyvsp[(3) - (5)].text));
    if(DeclaredBefore[varID]==-1)
    {
        printf("variable not declared yet\n");
    }
    else if(DeclaredBefore[varID]==1)
    {
        int value;
        scanf("%d", &value);
        recordTheInteger[varID]=value;
         printf("Integer Variable, %s = %d\n", (yyvsp[(3) - (5)].text), recordTheInteger[varID]);
    }
    else if(DeclaredBefore[varID] == 2)  { 
         double value;
        scanf("%lf", &value);
        recordTheDecimal[varID]=value;
         printf("Integer Variable, %s = %lf\n", (yyvsp[(3) - (5)].text), recordTheDecimal[varID]);

}
    else if(DeclaredBefore[varID] == 3)  { 
      char str[100];
      scanf("%c",str);
      int length = strlen(str);
      char* strr = malloc( length + 1 );
    strcpy(recordString[varID],strr);

    printf("Text Variable, %s = %s\n", (yyvsp[(3) - (5)].text),str);
    
}
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 579 "project.y"
    {
    printf("%lf",(yyvsp[(1) - (1)].real));
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 582 "project.y"
    {
    int length = strlen((yyvsp[(1) - (1)].text));
    char* str = malloc(length+1);
    strcpy(str,(yyvsp[(1) - (1)].text));
    printf("%s \n",str);
    free(str);
;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 590 "project.y"
    {
    int varID = check_the_variable((yyvsp[(1) - (1)].text));
    if(DeclaredBefore[varID]==-1)
    {
        printf("variable not declared yet");
    }
    else if(DeclaredBefore[varID]==1)
    {
        int value = recordTheInteger[varID];
        int valll = (int)value;
         printf("Integer Variable, %s = %d", (yyvsp[(1) - (1)].text), valll);
    }
    else if(DeclaredBefore[varID] == 2)  { 

    printf("Real Variable, %s = %lf",(yyvsp[(1) - (1)].text), recordTheDecimal[varID]);
}
    else if(DeclaredBefore[varID] == 3)  { 

    int length = strlen(recordString[varID]);
    char* str = malloc( length + 1 );
    strcpy(str, recordString[varID]);

    printf("Text Variable, %s = %s\n", (yyvsp[(1) - (1)].text),str);
    free(str);
}

;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 622 "project.y"
    { (yyval.real) = (int)(yyvsp[(1) - (1)].integer); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 623 "project.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real)*1.0; ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 624 "project.y"
    { 

  int varID = check_the_variable((yyvsp[(1) - (1)].text));
  
  if(DeclaredBefore[varID] == 0) {printf("\nVaribale not Declared Before.\n");
  }

  else if(DeclaredBefore[varID] == 1)  { (yyval.real) = recordTheInteger[varID]*1.00; }
  else if(DeclaredBefore[varID] == 2)  { (yyval.real) = recordTheDecimal[varID]*1.00 ; }


 ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 636 "project.y"
    {

  int varID = check_the_variable((yyvsp[(1) - (4)].text));
  
  if(varID==-1)
  {
   printf("\n%s is not declared.\n" , (yyvsp[(1) - (4)].text));
  }
  else{
  if(DeclaredBefore[varID]==10){
      int x = recordTheInteger[varID];
      x+=(yyvsp[(3) - (4)].integer);
      (yyval.real) = arr_int[x]*1.0 ;
    }
  else if(DeclaredBefore[varID]==11){
      int x = recordTheInteger[varID];
      x+=(yyvsp[(3) - (4)].integer);
      (yyval.real) = arr_real[x];
    }
  else {
      printf("\nNot Array\n");
    }
  }
;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 660 "project.y"
    {

  int varID = check_the_variable((yyvsp[(1) - (4)].text));
  
  if(varID==-1)
  {
   printf("%s is not declared yet!\n" , (yyvsp[(1) - (4)].text));
  }
  else{
  if(DeclaredBefore[varID]==10){
      int x = recordTheInteger[varID];
      int idx1 = check_the_variable((yyvsp[(3) - (4)].text));
      if(idx1==-1)
      {
        printf("%s is not declared yet!\n" , (yyvsp[(3) - (4)].text));
      }
      else {
        if(DeclaredBefore[idx1]==1){
          x+=recordTheInteger[idx1];
        }
      }
      (yyval.real) = arr_int[x]*1.0 ;
    }
  else if(DeclaredBefore[varID]==11){
      int x = recordTheInteger[varID];
      int idx1 = check_the_variable((yyvsp[(3) - (4)].text));
      if(idx1==-1)
      {
        printf("\n%s is not declared yet!\n" , (yyvsp[(3) - (4)].text));
      }
      else {
        if(DeclaredBefore[idx1]==1){
          x+=recordTheInteger[idx1];
        }
      }
      (yyval.real) = arr_real[x]*1.0 ;
    }
  else {
      printf("Not Array\n");
    }
  }
;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 703 "project.y"
    { (yyval.real) = fabs((yyvsp[(2) - (2)].real))*1.0 ; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 704 "project.y"
    {
  int x = (int)(yyvsp[(2) - (2)].real) ;
  if(!x){ (yyval.real) = 1.0 ; }
  else if(x<0){ printf("\nInvalid Factorial\n"); (yyval.real) = 0.0 ; }
  else{
  long long int factor = 1;
  for(i=2; i<=x; i++)
  {
    factor*=i;
  }
  (yyval.real) = factor;
  printf("\nFactorial is %d",(yyval.real));
  (yyval.real) = factor*1.0;
  }
 ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 719 "project.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) + (yyvsp[(3) - (3)].real); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 720 "project.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) - (yyvsp[(3) - (3)].real); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 721 "project.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) * (yyvsp[(3) - (3)].real); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 722 "project.y"
    {
  if((yyvsp[(3) - (3)].real))
    {
     (yyval.real) = ((yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real))*1.0 ;
    }
  else
    {
     (yyval.real) = 0;
     printf("\n Division by 0 is not Allowed.\n");
    }
 ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 733 "project.y"
    { (yyval.real) = ((int)(yyvsp[(1) - (3)].real) % (int)(yyvsp[(3) - (3)].real))*1.0 ; ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 734 "project.y"
    { (yyval.real) = pow( (int)(yyvsp[(1) - (3)].real) , (int)(yyvsp[(3) - (3)].real) )*1.0 ; ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 736 "project.y"
    {
  
  int varID = check_the_variable((yyvsp[(2) - (2)].text));
  
  if(DeclaredBefore[varID] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(DeclaredBefore[varID] == 1) {

    recordTheInteger[varID] = recordTheInteger[varID] + 1 ;
    (yyval.real) = recordTheInteger[varID]*1.0;
     }
  else if(DeclaredBefore[varID] == 2) { 

    recordTheDecimal[varID] = recordTheDecimal[varID] + 1 ;
    (yyval.real) = recordTheDecimal[varID];
   }
  else if(DeclaredBefore[varID] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 755 "project.y"
    {

  int varID = check_the_variable((yyvsp[(2) - (2)].text));
  
  if(DeclaredBefore[varID] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(DeclaredBefore[varID] == 1) {

    recordTheInteger[varID] = recordTheInteger[varID] - 1 ;
    (yyval.real) = recordTheInteger[varID]*1.0;
     }
  else if(DeclaredBefore[varID] == 2) { 

    recordTheDecimal[varID] = recordTheDecimal[varID] - 1 ;
    (yyval.real) = recordTheDecimal[varID];
   }
  else if(DeclaredBefore[varID] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 775 "project.y"
    {

  int varID = check_the_variable((yyvsp[(1) - (2)].text));
  
  if(DeclaredBefore[varID] == 0) 
  {
    printf("\nVaribale not Declared Before.\n");
  }
  else if(DeclaredBefore[varID] == 1) {

    (yyval.real) = recordTheInteger[varID]*1.0;
    recordTheInteger[varID] = recordTheInteger[varID] + 1 ;
     }
  else if(DeclaredBefore[varID] == 2) { 

    (yyval.real) = recordTheDecimal[varID];
    recordTheDecimal[varID] = recordTheDecimal[varID] + 1 ;
   }
  else if(DeclaredBefore[varID] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 797 "project.y"
    {

  int varID = check_the_variable((yyvsp[(1) - (2)].text));
  
  if(DeclaredBefore[varID] == 0) {printf("\nVaribale not Declared.\n");}
  else if(DeclaredBefore[varID] == 1) {

    (yyval.real) = recordTheInteger[varID]*1.0;
    recordTheInteger[varID] = recordTheInteger[varID] - 1 ;
     }
  else if(DeclaredBefore[varID] == 2) { 

    (yyval.real) = recordTheDecimal[varID];
    recordTheDecimal[varID] = recordTheDecimal[varID] - 1 ;
   }
  else if(DeclaredBefore[varID] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 816 "project.y"
    {
    (yyval.real) = (!((yyvsp[(2) - (2)].real)))*1.0 ;
;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 819 "project.y"
    { 
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x < y)*1.0 ; 
;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 825 "project.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x > y)*1.0 ; 
;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 832 "project.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x <= y)*1.0 ; 
;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 839 "project.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x >= y)*1.0 ; 
;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 846 "project.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x == y)*1.0 ; 
;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 853 "project.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x != y)*1.0 ; 
;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 860 "project.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x || y)*1.0 ; 
;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 867 "project.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x && y)*1.0 ; 
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 874 "project.y"
    { 
  (yyval.real) = (yyvsp[(2) - (3)].real); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 877 "project.y"
    {
        (yyval.real) = sin((yyvsp[(3) - (4)].real));
    ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 880 "project.y"
    {
        (yyval.real) = cos((yyvsp[(3) - (4)].real));
    ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 883 "project.y"
    {
        (yyval.real) = tan((yyvsp[(3) - (4)].real));
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 886 "project.y"
    {
        (yyval.real) = log10((yyvsp[(3) - (4)].real));
    ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 889 "project.y"
    {
        (yyval.real) = log2((yyvsp[(3) - (4)].real));
    ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 894 "project.y"
    {
      printf("function declared");
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 3067 "project.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 904 "project.y"

int yywrap()
{
	return 1;
}

void yyerror(char *s)
{
	fprintf(stderr," error %s\n",s);
}

int main()
{
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
	yyparse();
  return 0;
}

