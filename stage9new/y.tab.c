/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "expl.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "exptree.h"
	#include "sym_table.h"
	#include "codegen.h"
	#include "lsym_table.h"

	#define YYSTYPE struct tnode*

	extern FILE *yyin;

	int yylex();
	int GDeclOver = 0;
	int yyerror(char *);
	struct Lsymbol *LST = NULL;	//LST for each function and main
	int var_type;
	int nextLocation = 1;		//used for local variable binding

#line 87 "y.tab.c" /* yacc.c:339  */

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
    ID = 258,
    READ = 259,
    ASGN = 260,
    NEWLINE = 261,
    WRITE = 262,
    PLUS = 263,
    MUL = 264,
    SUB = 265,
    DIV = 266,
    EVAL = 267,
    IF = 268,
    THEN = 269,
    ELSE = 270,
    WHILE = 271,
    DO = 272,
    ENDWHILE = 273,
    ENDIF = 274,
    LT = 275,
    GT = 276,
    EQ = 277,
    NEQ = 278,
    STMT = 279,
    BREAK = 280,
    CONTINUE = 281,
    BEG = 282,
    END = 283,
    DECL = 284,
    ENDDECL = 285,
    INT = 286,
    BOOL = 287,
    MAIN = 288,
    RET = 289,
    ARGS = 290,
    AND = 291,
    OR = 292,
    LE = 293,
    GE = 294,
    BRKP = 295
  };
#endif
/* Tokens.  */
#define ID 258
#define READ 259
#define ASGN 260
#define NEWLINE 261
#define WRITE 262
#define PLUS 263
#define MUL 264
#define SUB 265
#define DIV 266
#define EVAL 267
#define IF 268
#define THEN 269
#define ELSE 270
#define WHILE 271
#define DO 272
#define ENDWHILE 273
#define ENDIF 274
#define LT 275
#define GT 276
#define EQ 277
#define NEQ 278
#define STMT 279
#define BREAK 280
#define CONTINUE 281
#define BEG 282
#define END 283
#define DECL 284
#define ENDDECL 285
#define INT 286
#define BOOL 287
#define MAIN 288
#define RET 289
#define ARGS 290
#define AND 291
#define OR 292
#define LE 293
#define GE 294
#define BRKP 295

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

#line 218 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   428

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    46,     2,     2,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    31,    34,    35,    38,    39,    42,    45,
      46,    48,    49,    51,    65,    72,    81,    82,    85,   138,
     147,   155,   158,   167,   168,   171,   172,   175,   178,   179,
     182,   192,   213,   218,   225,   234,   250,   258,   274,   278,
     294,   306,   318,   322,   326,   337,   356,   359,   360,   361,
     364,   372,   380,   387,   395,   403,   405,   407,   409,   421,
     448,   456,   464,   472,   480,   488,   495,   502,   509,   532
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "READ", "ASGN", "NEWLINE", "WRITE",
  "PLUS", "MUL", "SUB", "DIV", "EVAL", "IF", "THEN", "ELSE", "WHILE", "DO",
  "ENDWHILE", "ENDIF", "LT", "GT", "EQ", "NEQ", "STMT", "BREAK",
  "CONTINUE", "BEG", "END", "DECL", "ENDDECL", "INT", "BOOL", "MAIN",
  "RET", "ARGS", "AND", "OR", "LE", "GE", "BRKP", "';'", "','", "'['",
  "']'", "'('", "')'", "'{'", "'}'", "$accept", "Program", "GDefblock",
  "decllist", "decl", "type", "varlist", "var", "FdefList", "Fdef",
  "arglist", "arg", "LDefBlock", "LDefList", "LDecl", "LIdList", "LId",
  "Mainblock", "Body", "slist", "stmt", "Args", "expr", "RetStmt", YY_NULLPTR
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
     295,    59,    44,    91,    93,    40,    41,   123,   125
};
# endif

#define YYPACT_NINF -144

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-144)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,    -2,     3,     2,  -144,  -144,  -144,    25,    51,    44,
    -144,    19,    71,     2,  -144,  -144,  -144,  -144,    17,    43,
    -144,    35,    50,  -144,  -144,    57,    51,  -144,    44,    52,
      51,    56,    93,    53,    68,  -144,    64,    66,  -144,  -144,
    -144,    51,    84,    75,  -144,    27,    96,    84,  -144,   121,
      38,  -144,   221,    77,    96,  -144,    45,  -144,  -144,  -144,
       5,    81,    82,    83,    97,    88,   100,   102,   182,  -144,
    -144,    90,  -144,   121,    22,    22,    22,   136,    22,    22,
      22,  -144,  -144,  -144,    22,  -144,   122,  -144,  -144,    28,
      22,  -144,  -144,    22,   303,   231,   -20,   369,   -30,    55,
      94,    98,   325,  -144,    22,    22,    70,   137,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
    -144,   144,    22,   110,    22,   111,   112,   140,   138,  -144,
     263,   -19,  -144,    70,  -144,    70,  -144,   389,   389,   389,
     389,   389,   389,   389,   389,    22,   369,  -144,   283,  -144,
    -144,   221,   221,  -144,  -144,   347,   115,   165,   193,  -144,
     123,   221,   124,   125,  -144,   210,  -144,  -144,   126,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     5,     9,    10,     0,     7,     0,
       1,     9,     0,     0,    17,     3,     4,     6,    14,     0,
      12,     0,     0,    16,     2,     0,    21,     8,     0,     0,
      21,     0,     0,     0,    20,    11,     0,     0,    13,    22,
      15,    21,     0,     0,    19,     0,     0,     0,    24,     0,
       0,    26,     0,     0,     0,    30,     0,    29,    23,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      31,     0,    27,     0,     0,     0,    49,     0,     0,     0,
       0,    42,    43,    46,     0,    33,     0,    18,    28,    58,
       0,    56,    57,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,    32,     0,    49,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,    69,
       0,     0,    55,    50,    51,    52,    54,    60,    61,    64,
      65,    66,    67,    63,    62,     0,    47,    45,     0,    36,
      38,     0,     0,    59,    68,     0,     0,     0,     0,    44,
       0,     0,     0,     0,    37,     0,    40,    41,     0,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,   148,  -144,    11,  -144,   134,  -144,   150,
     -26,  -144,   130,  -144,   120,  -144,   106,   158,   128,  -143,
     -68,    87,   -73,  -144
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     7,     8,    32,    19,    20,    13,    14,
      33,    34,    46,    50,    51,    56,    57,    15,    53,    68,
      69,    96,    97,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,    94,    95,    10,    37,    99,   100,   101,   157,   158,
      74,   102,     9,   124,    12,    44,   125,   106,   165,     9,
     107,     1,   122,   122,    12,    89,   123,   154,     4,     5,
       6,   130,    90,    11,     6,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,    18,    75,   146,
      76,   148,    21,    91,    92,    16,    49,    48,     5,     6,
      25,    49,    26,   108,   109,   110,   111,    93,    58,     5,
       6,   104,   155,   105,    22,   112,   113,   114,   115,   109,
      29,   111,     5,     6,    27,    28,    72,    73,    31,    85,
      85,   116,   117,   118,   119,    30,    39,    85,    36,    40,
      38,   126,   108,   109,   110,   111,   108,   109,   110,   111,
      41,    42,    43,    45,   112,   113,   114,   115,   112,   113,
     114,   115,    47,    52,    55,    70,    77,    78,    79,    81,
     116,   117,   118,   119,   116,   117,   118,   119,    87,    98,
     127,    82,    80,    83,   128,   108,   109,   110,   111,   145,
     103,   147,   149,   150,   151,   152,    17,   112,   113,   114,
     115,   160,    35,    23,   164,   166,   167,   169,    60,    61,
      59,    24,    62,   116,   117,   118,   119,    54,    63,    88,
     161,    64,    71,   132,   162,    60,    61,     0,     0,    62,
      65,    66,   131,     0,     0,    63,    60,    61,    64,     0,
      62,     0,     0,     0,     0,    67,    63,    65,    66,    64,
       0,   163,     0,    60,    61,     0,    84,    62,    65,    66,
       0,     0,    67,    63,    60,    61,    64,     0,    62,   168,
       0,     0,     0,    67,    63,    65,    66,    64,     0,   108,
     109,   110,   111,     0,     0,     0,    65,    66,     0,     0,
      67,   112,   113,   114,   115,     0,     0,     0,     0,     0,
       0,    67,     0,     0,     0,     0,     0,   116,   117,   118,
     119,   108,   109,   110,   111,   121,     0,     0,     0,     0,
       0,     0,     0,   112,   113,   114,   115,     0,     0,     0,
       0,   108,   109,   110,   111,     0,     0,     0,     0,   116,
     117,   118,   119,   112,   113,   114,   115,   153,     0,     0,
       0,   108,   109,   110,   111,     0,     0,     0,     0,   116,
     117,   118,   119,   112,   113,   114,   115,   156,     0,     0,
       0,     0,     0,   108,   109,   110,   111,     0,     0,   116,
     117,   118,   119,     0,   120,   112,   113,   114,   115,     0,
       0,     0,     0,     0,     0,   108,   109,   110,   111,     0,
       0,   116,   117,   118,   119,     0,   129,   112,   113,   114,
     115,     0,     0,     0,     0,     0,     0,   108,   109,   110,
     111,     0,     0,   116,   117,   118,   119,     0,   159,   112,
     113,   114,   115,     0,     0,     0,     0,   108,   109,   110,
     111,     0,     0,     0,     0,   116,   117,   118,   119,    -1,
      -1,    -1,    -1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -1,    -1,    -1,    -1
};

static const yytype_int16 yycheck[] =
{
      68,    74,    75,     0,    30,    78,    79,    80,   151,   152,
       5,    84,     1,    43,     3,    41,    46,    90,   161,     8,
      93,    29,    42,    42,    13,     3,    46,    46,    30,    31,
      32,   104,    10,    31,    32,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     3,    43,   122,
      45,   124,    33,    31,    32,    30,    45,    30,    31,    32,
      43,    50,    45,     8,     9,    10,    11,    45,    30,    31,
      32,    43,   145,    45,     3,    20,    21,    22,    23,     9,
      45,    11,    31,    32,    41,    42,    41,    42,    31,   157,
     158,    36,    37,    38,    39,    45,     3,   165,    46,    46,
      44,    46,     8,     9,    10,    11,     8,     9,    10,    11,
      42,    47,    46,    29,    20,    21,    22,    23,    20,    21,
      22,    23,    47,    27,     3,    48,    45,    45,    45,    41,
      36,    37,    38,    39,    36,    37,    38,    39,    48,     3,
      46,    41,    45,    41,    46,     8,     9,    10,    11,     5,
      28,    41,    41,    41,    14,    17,     8,    20,    21,    22,
      23,    46,    28,    13,    41,    41,    41,    41,     3,     4,
      50,    13,     7,    36,    37,    38,    39,    47,    13,    73,
      15,    16,    54,    46,    19,     3,     4,    -1,    -1,     7,
      25,    26,   105,    -1,    -1,    13,     3,     4,    16,    -1,
       7,    -1,    -1,    -1,    -1,    40,    13,    25,    26,    16,
      -1,    18,    -1,     3,     4,    -1,    34,     7,    25,    26,
      -1,    -1,    40,    13,     3,     4,    16,    -1,     7,    19,
      -1,    -1,    -1,    40,    13,    25,    26,    16,    -1,     8,
       9,    10,    11,    -1,    -1,    -1,    25,    26,    -1,    -1,
      40,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,     8,     9,    10,    11,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    20,    21,    22,    23,    44,    -1,    -1,
      -1,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    20,    21,    22,    23,    44,    -1,    -1,
      -1,    -1,    -1,     8,     9,    10,    11,    -1,    -1,    36,
      37,    38,    39,    -1,    41,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    -1,
      -1,    36,    37,    38,    39,    -1,    41,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,
      11,    -1,    -1,    36,    37,    38,    39,    -1,    41,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    50,    51,    30,    31,    32,    52,    53,    54,
       0,    31,    54,    57,    58,    66,    30,    52,     3,    55,
      56,    33,     3,    58,    66,    43,    45,    41,    42,    45,
      45,    31,    54,    59,    60,    56,    46,    59,    44,     3,
      46,    42,    47,    46,    59,    29,    61,    47,    30,    54,
      62,    63,    27,    67,    61,     3,    64,    65,    30,    63,
       3,     4,     7,    13,    16,    25,    26,    40,    68,    69,
      48,    67,    41,    42,     5,    43,    45,    45,    45,    45,
      45,    41,    41,    41,    34,    69,    72,    48,    65,     3,
      10,    31,    32,    45,    71,    71,    70,    71,     3,    71,
      71,    71,    71,    28,    43,    45,    71,    71,     8,     9,
      10,    11,    20,    21,    22,    23,    36,    37,    38,    39,
      41,    44,    42,    46,    43,    46,    46,    46,    46,    41,
      71,    70,    46,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,     5,    71,    41,    71,    41,
      41,    14,    17,    44,    46,    71,    44,    68,    68,    41,
      46,    15,    19,    18,    41,    68,    41,    41,    19,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    50,    51,    51,    52,    52,    53,    54,
      54,    55,    55,    56,    56,    56,    57,    57,    58,    59,
      59,    59,    60,    61,    61,    62,    62,    63,    64,    64,
      65,    66,    67,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    70,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     3,     2,     2,     1,     3,     1,
       1,     3,     1,     4,     1,     4,     2,     1,     9,     3,
       1,     0,     2,     3,     2,     2,     1,     3,     3,     1,
       1,     8,     4,     2,     1,     4,     5,     8,     5,    10,
       8,     8,     2,     2,     7,     5,     2,     3,     1,     0,
       3,     3,     3,     2,     3,     3,     1,     1,     1,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3
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
#line 30 "expl.y" /* yacc.c:1646  */
    {}
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 31 "expl.y" /* yacc.c:1646  */
    {}
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 34 "expl.y" /* yacc.c:1646  */
    {GDeclOver = 1;}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 35 "expl.y" /* yacc.c:1646  */
    {GDeclOver = 1;}
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 38 "expl.y" /* yacc.c:1646  */
    {}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 39 "expl.y" /* yacc.c:1646  */
    {}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 42 "expl.y" /* yacc.c:1646  */
    {}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 45 "expl.y" /* yacc.c:1646  */
    { var_type = INT;}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 46 "expl.y" /* yacc.c:1646  */
    {var_type = BOOL;}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 48 "expl.y" /* yacc.c:1646  */
    {}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 49 "expl.y" /* yacc.c:1646  */
    {}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 51 "expl.y" /* yacc.c:1646  */
    {
		if (Glookup((yyvsp[-3])->NAME) != NULL){			//if array already exists exit
			printf("Already declared\n");
			exit(-1);
		}
		if ((yyvsp[-1])->TYPE != INT) {
			printf("Type error in int array declaration.\n");	//if array declaration doesnt contain an integer exit
			exit(-1);
		}
		if (var_type == INT)
			Ginstall((yyvsp[-3])->NAME, INTARR, 1*(yyvsp[-1])->VALUE, NULL);		//install integer array
		else
			Ginstall((yyvsp[-3])->NAME, BOOLARR, 1*(yyvsp[-1])->VALUE, NULL);		//install boolean array
	}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 65 "expl.y" /* yacc.c:1646  */
    {
		if (Glookup((yyvsp[0])->NAME) != NULL){			//if variable already exists exit
			printf("Already declared\n");
			exit(-1);
		}
		Ginstall((yyvsp[0])->NAME, var_type, 1, NULL);		//else install the integer variable/boolean variable
	}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 72 "expl.y" /* yacc.c:1646  */
    {				//if function name already exists exit
		if (Glookup((yyvsp[-3])->NAME) != NULL){
			printf("Already declared\n");
			exit(-1);
		}
		Ginstall((yyvsp[-3])->NAME, var_type, -1, (struct Paramstruct*)(yyvsp[-1]));	//install the function with the parameters
	}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 81 "expl.y" /* yacc.c:1646  */
    {}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 82 "expl.y" /* yacc.c:1646  */
    {}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 85 "expl.y" /* yacc.c:1646  */
    {
		//Ginstall($2->NAME, var_type, -1, $3);
		if (Glookup((yyvsp[-7])->NAME) == NULL){			//if function has not yet been declared in global declarations exit
			printf("%s not defined\n", (yyvsp[-7])->NAME);
			exit(-1);
		}
		struct Paramstruct *p = Glookup((yyvsp[-7])->NAME)->paramlist;	//get the parameters list from GST
		struct Paramstruct *t = (struct Paramstruct *)(yyvsp[-5]);	//get the parameters from function definition header
		while (t != NULL && p != NULL){
			printf("%s %s\n", p->name, t->name);
			if (t->type != p->type){			//match the types of both parameter list
				printf("Argument types don't match 1\n");
				exit(0);
			}
			if (strcmp(t->name, p->name) != 0){		//match the names of both parameters
				printf("Argument names don't match\n");
				exit(0);
			}
			t = t->next;
			p = p->next;
		}
		if (t != NULL || p != NULL){			//if number of arguments dont match exit
			printf("Incorrect number of arguments 1\n");
			exit(0);
		}

		int argBinding = -3;	//binding for arguments starts from -3 [BP-3]
		p = (struct Paramstruct*)(yyvsp[-5]);
		while(p != NULL){		// Adding parameters to local symbol table
			LLookup(p->name)->binding = argBinding;		//adding the binding in LST
			printf("%s %d\n", p->name, LLookup(p->name)->binding);
			argBinding--;	
			p = p->next;
		}
		
		struct Lsymbol *l = LST;//find the size of local symbol table
		int size = 0;
		while (l != NULL){
			if (l->binding < 0){
				l = l->next;
				continue;
			}
			size++;
			l = l->next;
		}
		Glookup((yyvsp[-7])->NAME)->size = size;	//size of local symbol table of a function.Space to be pushed in stack
		Glookup((yyvsp[-7])->NAME)->local = LST;	//set current LST as local symbol table for the function
		codeGenStart((yyvsp[-1]), (yyvsp[-7])->NAME); //start codegeneration for the function body
		LST = NULL;	//set LST to null for the next function
		nextLocation = 1;	//reset binding for local variable
	}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 138 "expl.y" /* yacc.c:1646  */
    {			//argument list
		if (GDeclOver){
			Linstall(((struct Paramstruct*)(yyvsp[-2]))->name, ((struct Paramstruct*)(yyvsp[-2]))->type, 1); //install arguments in LST of the function
			nextLocation = 1;
		}
		printf("%s\n", ((struct Paramstruct*)(yyvsp[-2]))->name);	
		((struct Paramstruct*)(yyvsp[-2]))->next=((struct Paramstruct*)(yyvsp[0]));	//forming a linked list
		(yyval)=(yyvsp[-2]);
	}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 147 "expl.y" /* yacc.c:1646  */
    {
		printf("%s\n", ((struct Paramstruct*)(yyvsp[0]))->name);
		if (GDeclOver){
			Linstall(((struct Paramstruct*)(yyvsp[0]))->name, ((struct Paramstruct*)(yyvsp[0]))->type, 1);//installing arguments in LST of the function
			nextLocation = 1;
		}
		(yyval) = (yyvsp[0]);
	}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 155 "expl.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 158 "expl.y" /* yacc.c:1646  */
    {
		struct Paramstruct *p = malloc(sizeof(struct Paramstruct));	//create a parameter node of type paramstruct
		p->name = (yyvsp[0])->NAME;
		p->type = var_type;
		p->next = NULL;
		(yyval) = (struct tnode*)p;
	}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 167 "expl.y" /* yacc.c:1646  */
    {}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 168 "expl.y" /* yacc.c:1646  */
    {}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 171 "expl.y" /* yacc.c:1646  */
    {}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 172 "expl.y" /* yacc.c:1646  */
    {}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 175 "expl.y" /* yacc.c:1646  */
    {}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 178 "expl.y" /* yacc.c:1646  */
    {}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 179 "expl.y" /* yacc.c:1646  */
    {}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 182 "expl.y" /* yacc.c:1646  */
    {
		if (LLookup((yyvsp[0])->NAME) != NULL){		//check if local variable already exists
			printf("Already declared %s", (yyvsp[0])->NAME);
			exit(-1);
		}
		Linstall((yyvsp[0])->NAME,var_type,1);	//install as local variable
		
	}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 192 "expl.y" /* yacc.c:1646  */
    {		//block of main function
		Ginstall("MAIN", INT, -1, NULL);		//install main in GST with no parameters
		struct Lsymbol *l = LST;
		int size = 0;
		while (l != NULL){
			if (l->binding < 0){
				l = l->next;	//find size of LST
				continue;
			}
			size++;
			l = l->next;
		}
		Glookup("MAIN")->size = size;	//space required for local variables to be pushed in  stack
		Glookup("MAIN")->local = LST;	//set LST to local symbol table of main
		codeGenStart((yyvsp[-1]), "MAIN");	//start code generation for main body
		LST = NULL;			//set LST to null once the block is complete
		nextLocation = 1;		//variable for binding is reset to 1
		exit(0);
	}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 213 "expl.y" /* yacc.c:1646  */
    {
		(yyval) = TreeCreate(-1, STMT, -1, NULL, NULL, (yyvsp[-2]), (yyvsp[-1]), NULL);	//create node with Slist and retstmt as subnodes
	}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 218 "expl.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1])->TYPE != -1 || (yyvsp[0])->TYPE != -1){		//if type of slist and stmt is not void
			printf("Type error\n");
			exit(-1);
		}
		(yyval) = TreeCreate(-1, STMT, -1, NULL, NULL, (yyvsp[-1]), (yyvsp[0]), NULL);	//creat node with slist and stmt as subnodes
	}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 225 "expl.y" /* yacc.c:1646  */
    {
     	if((yyvsp[0])->TYPE != -1){		//type checking for stmt
     		printf("Type error\n");
			exit(-1);
     	}
     	(yyval) = (yyvsp[0]);
    }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 234 "expl.y" /* yacc.c:1646  */
    {	//assignment node
			if(Glookup((yyvsp[-3])->NAME) == NULL && LLookup((yyvsp[-3])->NAME) == NULL){	//variable neither in LST nor in GST
				printf("Unallocated variable '%s in asgn'\n", (yyvsp[-3])->NAME);
				exit(0);
			}
			if(LLookup((yyvsp[-3])->NAME) == NULL && Glookup((yyvsp[-3])->NAME)->paramlist != NULL){	//variable not in LST and is a function 
				printf("Cannot assign to function '%s'\n", (yyvsp[-3])->NAME);
				exit(0);
			}
			if(LLookup((yyvsp[-3])->NAME) == NULL && Glookup((yyvsp[-3])->NAME)->type != (yyvsp[-1])->TYPE){	//variable types not matching
				printf("type error: =\n");
				exit(0);
			}
			(yyval) = TreeCreate(-1, ASGN, -1,  (yyvsp[-3])->NAME, NULL, (yyvsp[-3]), (yyvsp[-1]), NULL);	//create node 
		}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 250 "expl.y" /* yacc.c:1646  */
    {		//reading node
			if(Glookup((yyvsp[-2])->NAME ) == NULL && LLookup((yyvsp[-2])->NAME) == NULL){		//neither global nor local variable
				printf("Unallocated variable '%s' in read\n", (yyvsp[-2])->NAME);
				exit(0);
			}
			(yyval) = TreeCreate(-1, READ, -1, (yyvsp[-2])->NAME, NULL, (yyvsp[-2]), NULL, NULL);		//create node
		}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 258 "expl.y" /* yacc.c:1646  */
    {//reading array node
			if(Glookup((yyvsp[-5])->NAME) == NULL && LLookup((yyvsp[-5])->NAME) == NULL){		
				printf("Unallocated variable '%s' in readarr\n", (yyvsp[-5])->NAME);
				exit(0);
			}
			if((yyvsp[-3])->TYPE != INT) {
				printf("type error: ARRREAD[expr]");
				exit(0);
			}
			if(Glookup((yyvsp[-5])->NAME)->type != INTARR && Glookup((yyvsp[-5])->NAME)->type != BOOLARR)	{
				printf("type error: ARRREAD");
				exit(0);
			}
	 	 	(yyval) = TreeCreate(-1, ARRREAD, 0, (yyvsp[-5])->NAME, NULL, (yyvsp[-3]), NULL, NULL);
		}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 274 "expl.y" /* yacc.c:1646  */
    {
			(yyval) = TreeCreate(-1, WRITE, -1, NULL, NULL, (yyvsp[-2]), NULL, NULL);
		}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 278 "expl.y" /* yacc.c:1646  */
    {
			if((yyvsp[-7])->TYPE != BOOL){
				printf("type error: IF\n");
				exit(0);
			}
			if((yyvsp[-4])->TYPE != -1){
				printf("type error: THEN\n");
				exit(0);
			}
			if((yyvsp[-2])->TYPE != -1){
				printf("type error: ELSE\n");
				exit(0);
			}
			(yyval) = TreeCreate(-1, IF, -1, NULL, NULL, (yyvsp[-7]), (yyvsp[-4]), (yyvsp[-2]));
		}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 294 "expl.y" /* yacc.c:1646  */
    {
			if((yyvsp[-5])->TYPE != BOOL){
				printf("type error: IF\n");
				exit(0);
			}
			if((yyvsp[-2])->TYPE != -1){
				printf("type error: THEN\n");
				exit(0);
			}
			(yyval) = TreeCreate(-1, IF, -1, NULL, NULL, (yyvsp[-5]), (yyvsp[-2]), NULL);
		}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 306 "expl.y" /* yacc.c:1646  */
    {
			if((yyvsp[-5])->TYPE != BOOL){
				printf("type error: WHILE\n");
				exit(0);
			}
			if((yyvsp[-2])->TYPE != -1){
				printf("type error: DO\n");
				exit(0);
			}
			(yyval) = TreeCreate(-1, WHILE, -1, NULL, NULL, (yyvsp[-5]), (yyvsp[-2]), NULL);
		}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 318 "expl.y" /* yacc.c:1646  */
    {
			(yyval) = TreeCreate(-1, BREAK, -1, NULL, NULL, NULL, NULL, NULL);
		}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 322 "expl.y" /* yacc.c:1646  */
    {
			(yyval) = TreeCreate(-1, CONTINUE, -1, NULL, NULL, NULL, NULL, NULL);
		}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 326 "expl.y" /* yacc.c:1646  */
    {
			if(Glookup((yyvsp[-6])->NAME) == NULL && LLookup((yyvsp[-6])->NAME) == NULL){
				printf("Unallocated variable '%s' in asgnarr\n", (yyvsp[-6])->NAME);
				exit(0);
			}
			if(!(Glookup((yyvsp[-6])->NAME)->type == INTARR || (yyvsp[-4])->TYPE == INT || (yyvsp[-1])->TYPE == INT) && !(Glookup((yyvsp[-6])->NAME)->type == BOOLARR || (yyvsp[-4])->TYPE == INT || (yyvsp[-1])->TYPE == BOOL)){
				printf("type error: []=\n");
				exit(0);
	 		}
			(yyval) = TreeCreate(-1, ARRASGN, -1, (yyvsp[-6])->NAME, NULL, (yyvsp[-4]), (yyvsp[-1]), NULL);
 		}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 337 "expl.y" /* yacc.c:1646  */
    {
 			struct Paramstruct *p = Glookup((yyvsp[-4])->NAME)->paramlist;
			struct tnode *t = (yyvsp[-2]);
		
			while (t != NULL && p != NULL){
				printf("Val : %d\n", t->Ptr1->VALUE);
				if (t->TYPE != p->type){
					printf("Argument types don't match 2\n");
					exit(0);
				}
				t = t->Arglist;
				p = p->next;
			}
 			if (t != NULL || p != NULL){
 				printf("Incorrect number of arguments 2\n");
 				exit(0);
 			}
 			(yyval) = TreeCreate(-1, FUNCCALL, -1, (yyvsp[-4])->NAME, (yyvsp[-2]), NULL, NULL, NULL);
 		}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 356 "expl.y" /* yacc.c:1646  */
    {(yyval) = TreeCreate(-1, BRKP, -1, NULL, NULL, NULL, NULL, NULL);}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 359 "expl.y" /* yacc.c:1646  */
    {(yyval) = TreeCreate((yyvsp[0])->TYPE, ARGS, -1, NULL, (yyvsp[-2]), (yyvsp[0]), NULL, NULL);}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 360 "expl.y" /* yacc.c:1646  */
    { (yyval) = TreeCreate((yyvsp[0])->TYPE, ARGS, -1, NULL, NULL, (yyvsp[0]), NULL, NULL);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 361 "expl.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 364 "expl.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2])->TYPE != INT || (yyvsp[0])->TYPE != INT){
			printf("type error: +\n");
			exit(0);
		}
		(yyval) = makeOperatorNode(PLUS, INT, (yyvsp[-2]), (yyvsp[0]));
	}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 372 "expl.y" /* yacc.c:1646  */
    {
	 	if((yyvsp[-2])->TYPE != INT || (yyvsp[0])->TYPE != INT){
			printf("type error: *\n");
			exit(0);
		}
		(yyval) = makeOperatorNode(MUL, INT, (yyvsp[-2]), (yyvsp[0]));
	}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 380 "expl.y" /* yacc.c:1646  */
    {
	 	if((yyvsp[-2])->TYPE != INT || (yyvsp[0])->TYPE != INT){
			printf("type error: -\n");
			exit(0);
		}
		(yyval) = makeOperatorNode(SUB, INT, (yyvsp[-2]), (yyvsp[0]));
	}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 387 "expl.y" /* yacc.c:1646  */
    {
	 	if((yyvsp[0])->TYPE != INT){
			printf("type error: unary -\n");
			exit(0);
		}
		(yyval) = makeOperatorNode(SUB, INT, 0, (yyvsp[0]));
	}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 395 "expl.y" /* yacc.c:1646  */
    {
	 	if((yyvsp[-2])->TYPE != INT || (yyvsp[0])->TYPE != INT){
			printf("type error: /\n");
			exit(0);
		}
		(yyval) = makeOperatorNode(DIV, INT, (yyvsp[-2]), (yyvsp[0]));
	}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 403 "expl.y" /* yacc.c:1646  */
    {(yyval) = TreeCreate((yyvsp[-1])->TYPE, EVAL, -1, NULL, NULL, (yyvsp[-1]), NULL, NULL);}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 405 "expl.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 407 "expl.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 409 "expl.y" /* yacc.c:1646  */
    {
	  	if (LLookup((yyvsp[0])->NAME) != NULL)
	 		(yyvsp[0])->TYPE = LLookup((yyvsp[0])->NAME)->type;
	 	else if (Glookup((yyvsp[0])->NAME) != NULL)
	 		(yyvsp[0])->TYPE = Glookup((yyvsp[0])->NAME)->type;
	 	else{
	 		printf("Undeclared variable %s\n", (yyvsp[0])->NAME);
	 		exit(-1);
	 	}
	 	(yyval) = (yyvsp[0]);
	 }
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 421 "expl.y" /* yacc.c:1646  */
    {
	 	if((yyvsp[-1])->TYPE != INT){
	 		printf("type error: []\n");
			exit(0);
	 	}
	 	if (LLookup((yyvsp[-3])->NAME) != NULL){
	 		if(LLookup((yyvsp[-3])->NAME)->type == INTARR){
		 		(yyval) = makeOperatorNode(ARRVAL, INT, (yyvsp[-3]), (yyvsp[-1]));
		 	}
		 	else if(LLookup((yyvsp[-3])->NAME)->type == BOOLARR){
		 		(yyval) = makeOperatorNode(ARRVAL, BOOL, (yyvsp[-3]), (yyvsp[-1]));
	 		}
	 	}
	 	else if (Glookup((yyvsp[-3])->NAME) != NULL){
	 		if(Glookup((yyvsp[-3])->NAME)->type == INTARR){
		 		(yyval) = makeOperatorNode(ARRVAL, INT, (yyvsp[-3]), (yyvsp[-1]));
		 	}
		 	else if(Glookup((yyvsp[-3])->NAME)->type == BOOLARR){
		 		(yyval) = makeOperatorNode(ARRVAL, BOOL, (yyvsp[-3]), (yyvsp[-1]));
	 		}
	 	}
	 	else{
	 		printf("Undeclared array %s\n", (yyvsp[-3])->NAME);
	 		exit(-1);
	 	}
	 }
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 448 "expl.y" /* yacc.c:1646  */
    {
	 	if((yyvsp[-2])->TYPE != INT || (yyvsp[0])->TYPE != INT){
			printf("type error: <\n");
			exit(0);
		}
		 (yyval) = makeOperatorNode(LT, BOOL, (yyvsp[-2]), (yyvsp[0]));
	 }
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 456 "expl.y" /* yacc.c:1646  */
    {
	 	if((yyvsp[-2])->TYPE != INT || (yyvsp[0])->TYPE != INT){
			printf("type error: >\n");
			exit(0);
		}
		 (yyval) = makeOperatorNode(GT, BOOL, (yyvsp[-2]), (yyvsp[0]));
	 }
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 464 "expl.y" /* yacc.c:1646  */
    {
	 	if((yyvsp[-2])->TYPE != INT || (yyvsp[0])->TYPE != INT){
			printf("type error: >\n");
			exit(0);
		}
		 (yyval) = makeOperatorNode(GE, BOOL, (yyvsp[-2]), (yyvsp[0]));
	 }
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 472 "expl.y" /* yacc.c:1646  */
    {
	 	if((yyvsp[-2])->TYPE != INT || (yyvsp[0])->TYPE != INT){
			printf("type error: >\n");
			exit(0);
		}
		 (yyval) = makeOperatorNode(LE, BOOL, (yyvsp[-2]), (yyvsp[0]));
	 }
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 480 "expl.y" /* yacc.c:1646  */
    {
	 	if(!(((yyvsp[-2])->TYPE == INT && (yyvsp[0])->TYPE == INT) || ((yyvsp[-2])->TYPE == BOOL && (yyvsp[0])->TYPE == BOOL))){
			printf("type error: ==\n");
			exit(0);
		}
		 (yyval) = makeOperatorNode(EQ, BOOL, (yyvsp[-2]), (yyvsp[0]));
	 }
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 488 "expl.y" /* yacc.c:1646  */
    {
	 	if((yyvsp[-2])->TYPE != INT || (yyvsp[0])->TYPE != INT){
			printf("type error: !=\n");
			exit(0);
		}
		 (yyval) = makeOperatorNode(NEQ, BOOL, (yyvsp[-2]), (yyvsp[0]));
	 }
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 495 "expl.y" /* yacc.c:1646  */
    {
	 	if((yyvsp[-2])->TYPE != BOOL || (yyvsp[0])->TYPE != BOOL){
			printf("type error: &&\n");
			exit(0);
		}
		 (yyval) = makeOperatorNode(AND, BOOL, (yyvsp[-2]), (yyvsp[0]));
	 }
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 502 "expl.y" /* yacc.c:1646  */
    {
	 	if((yyvsp[-2])->TYPE != BOOL || (yyvsp[0])->TYPE != BOOL){
			printf("type error: ||\n");
			exit(0);
		}
		 (yyval) = makeOperatorNode(OR, BOOL, (yyvsp[-2]), (yyvsp[0]));
	 }
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 509 "expl.y" /* yacc.c:1646  */
    {	//function call
 			struct Paramstruct *p = Glookup((yyvsp[-3])->NAME)->paramlist;//get parameters list from GST
			struct tnode *t = (yyvsp[-1]);
			while (t != NULL && p != NULL){
				if (t->TYPE != p->type){	//check if types in actual and formal arguments match
					printf("Argument types don't match 3\n");
					exit(0);
				}
				t = t->Arglist;
				p = p->next;
			}
 			if (t != NULL || p != NULL){
 				printf("Incorrect number of arguments 3\n");		//if number of arguments dont match
 				if (t != NULL)
 					printf("t\n");
 				else
 					printf("p\n");
 				exit(0);
 			}
 			(yyval) = TreeCreate(Glookup((yyvsp[-3])->NAME)->type, FUNCCALL, -1, (yyvsp[-3])->NAME, (yyvsp[-1]), NULL, NULL, NULL);//create function call node with args as parameters
 		}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 532 "expl.y" /* yacc.c:1646  */
    { (yyval) = TreeCreate((yyvsp[-1])->TYPE, RET, -1, NULL, NULL, (yyvsp[-1]), NULL, NULL); }
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2228 "y.tab.c" /* yacc.c:1646  */
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
#line 535 "expl.y" /* yacc.c:1906  */


int yyerror(char *s){
	printf("Error: %s\n", s);
	return -1;
}

int main(int argc, char **argv){
	FILE *fp;
	fp = fopen(argv[1],"r");
	yyin = fp;
	yyparse();
	return 1;
}
