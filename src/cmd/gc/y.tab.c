/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LLITERAL = 258,
     LASOP = 259,
     LCOLAS = 260,
     LBREAK = 261,
     LCASE = 262,
     LCHAN = 263,
     LCONST = 264,
     LCONTINUE = 265,
     LDDD = 266,
     LDEFAULT = 267,
     LDEFER = 268,
     LELSE = 269,
     LFALL = 270,
     LFOR = 271,
     LFUNC = 272,
     LGO = 273,
     LGOTO = 274,
     LIF = 275,
     LIMPORT = 276,
     LINTERFACE = 277,
     LMAP = 278,
     LNAME = 279,
     LPACKAGE = 280,
     LRANGE = 281,
     LRETURN = 282,
     LSELECT = 283,
     LSTRUCT = 284,
     LSWITCH = 285,
     LTYPE = 286,
     LVAR = 287,
     LANDAND = 288,
     LANDNOT = 289,
     LBODY = 290,
     LCOMM = 291,
     LDEC = 292,
     LEQ = 293,
     LGE = 294,
     LGT = 295,
     LIGNORE = 296,
     LINC = 297,
     LLE = 298,
     LLSH = 299,
     LLT = 300,
     LNE = 301,
     LOROR = 302,
     LRSH = 303,
     NotPackage = 304,
     NotParen = 305,
     PreferToRightParen = 306
   };
#endif
/* Tokens.  */
#define LLITERAL 258
#define LASOP 259
#define LCOLAS 260
#define LBREAK 261
#define LCASE 262
#define LCHAN 263
#define LCONST 264
#define LCONTINUE 265
#define LDDD 266
#define LDEFAULT 267
#define LDEFER 268
#define LELSE 269
#define LFALL 270
#define LFOR 271
#define LFUNC 272
#define LGO 273
#define LGOTO 274
#define LIF 275
#define LIMPORT 276
#define LINTERFACE 277
#define LMAP 278
#define LNAME 279
#define LPACKAGE 280
#define LRANGE 281
#define LRETURN 282
#define LSELECT 283
#define LSTRUCT 284
#define LSWITCH 285
#define LTYPE 286
#define LVAR 287
#define LANDAND 288
#define LANDNOT 289
#define LBODY 290
#define LCOMM 291
#define LDEC 292
#define LEQ 293
#define LGE 294
#define LGT 295
#define LIGNORE 296
#define LINC 297
#define LLE 298
#define LLSH 299
#define LLT 300
#define LNE 301
#define LOROR 302
#define LRSH 303
#define NotPackage 304
#define NotParen 305
#define PreferToRightParen 306




/* Copy the first part of user declarations.  */
#line 20 "go.y"

#include <u.h>
#include <stdio.h>	/* if we don't, bison will, and go.h re-#defines getc */
#include <libc.h>
#include "go.h"

static void fixlbrace(int);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 28 "go.y"
{
	Node*		node;
	NodeList*		list;
	Type*		type;
	Sym*		sym;
	struct	Val	val;
	int		i;
}
/* Line 193 of yacc.c.  */
#line 216 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 229 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  350
/* YYNRULES -- Number of states.  */
#define YYNSTATES  666

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,    64,    55,    56,     2,
      59,    60,    53,    49,    75,    50,    63,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    62,
       2,    65,     2,    73,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    71,     2,    72,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,    51,    68,    70,     2,     2,     2,
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
      45,    46,    47,    48,    57,    58,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    13,    14,    18,    19,    23,
      26,    32,    36,    40,    43,    45,    49,    51,    54,    57,
      62,    63,    65,    66,    71,    72,    74,    76,    78,    80,
      83,    89,    93,    96,   102,   110,   114,   117,   123,   127,
     129,   132,   137,   141,   146,   150,   152,   155,   157,   159,
     162,   164,   168,   172,   176,   179,   182,   186,   192,   198,
     201,   202,   207,   208,   212,   213,   216,   217,   222,   227,
     232,   238,   240,   242,   245,   246,   250,   252,   256,   257,
     258,   259,   268,   269,   275,   276,   279,   280,   283,   284,
     285,   293,   294,   300,   302,   306,   310,   314,   318,   322,
     326,   330,   334,   338,   342,   346,   350,   354,   358,   362,
     366,   370,   374,   378,   382,   384,   387,   390,   393,   396,
     399,   402,   405,   408,   412,   418,   425,   427,   429,   433,
     439,   445,   450,   457,   466,   468,   474,   480,   486,   494,
     496,   497,   501,   503,   508,   510,   515,   517,   521,   523,
     525,   527,   529,   531,   533,   535,   536,   538,   540,   542,
     544,   549,   551,   553,   555,   558,   560,   562,   564,   566,
     568,   572,   574,   576,   578,   581,   583,   585,   587,   589,
     593,   595,   597,   599,   601,   603,   605,   607,   609,   611,
     615,   620,   625,   628,   632,   638,   640,   642,   645,   649,
     655,   659,   665,   669,   673,   679,   688,   694,   703,   709,
     710,   714,   715,   717,   721,   723,   728,   731,   732,   736,
     738,   742,   744,   748,   750,   754,   756,   760,   762,   766,
     770,   773,   778,   782,   788,   794,   796,   800,   802,   805,
     807,   811,   816,   818,   821,   824,   826,   828,   832,   833,
     836,   837,   839,   841,   843,   845,   847,   849,   851,   853,
     855,   856,   861,   863,   866,   869,   872,   875,   878,   881,
     883,   887,   889,   893,   895,   899,   901,   905,   907,   911,
     913,   915,   919,   923,   924,   927,   928,   930,   931,   933,
     934,   936,   937,   939,   940,   942,   943,   945,   946,   948,
     949,   951,   952,   954,   959,   964,   970,   977,   982,   987,
     989,   991,   993,   995,   997,   999,  1001,  1003,  1005,  1009,
    1014,  1020,  1025,  1030,  1033,  1036,  1041,  1045,  1049,  1055,
    1059,  1064,  1068,  1074,  1076,  1077,  1079,  1083,  1085,  1087,
    1090,  1092,  1094,  1100,  1101,  1104,  1106,  1110,  1112,  1116,
    1118
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      77,     0,    -1,    79,    78,    81,   166,    -1,    -1,    25,
     141,    62,    -1,    -1,    80,    86,    88,    -1,    -1,    81,
      82,    62,    -1,    21,    83,    -1,    21,    59,    84,   190,
      60,    -1,    21,    59,    60,    -1,    85,    86,    88,    -1,
      85,    88,    -1,    83,    -1,    84,    62,    83,    -1,     3,
      -1,   141,     3,    -1,    63,     3,    -1,    25,    24,    87,
      62,    -1,    -1,    24,    -1,    -1,    89,   214,    64,    64,
      -1,    -1,    91,    -1,   158,    -1,   181,    -1,     1,    -1,
      32,    93,    -1,    32,    59,   167,   190,    60,    -1,    32,
      59,    60,    -1,    92,    94,    -1,    92,    59,    94,   190,
      60,    -1,    92,    59,    94,    62,   168,   190,    60,    -1,
      92,    59,    60,    -1,    31,    97,    -1,    31,    59,   169,
     190,    60,    -1,    31,    59,    60,    -1,     9,    -1,   185,
     146,    -1,   185,   146,    65,   186,    -1,   185,    65,   186,
      -1,   185,   146,    65,   186,    -1,   185,    65,   186,    -1,
      94,    -1,   185,   146,    -1,   185,    -1,   141,    -1,    96,
     146,    -1,   126,    -1,   126,     4,   126,    -1,   186,    65,
     186,    -1,   186,     5,   186,    -1,   126,    42,    -1,   126,
      37,    -1,     7,   187,    66,    -1,     7,   187,    65,   126,
      66,    -1,     7,   187,     5,   126,    66,    -1,    12,    66,
      -1,    -1,    67,   101,   183,    68,    -1,    -1,    99,   103,
     183,    -1,    -1,   104,   102,    -1,    -1,    35,   106,   183,
      68,    -1,   186,    65,    26,   126,    -1,   186,     5,    26,
     126,    -1,   194,    62,   194,    62,   194,    -1,   194,    -1,
     107,    -1,   108,   105,    -1,    -1,    16,   111,   109,    -1,
     194,    -1,   194,    62,   194,    -1,    -1,    -1,    -1,    20,
     114,   112,   115,   105,   116,   119,   120,    -1,    -1,    14,
      20,   118,   112,   105,    -1,    -1,   119,   117,    -1,    -1,
      14,   100,    -1,    -1,    -1,    30,   122,   112,   123,    35,
     104,    68,    -1,    -1,    28,   125,    35,   104,    68,    -1,
     127,    -1,   126,    47,   126,    -1,   126,    33,   126,    -1,
     126,    38,   126,    -1,   126,    46,   126,    -1,   126,    45,
     126,    -1,   126,    43,   126,    -1,   126,    39,   126,    -1,
     126,    40,   126,    -1,   126,    49,   126,    -1,   126,    50,
     126,    -1,   126,    51,   126,    -1,   126,    52,   126,    -1,
     126,    53,   126,    -1,   126,    54,   126,    -1,   126,    55,
     126,    -1,   126,    56,   126,    -1,   126,    34,   126,    -1,
     126,    44,   126,    -1,   126,    48,   126,    -1,   126,    36,
     126,    -1,   134,    -1,    53,   127,    -1,    56,   127,    -1,
      49,   127,    -1,    50,   127,    -1,    69,   127,    -1,    70,
     127,    -1,    52,   127,    -1,    36,   127,    -1,   134,    59,
      60,    -1,   134,    59,   187,   191,    60,    -1,   134,    59,
     187,    11,   191,    60,    -1,     3,    -1,   143,    -1,   134,
      63,   141,    -1,   134,    63,    59,   135,    60,    -1,   134,
      63,    59,    31,    60,    -1,   134,    71,   126,    72,    -1,
     134,    71,   192,    66,   192,    72,    -1,   134,    71,   192,
      66,   192,    66,   192,    72,    -1,   128,    -1,   149,    59,
     126,   191,    60,    -1,   150,   137,   130,   189,    68,    -1,
     129,    67,   130,   189,    68,    -1,    59,   135,    60,    67,
     130,   189,    68,    -1,   165,    -1,    -1,   126,    66,   133,
      -1,   126,    -1,    67,   130,   189,    68,    -1,   126,    -1,
      67,   130,   189,    68,    -1,   129,    -1,    59,   135,    60,
      -1,   126,    -1,   147,    -1,   146,    -1,    35,    -1,    67,
      -1,   141,    -1,   141,    -1,    -1,   138,    -1,    24,    -1,
     142,    -1,    73,    -1,    74,     3,    63,    24,    -1,   141,
      -1,   138,    -1,    11,    -1,    11,   146,    -1,   155,    -1,
     161,    -1,   153,    -1,   154,    -1,   152,    -1,    59,   146,
      60,    -1,   155,    -1,   161,    -1,   153,    -1,    53,   147,
      -1,   161,    -1,   153,    -1,   154,    -1,   152,    -1,    59,
     146,    60,    -1,   161,    -1,   153,    -1,   153,    -1,   155,
      -1,   161,    -1,   153,    -1,   154,    -1,   152,    -1,   143,
      -1,   143,    63,   141,    -1,    71,   192,    72,   146,    -1,
      71,    11,    72,   146,    -1,     8,   148,    -1,     8,    36,
     146,    -1,    23,    71,   146,    72,   146,    -1,   156,    -1,
     157,    -1,    53,   146,    -1,    36,     8,   146,    -1,    29,
     137,   170,   190,    68,    -1,    29,   137,    68,    -1,    22,
     137,   171,   190,    68,    -1,    22,   137,    68,    -1,    17,
     159,   162,    -1,   141,    59,   179,    60,   163,    -1,    59,
     179,    60,   141,    59,   179,    60,   163,    -1,   200,    59,
     195,    60,   210,    -1,    59,   215,    60,   141,    59,   195,
      60,   210,    -1,    17,    59,   179,    60,   163,    -1,    -1,
      67,   183,    68,    -1,    -1,   151,    -1,    59,   179,    60,
      -1,   161,    -1,   164,   137,   183,    68,    -1,   164,     1,
      -1,    -1,   166,    90,    62,    -1,    93,    -1,   167,    62,
      93,    -1,    95,    -1,   168,    62,    95,    -1,    97,    -1,
     169,    62,    97,    -1,   172,    -1,   170,    62,   172,    -1,
     175,    -1,   171,    62,   175,    -1,   184,   146,   198,    -1,
     174,   198,    -1,    59,   174,    60,   198,    -1,    53,   174,
     198,    -1,    59,    53,   174,    60,   198,    -1,    53,    59,
     174,    60,   198,    -1,    24,    -1,    24,    63,   141,    -1,
     173,    -1,   138,   176,    -1,   173,    -1,    59,   173,    60,
      -1,    59,   179,    60,   163,    -1,   136,    -1,   141,   136,
      -1,   141,   145,    -1,   145,    -1,   177,    -1,   178,    75,
     177,    -1,    -1,   178,   191,    -1,    -1,   100,    -1,    91,
      -1,   181,    -1,     1,    -1,    98,    -1,   110,    -1,   121,
      -1,   124,    -1,   113,    -1,    -1,   144,    66,   182,   180,
      -1,    15,    -1,     6,   140,    -1,    10,   140,    -1,    18,
     128,    -1,    13,   128,    -1,    19,   138,    -1,    27,   193,
      -1,   180,    -1,   183,    62,   180,    -1,   138,    -1,   184,
      75,   138,    -1,   139,    -1,   185,    75,   139,    -1,   126,
      -1,   186,    75,   126,    -1,   135,    -1,   187,    75,   135,
      -1,   131,    -1,   132,    -1,   188,    75,   131,    -1,   188,
      75,   132,    -1,    -1,   188,   191,    -1,    -1,    62,    -1,
      -1,    75,    -1,    -1,   126,    -1,    -1,   186,    -1,    -1,
      98,    -1,    -1,   215,    -1,    -1,   216,    -1,    -1,   217,
      -1,    -1,     3,    -1,    21,    24,     3,    62,    -1,    32,
     200,   202,    62,    -1,     9,   200,    65,   213,    62,    -1,
       9,   200,   202,    65,   213,    62,    -1,    31,   201,   202,
      62,    -1,    17,   160,   162,    62,    -1,   142,    -1,   200,
      -1,   204,    -1,   205,    -1,   206,    -1,   204,    -1,   206,
      -1,   142,    -1,    24,    -1,    71,    72,   202,    -1,    71,
       3,    72,   202,    -1,    23,    71,   202,    72,   202,    -1,
      29,    67,   196,    68,    -1,    22,    67,   197,    68,    -1,
      53,   202,    -1,     8,   203,    -1,     8,    59,   205,    60,
      -1,     8,    36,   202,    -1,    36,     8,   202,    -1,    17,
      59,   195,    60,   210,    -1,   141,   202,   198,    -1,   141,
      11,   202,   198,    -1,   141,   202,   198,    -1,   141,    59,
     195,    60,   210,    -1,   202,    -1,    -1,   211,    -1,    59,
     195,    60,    -1,   202,    -1,     3,    -1,    50,     3,    -1,
     141,    -1,   212,    -1,    59,   212,    49,   212,    60,    -1,
      -1,   214,   199,    -1,   207,    -1,   215,    75,   207,    -1,
     208,    -1,   216,    62,   208,    -1,   209,    -1,   217,    62,
     209,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   133,   139,   150,   150,   165,   166,   169,
     170,   171,   174,   211,   222,   223,   226,   233,   240,   249,
     263,   264,   271,   271,   284,   288,   289,   293,   298,   304,
     308,   312,   316,   322,   328,   334,   339,   343,   347,   353,
     359,   363,   367,   373,   377,   383,   384,   388,   394,   403,
     409,   427,   432,   444,   460,   465,   472,   492,   510,   519,
     538,   537,   552,   551,   582,   585,   592,   591,   602,   608,
     617,   628,   634,   637,   645,   644,   655,   661,   673,   677,
     682,   672,   703,   702,   715,   718,   724,   727,   739,   743,
     738,   761,   760,   776,   777,   781,   785,   789,   793,   797,
     801,   805,   809,   813,   817,   821,   825,   829,   833,   837,
     841,   845,   849,   854,   860,   861,   865,   876,   880,   884,
     888,   893,   897,   907,   911,   916,   924,   928,   929,   940,
     944,   948,   952,   956,   964,   965,   971,   978,   984,   991,
     994,  1001,  1007,  1024,  1031,  1032,  1039,  1040,  1059,  1060,
    1063,  1066,  1070,  1081,  1090,  1096,  1099,  1102,  1109,  1110,
    1116,  1131,  1139,  1151,  1156,  1162,  1163,  1164,  1165,  1166,
    1167,  1173,  1174,  1175,  1176,  1182,  1183,  1184,  1185,  1186,
    1192,  1193,  1196,  1199,  1200,  1201,  1202,  1203,  1206,  1207,
    1220,  1224,  1229,  1234,  1239,  1243,  1244,  1247,  1253,  1260,
    1266,  1273,  1279,  1290,  1304,  1333,  1373,  1398,  1416,  1425,
    1428,  1436,  1440,  1444,  1451,  1457,  1462,  1474,  1477,  1487,
    1488,  1494,  1495,  1501,  1505,  1511,  1512,  1518,  1522,  1528,
    1551,  1556,  1562,  1568,  1575,  1584,  1593,  1608,  1614,  1619,
    1623,  1630,  1643,  1644,  1650,  1656,  1659,  1663,  1669,  1672,
    1681,  1684,  1685,  1689,  1690,  1696,  1697,  1698,  1699,  1700,
    1702,  1701,  1716,  1721,  1725,  1729,  1733,  1737,  1742,  1761,
    1767,  1775,  1779,  1785,  1789,  1795,  1799,  1805,  1809,  1818,
    1822,  1826,  1830,  1836,  1839,  1847,  1848,  1850,  1851,  1854,
    1857,  1860,  1863,  1866,  1869,  1872,  1875,  1878,  1881,  1884,
    1887,  1890,  1893,  1899,  1903,  1907,  1911,  1915,  1919,  1939,
    1946,  1957,  1958,  1959,  1962,  1963,  1966,  1970,  1980,  1984,
    1988,  1992,  1996,  2000,  2004,  2010,  2016,  2024,  2032,  2038,
    2045,  2061,  2079,  2083,  2089,  2092,  2095,  2099,  2109,  2113,
    2128,  2136,  2137,  2149,  2150,  2153,  2157,  2163,  2167,  2173,
    2177
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
const char *yytname[] =
{
  "$end", "error", "$undefined", "LLITERAL", "LASOP", "LCOLAS", "LBREAK",
  "LCASE", "LCHAN", "LCONST", "LCONTINUE", "LDDD", "LDEFAULT", "LDEFER",
  "LELSE", "LFALL", "LFOR", "LFUNC", "LGO", "LGOTO", "LIF", "LIMPORT",
  "LINTERFACE", "LMAP", "LNAME", "LPACKAGE", "LRANGE", "LRETURN",
  "LSELECT", "LSTRUCT", "LSWITCH", "LTYPE", "LVAR", "LANDAND", "LANDNOT",
  "LBODY", "LCOMM", "LDEC", "LEQ", "LGE", "LGT", "LIGNORE", "LINC", "LLE",
  "LLSH", "LLT", "LNE", "LOROR", "LRSH", "'+'", "'-'", "'|'", "'^'", "'*'",
  "'/'", "'%'", "'&'", "NotPackage", "NotParen", "'('", "')'",
  "PreferToRightParen", "';'", "'.'", "'$'", "'='", "':'", "'{'", "'}'",
  "'!'", "'~'", "'['", "']'", "'?'", "'@'", "','", "$accept", "file",
  "package", "loadsys", "@1", "imports", "import", "import_stmt",
  "import_stmt_list", "import_here", "import_package", "import_safety",
  "import_there", "@2", "xdcl", "common_dcl", "lconst", "vardcl",
  "constdcl", "constdcl1", "typedclname", "typedcl", "simple_stmt", "case",
  "compound_stmt", "@3", "caseblock", "@4", "caseblock_list", "loop_body",
  "@5", "range_stmt", "for_header", "for_body", "for_stmt", "@6",
  "if_header", "if_stmt", "@7", "@8", "@9", "elseif", "@10", "elseif_list",
  "else", "switch_stmt", "@11", "@12", "select_stmt", "@13", "expr",
  "uexpr", "pseudocall", "pexpr_no_paren", "start_complit", "keyval",
  "bare_complitexpr", "complitexpr", "pexpr", "expr_or_type",
  "name_or_type", "lbrace", "new_name", "dcl_name", "onew_name", "sym",
  "hidden_importsym", "name", "labelname", "dotdotdot", "ntype",
  "non_expr_type", "non_recvchantype", "convtype", "comptype",
  "fnret_type", "dotname", "othertype", "ptrtype", "recvchantype",
  "structtype", "interfacetype", "xfndcl", "fndcl", "hidden_fndcl",
  "fntype", "fnbody", "fnres", "fnlitdcl", "fnliteral", "xdcl_list",
  "vardcl_list", "constdcl_list", "typedcl_list", "structdcl_list",
  "interfacedcl_list", "structdcl", "packname", "embed", "interfacedcl",
  "indcl", "arg_type", "arg_type_list", "oarg_type_list_ocomma", "stmt",
  "non_dcl_stmt", "@14", "stmt_list", "new_name_list", "dcl_name_list",
  "expr_list", "expr_or_type_list", "keyval_list", "braced_keyval_list",
  "osemi", "ocomma", "oexpr", "oexpr_list", "osimple_stmt",
  "ohidden_funarg_list", "ohidden_structdcl_list",
  "ohidden_interfacedcl_list", "oliteral", "hidden_import",
  "hidden_pkg_importsym", "hidden_pkgtype", "hidden_type",
  "hidden_type_non_recv_chan", "hidden_type_misc", "hidden_type_recv_chan",
  "hidden_type_func", "hidden_funarg", "hidden_structdcl",
  "hidden_interfacedcl", "ohidden_funres", "hidden_funres",
  "hidden_literal", "hidden_constant", "hidden_import_list",
  "hidden_funarg_list", "hidden_structdcl_list",
  "hidden_interfacedcl_list", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,    43,
      45,   124,    94,    42,    47,    37,    38,   304,   305,    40,
      41,   306,    59,    46,    36,    61,    58,   123,   125,    33,
     126,    91,    93,    63,    64,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    78,    80,    79,    81,    81,    82,
      82,    82,    83,    83,    84,    84,    85,    85,    85,    86,
      87,    87,    89,    88,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      93,    93,    93,    94,    94,    95,    95,    95,    96,    97,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
     101,   100,   103,   102,   104,   104,   106,   105,   107,   107,
     108,   108,   108,   109,   111,   110,   112,   112,   114,   115,
     116,   113,   118,   117,   119,   119,   120,   120,   122,   123,
     121,   125,   124,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   128,   128,   128,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   131,   132,   132,   133,   133,   134,   134,   135,   135,
     136,   137,   137,   138,   139,   140,   140,   141,   141,   141,
     142,   143,   144,   145,   145,   146,   146,   146,   146,   146,
     146,   147,   147,   147,   147,   148,   148,   148,   148,   148,
     149,   149,   150,   151,   151,   151,   151,   151,   152,   152,
     153,   153,   153,   153,   153,   153,   153,   154,   155,   156,
     156,   157,   157,   158,   159,   159,   160,   160,   161,   162,
     162,   163,   163,   163,   164,   165,   165,   166,   166,   167,
     167,   168,   168,   169,   169,   170,   170,   171,   171,   172,
     172,   172,   172,   172,   172,   173,   173,   174,   175,   175,
     175,   176,   177,   177,   177,   177,   178,   178,   179,   179,
     180,   180,   180,   180,   180,   181,   181,   181,   181,   181,
     182,   181,   181,   181,   181,   181,   181,   181,   181,   183,
     183,   184,   184,   185,   185,   186,   186,   187,   187,   188,
     188,   188,   188,   189,   189,   190,   190,   191,   191,   192,
     192,   193,   193,   194,   194,   195,   195,   196,   196,   197,
     197,   198,   198,   199,   199,   199,   199,   199,   199,   200,
     201,   202,   202,   202,   203,   203,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   205,   206,   207,
     207,   208,   209,   209,   210,   210,   211,   211,   212,   212,
     212,   213,   213,   214,   214,   215,   215,   216,   216,   217,
     217
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     3,     0,     3,     0,     3,     2,
       5,     3,     3,     2,     1,     3,     1,     2,     2,     4,
       0,     1,     0,     4,     0,     1,     1,     1,     1,     2,
       5,     3,     2,     5,     7,     3,     2,     5,     3,     1,
       2,     4,     3,     4,     3,     1,     2,     1,     1,     2,
       1,     3,     3,     3,     2,     2,     3,     5,     5,     2,
       0,     4,     0,     3,     0,     2,     0,     4,     4,     4,
       5,     1,     1,     2,     0,     3,     1,     3,     0,     0,
       0,     8,     0,     5,     0,     2,     0,     2,     0,     0,
       7,     0,     5,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     5,     6,     1,     1,     3,     5,
       5,     4,     6,     8,     1,     5,     5,     5,     7,     1,
       0,     3,     1,     4,     1,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       4,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     2,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     2,     3,     5,     1,     1,     2,     3,     5,
       3,     5,     3,     3,     5,     8,     5,     8,     5,     0,
       3,     0,     1,     3,     1,     4,     2,     0,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       2,     4,     3,     5,     5,     1,     3,     1,     2,     1,
       3,     4,     1,     2,     2,     1,     1,     3,     0,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     1,     2,     2,     2,     2,     2,     2,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     3,     3,     0,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     4,     4,     5,     6,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       5,     4,     4,     2,     2,     4,     3,     3,     5,     3,
       4,     3,     5,     1,     0,     1,     3,     1,     1,     2,
       1,     1,     5,     0,     2,     1,     3,     1,     3,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     0,     1,     0,     7,     0,    22,   157,
     159,     0,     0,   158,   217,    20,     6,   343,     0,     4,
       0,     0,     0,    21,     0,     0,     0,    16,     0,     0,
       9,    22,     0,     8,    28,   126,   155,     0,    39,   155,
       0,   262,    74,     0,     0,     0,    78,     0,     0,   291,
      91,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   289,     0,    25,     0,   255,   256,
     259,   257,   258,    50,    93,   134,   146,   114,   162,   161,
     127,     0,     0,     0,   182,   195,   196,    26,   214,     0,
     139,    27,     0,    19,     0,     0,     0,     0,     0,     0,
     344,   160,    11,    14,   285,    18,    22,    13,    17,   156,
     263,   153,     0,     0,     0,     0,   161,   188,   192,   178,
     176,   177,   175,   264,   134,     0,   293,   248,     0,   209,
     134,   267,   293,   151,   152,     0,     0,   275,   292,   268,
       0,     0,   293,     0,     0,    36,    48,     0,    29,   273,
     154,     0,   122,   117,   118,   121,   115,   116,     0,     0,
     148,     0,   149,   173,   171,   172,   119,   120,     0,   290,
       0,   218,     0,    32,     0,     0,     0,     0,     0,    55,
       0,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   140,     0,
       0,   289,   260,     0,   140,   216,     0,     0,     0,     0,
     309,     0,     0,   209,     0,     0,   310,     0,     0,    23,
     286,     0,    12,   248,     0,     0,   193,   169,   167,   168,
     165,   166,   197,     0,     0,   294,    72,     0,    75,     0,
      71,   163,   242,   161,   245,   150,   246,   287,     0,   248,
       0,   203,    79,    76,   157,     0,   202,     0,   285,   239,
     227,     0,    64,     0,     0,   200,   271,   285,   225,   237,
     301,     0,    89,    38,   223,   285,    49,    31,   219,   285,
       0,     0,    40,     0,   174,   147,     0,     0,    35,   285,
       0,     0,    51,    95,   110,   113,    96,   100,   101,    99,
     111,    98,    97,    94,   112,   102,   103,   104,   105,   106,
     107,   108,   109,   283,   123,   277,   287,     0,   128,   290,
       0,     0,   287,   283,   254,    60,   252,   251,   269,   253,
       0,    53,    52,   276,     0,     0,     0,     0,   317,     0,
       0,     0,     0,     0,   316,     0,   311,   312,   313,     0,
     345,     0,     0,   295,     0,     0,     0,    15,    10,     0,
       0,     0,   179,   189,    66,    73,     0,     0,   293,   164,
     243,   244,   288,   249,   211,     0,     0,     0,   293,     0,
     235,     0,   248,   238,   286,     0,     0,     0,     0,   301,
       0,     0,   286,     0,   302,   230,     0,   301,     0,   286,
       0,   286,     0,    42,   274,     0,     0,     0,   198,   169,
     167,   168,   166,   140,   191,   190,   286,     0,    44,     0,
     140,   142,   279,   280,   287,     0,   287,   288,     0,     0,
       0,   131,   289,   261,   288,     0,     0,     0,     0,   215,
       0,     0,   324,   314,   315,   295,   299,     0,   297,     0,
     323,   338,     0,     0,   340,   341,     0,     0,     0,     0,
       0,   301,     0,     0,   308,     0,   296,   303,   307,   304,
     211,   170,     0,     0,     0,     0,   247,   248,   161,   212,
     187,   185,   186,   183,   184,   208,   211,   210,    80,    77,
     236,   240,     0,   228,   201,   194,     0,     0,    92,    62,
      65,     0,   232,     0,   301,   226,   199,   272,   229,    64,
     224,    37,   220,    30,    41,     0,   283,    45,   221,   285,
      47,    33,    43,   283,     0,   288,   284,   137,     0,   278,
     124,   130,   129,     0,   135,   136,     0,   270,   326,     0,
       0,   317,     0,   316,     0,   333,   349,   300,     0,     0,
       0,   347,   298,   327,   339,     0,   305,     0,   318,     0,
     301,   329,     0,   346,   334,     0,    69,    68,   293,     0,
     248,   204,    84,   211,     0,    59,     0,   301,   301,   231,
       0,   170,     0,   286,     0,    46,     0,   140,   144,   141,
     281,   282,   125,   289,   132,    61,   325,   334,   295,   322,
       0,     0,   301,   321,     0,     0,   319,   306,   330,   295,
     295,   337,   206,   335,    67,    70,   213,     0,    86,   241,
       0,     0,    56,     0,    63,   234,   233,    90,   138,   222,
      34,   143,   283,     0,   328,     0,   350,   320,   331,   348,
       0,     0,     0,   211,     0,    85,    81,     0,     0,     0,
     133,   334,   342,   334,   336,   205,    82,    87,    58,    57,
     145,   332,   207,   293,     0,    83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     6,     2,     3,    14,    21,    30,   104,    31,
       8,    24,    16,    17,    65,   326,    67,   148,   517,   518,
     144,   145,    68,   499,   327,   437,   500,   576,   387,   365,
     472,   236,   237,   238,    69,   126,   252,    70,   132,   377,
     572,   645,   663,   618,   646,    71,   142,   398,    72,   140,
      73,    74,    75,    76,   313,   422,   423,   589,    77,   315,
     242,   135,    78,   149,   110,   116,    13,    80,    81,   244,
     245,   162,   118,    82,    83,   479,   227,    84,   229,   230,
      85,    86,    87,   129,   213,    88,   251,   485,    89,    90,
      22,   279,   519,   275,   267,   258,   268,   269,   270,   260,
     383,   246,   247,   248,   328,   329,   321,   330,   271,   151,
      92,   316,   424,   425,   221,   373,   170,   139,   253,   465,
     550,   544,   395,   100,   211,   217,   611,   442,   346,   347,
     348,   350,   551,   546,   612,   613,   455,   456,    25,   466,
     552,   547
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -552
static const yytype_int16 yypact[] =
{
    -552,    44,    35,    38,  -552,   199,  -552,    37,  -552,  -552,
    -552,    83,    22,  -552,    66,    79,  -552,  -552,    60,  -552,
     107,    89,   993,  -552,   110,   454,   150,  -552,   155,   179,
    -552,    38,   182,  -552,  -552,  -552,   199,  1760,  -552,   199,
      42,  -552,  -552,   257,    42,   199,  -552,     7,   125,  1606,
    -552,     7,  -552,   394,   407,  1606,  1606,  1606,  1606,  1606,
    1606,  1649,  1606,  1606,  1229,   137,  -552,   506,  -552,  -552,
    -552,  -552,  -552,   874,  -552,  -552,   140,   285,  -552,   142,
    -552,   154,   176,     7,   177,  -552,  -552,  -552,   194,    90,
    -552,  -552,    65,  -552,   186,   -18,   250,   186,   186,   207,
    -552,  -552,  -552,  -552,   220,  -552,  -552,  -552,  -552,  -552,
    -552,  -552,   228,  1768,  1768,  1768,  -552,   229,  -552,  -552,
    -552,  -552,  -552,  -552,    86,   285,  1606,  1735,   245,   246,
     180,  -552,  1606,  -552,  -552,   216,  1768,  2118,   264,  -552,
     287,   436,  1606,   418,  1768,  -552,  -552,   452,  -552,  -552,
    -552,   669,  -552,  -552,  -552,  -552,  -552,  -552,  1692,  1649,
    2118,   286,  -552,    13,  -552,   243,  -552,  -552,   261,  2118,
     280,  -552,   455,  -552,   772,  1606,  1606,  1606,  1606,  -552,
    1606,  1606,  1606,  -552,  1606,  1606,  1606,  1606,  1606,  1606,
    1606,  1606,  1606,  1606,  1606,  1606,  1606,  1606,  -552,  1288,
     549,  1606,  -552,  1606,  -552,  -552,  1156,  1606,  1606,  1606,
    -552,  1251,   199,   246,   317,   361,  -552,  1944,  1944,  -552,
      55,   322,  -552,  1735,   369,  1768,  -552,  -552,  -552,  -552,
    -552,  -552,  -552,   323,   199,  -552,  -552,   349,  -552,    84,
     329,  1768,  -552,  1735,  -552,  -552,  -552,   310,   333,  1735,
    1156,  -552,  -552,   335,   121,   379,  -552,   346,   348,  -552,
    -552,   341,  -552,    16,   166,  -552,  -552,   352,  -552,  -552,
     413,   545,  -552,  -552,  -552,   358,  -552,  -552,  -552,   360,
    1606,   199,   363,  1793,  -552,   356,  1768,  1768,  -552,   373,
    1606,   371,  2118,   846,  -552,  2142,   620,   620,   620,   620,
    -552,   620,   620,   917,  -552,   587,   587,   587,   587,  -552,
    -552,  -552,  -552,  1343,  -552,  -552,    36,  1398,  -552,  2016,
     375,  1068,  1983,  1343,  -552,  -552,  -552,  -552,  -552,  -552,
       0,   264,   264,  2118,  1860,   387,   384,   398,  -552,   403,
     466,  1944,   238,    34,  -552,   417,  -552,  -552,  -552,  1036,
    -552,    -6,   422,   199,   425,   431,   432,  -552,  -552,   439,
    1768,   440,  -552,  -552,  -552,  -552,  1453,  1508,  1606,  -552,
    -552,  -552,  1735,  -552,  1827,   442,   159,   349,  1606,   199,
     433,   445,  1735,  -552,   554,   459,  1768,    85,   379,   413,
     379,   453,   448,   464,  -552,  -552,   199,   413,   473,   199,
     456,   199,   474,   264,  -552,  1606,  1852,  1768,  -552,   143,
     258,   259,   260,  -552,  -552,  -552,   199,   485,   264,  1606,
    -552,  2046,  -552,  -552,   471,   479,   480,  1649,   494,   497,
     498,  -552,  1606,  -552,  -552,   510,   503,  1156,  1068,  -552,
    1944,   530,  -552,  -552,  -552,   199,  1885,  1944,   199,  1944,
    -552,  -552,   569,   305,  -552,  -552,   513,   505,  1944,   238,
    1944,   413,   199,   199,  -552,   523,   509,  -552,  -552,  -552,
    1827,  -552,  1156,  1606,  1606,   525,  -552,  1735,   533,  -552,
    -552,  -552,  -552,  -552,  -552,  -552,  1827,  -552,  -552,  -552,
    -552,  -552,   529,  -552,  -552,  -552,  1649,   528,  -552,  -552,
    -552,   535,  -552,   537,   413,  -552,  -552,  -552,  -552,  -552,
    -552,  -552,  -552,  -552,   264,   540,  1343,  -552,  -552,   539,
     772,  -552,   264,  1343,  1551,  1343,  -552,  -552,   542,  -552,
    -552,  -552,  -552,   165,  -552,  -552,   237,  -552,  -552,   543,
     555,   550,   558,   565,   546,  -552,  -552,   567,   560,  1944,
     566,  -552,   576,  -552,  -552,   595,  -552,  1944,  -552,   583,
     413,  -552,   588,  -552,  1919,   247,  2118,  2118,  1606,   586,
    1735,  -552,  -552,  1827,    80,  -552,  1068,   413,   413,  -552,
     156,   265,   581,   199,   591,   371,   585,  -552,  2118,  -552,
    -552,  -552,  -552,  1606,  -552,  -552,  -552,  1919,   199,  -552,
    1885,  1944,   413,  -552,   199,   305,  -552,  -552,  -552,   199,
     199,  -552,  -552,  -552,  -552,  -552,  -552,   596,   641,  -552,
    1606,  1606,  -552,  1649,   599,  -552,  -552,  -552,  -552,  -552,
    -552,  -552,  1343,   590,  -552,   598,  -552,  -552,  -552,  -552,
     605,   606,   618,  1827,    74,  -552,  -552,  2070,  2094,   613,
    -552,  1919,  -552,  1919,  -552,  -552,  -552,  -552,  -552,  -552,
    -552,  -552,  -552,  1606,   349,  -552
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -552,  -552,  -552,  -552,  -552,  -552,  -552,   -15,  -552,  -552,
     651,  -552,     2,  -552,  -552,   661,  -552,  -131,   -29,   101,
    -552,  -134,  -112,  -552,    41,  -552,  -552,  -552,   178,  -366,
    -552,  -552,  -552,  -552,  -552,  -552,  -139,  -552,  -552,  -552,
    -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,
     674,   303,   307,  -552,  -187,   163,   164,  -552,   327,   -59,
     447,   -16,    81,   414,   655,   376,   103,    20,  -552,   458,
     273,   547,  -552,  -552,  -552,  -552,   -36,   -37,   -31,   -38,
    -552,  -552,  -552,  -552,  -552,   -32,   483,  -468,  -552,  -552,
    -552,  -552,  -552,  -552,  -552,  -552,   315,  -116,  -238,   318,
    -552,   336,  -552,  -213,  -294,   677,  -552,  -242,  -552,   -63,
       6,   213,  -552,  -291,  -236,  -288,  -194,  -552,  -111,  -433,
    -552,  -552,  -301,  -552,   -46,  -552,   190,  -552,   377,   269,
     378,   251,   109,   115,  -551,  -552,  -432,   262,  -552,   504,
    -552,  -552
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -276
static const yytype_int16 yytable[] =
{
     120,   119,   161,   272,   174,   122,   121,   320,   376,   274,
     359,   488,   540,   103,   235,   240,   278,   323,   571,   259,
     235,   555,   385,   164,   163,   389,   391,   433,   428,   165,
     235,   393,   436,   107,   435,   141,   375,   457,   173,   400,
     380,   212,   133,   402,     4,    35,   634,   426,  -182,   214,
      37,   216,   218,   417,   462,   138,    11,   117,    27,   112,
       5,    15,   438,     7,    47,    48,     9,   204,   439,   463,
     207,    51,  -181,   206,   134,   388,   228,   228,   228,     9,
    -182,   231,   231,   231,    19,   620,    18,    20,   502,   366,
     228,   205,   496,  -266,   656,   231,   508,   497,  -266,   228,
     661,    61,   662,    23,   231,   619,   458,   228,   222,   174,
      27,   427,   231,    64,   228,    10,    11,   109,    29,   231,
     109,   164,   163,    26,  -235,   133,   131,   165,    10,    11,
     208,     9,   239,   117,   117,   117,   526,   228,   528,   381,
     209,   325,   231,   289,   537,   621,   622,   117,  -266,   367,
     501,    33,   503,   498,  -266,   623,   117,   134,    27,   209,
     561,   164,   163,   496,   117,   635,    28,   165,   497,   492,
      29,   117,    93,   640,   101,   655,   641,   642,  -178,     9,
      10,    11,   105,  -235,   379,   108,   228,  -265,   228,  -235,
     380,   231,  -265,   231,   117,   536,   136,   210,   210,   171,
     210,   210,  -178,   579,   228,   357,   228,   198,  -153,   231,
    -178,   231,   228,   331,   332,   102,   257,   231,    29,   390,
     202,   438,   266,     9,   627,   582,   516,   487,    10,    11,
     565,   593,   586,   523,   228,   203,  -181,   594,   533,   231,
     254,   451,  -265,   117,  -214,   117,   410,   409,  -265,   228,
     228,   412,   411,  -180,   231,   231,   235,   475,   430,   608,
      11,   117,     9,   117,   569,   510,   235,   489,   259,   117,
     512,   219,    10,    11,   215,   255,   625,   626,  -214,   164,
     163,     9,   220,   584,   256,   165,   403,   223,   452,    10,
      11,   117,   234,  -176,  -177,  -175,   418,   453,   665,   438,
    -179,   638,  -180,   117,   249,   595,   117,   117,   451,   438,
    -214,    10,    11,   250,   344,   614,   127,  -176,  -177,  -175,
     344,   344,   262,   228,  -179,  -176,  -177,  -175,   231,     9,
      10,    11,  -179,   286,   624,   228,   483,   481,   480,   209,
     231,   649,   484,   482,   199,   228,   285,   124,   200,   228,
     231,   130,   287,   520,   231,   452,   201,   617,   152,   153,
     154,   155,   156,   157,   354,   166,   167,   125,   529,   228,
     228,   125,   331,   332,   231,   231,   353,   360,    10,    11,
     117,    12,   358,   362,   364,   372,   226,   232,   233,   164,
     163,   368,   117,   374,   117,   165,    32,   378,    79,   633,
     632,   345,   117,   380,    32,   382,   117,   355,   356,   261,
     384,   514,   111,   386,   392,   111,   394,   276,     9,   128,
     399,   111,   401,   413,   282,   522,   117,   117,   405,   146,
     150,     9,   483,   481,   480,   416,   419,   344,   484,   482,
     228,   432,     9,   150,   344,   231,   445,   291,   483,   481,
     480,   446,   344,   143,   484,   482,   235,   615,   164,   163,
     254,   152,   156,    94,   165,   257,   147,    10,    11,   447,
     448,    95,   254,   266,   449,    96,     9,   507,   273,     9,
      10,    11,   459,   228,   464,    97,    98,   467,   231,   263,
     117,    10,    11,   468,   469,   264,   379,   117,   361,   470,
     471,   263,   486,   243,   265,   491,   117,   264,   509,    10,
      11,   111,   277,   504,   369,   288,   511,   111,    99,   146,
     520,    10,    11,   150,   664,    10,    11,   494,    10,    11,
       9,   450,   506,   228,   513,   483,   481,   480,   231,   461,
     117,   484,   482,   344,   397,   521,   525,   527,   150,   543,
     344,   235,   344,    37,   530,   434,   408,   531,   532,   414,
     415,   344,   112,   344,   529,   172,   340,    47,    48,     9,
     534,   535,   554,     9,    51,   556,   318,   557,   254,    10,
      11,   224,    79,   564,   463,   164,   163,   568,   349,   573,
     117,   165,   570,   117,   575,   577,    32,   578,   114,   243,
     581,   583,   592,   596,   225,   483,   481,   480,   317,  -157,
     363,   484,   482,   255,   599,   597,    64,   598,    10,    11,
     396,   177,    10,    11,  -158,   243,    79,    10,    11,   600,
     538,   185,   601,   408,   603,   189,   545,   548,   604,   553,
     194,   195,   196,   197,   605,   607,   616,   609,   558,   628,
     560,   630,   344,   631,   177,   644,   643,   150,   651,   495,
     344,   438,   650,   117,   185,   652,   653,   344,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    37,   654,   226,
     515,   660,   106,    66,   629,   657,   112,   580,   590,   591,
     370,    47,    48,     9,   123,   404,   352,    79,    51,    91,
     344,   371,   493,   543,   344,   224,   284,   505,   476,   574,
     539,   443,   444,   639,   563,   636,   351,     0,   454,     0,
       0,   559,   114,   137,     0,     0,     0,     0,   225,   349,
       0,     0,     0,     0,   280,   160,     0,     0,   169,   602,
      64,     0,    10,    11,   281,     0,     0,   606,   243,     0,
     478,     0,     0,     0,   344,   490,   344,     0,   243,     0,
     111,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,   111,     0,     0,   146,     0,   150,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,   112,
     545,   637,   150,   585,    47,    48,     9,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,   224,     0,
       0,     0,     0,    79,    79,     0,     0,     0,     0,     0,
       0,   349,   542,     0,   549,   114,     0,     0,     0,   454,
       0,   225,     0,     0,     0,   454,     0,   290,   562,   349,
       0,     0,     0,    64,     0,    10,    11,   281,    79,   292,
     293,   294,   295,   243,   296,   297,   298,     0,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,     0,   160,     0,   319,     0,   322,   175,  -275,
     177,   137,   137,   333,   180,   181,   182,     0,     0,   184,
     185,   186,   187,     0,   189,   190,   191,   192,   193,   194,
     195,   196,   197,     0,     0,     0,     0,   176,   177,     0,
     178,   179,   180,   181,   182,     0,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,     0,     0,     0,     0,     0,     0,     0,     0,  -275,
       0,     0,     0,     0,     0,     0,   243,     0,     0,  -275,
     176,   177,    79,     0,   137,   180,   181,   182,     0,   150,
     184,   185,   186,   187,   137,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   349,     0,   542,     0,     0,     0,
     549,   454,     0,     0,     0,   349,   349,   421,     0,     0,
       0,   160,     0,    -2,    34,     0,    35,   421,     0,    36,
       0,    37,    38,    39,     0,     0,    40,     0,    41,    42,
      43,    44,    45,    46,     0,    47,    48,     9,     0,     0,
      49,    50,    51,    52,    53,    54,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,   137,    56,    57,   334,    58,    59,   460,     0,    60,
       0,     0,    61,   335,     0,   -24,     0,     0,   336,   337,
     338,     0,    62,    63,    64,   339,    10,    11,     0,   324,
       0,    35,   340,     0,    36,  -250,    37,    38,    39,   137,
    -250,    40,     0,    41,    42,   112,    44,    45,    46,   341,
      47,    48,     9,   137,     0,    49,    50,    51,    52,    53,
      54,   160,     0,     0,    55,     0,   169,   343,     0,     0,
      11,     0,     0,     0,     0,     0,     0,    56,    57,     0,
      58,    59,     0,     0,    60,     0,     0,    61,     0,     0,
    -250,     0,     0,     0,     0,   325,  -250,    62,    63,    64,
       0,    10,    11,     0,     0,     0,     0,   566,   567,     0,
       0,     0,     0,     0,     0,     0,     0,   324,     0,    35,
       0,     0,    36,     0,    37,    38,    39,     0,     0,    40,
     160,    41,    42,   112,    44,    45,    46,     0,    47,    48,
       9,     0,     0,    49,    50,    51,    52,    53,    54,     0,
     421,     0,    55,     0,     0,     0,     0,   421,   588,   421,
       0,     0,     0,     0,     0,    56,    57,     0,    58,    59,
       0,     0,    60,     0,     0,    61,     0,     0,  -250,     0,
       0,     0,     0,   325,  -250,    62,    63,    64,     0,    10,
      11,     0,    35,     0,     0,     0,     0,    37,     0,     0,
     168,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,    47,    48,     9,     0,     0,     0,     0,    51,   334,
       0,     0,     0,     0,     0,    55,     0,   169,   335,     0,
       0,     0,     0,   336,   337,   338,     0,     0,    56,    57,
     339,    58,    59,     0,     0,    60,     0,   340,    61,     0,
       0,    35,     0,     0,   647,   648,    37,   160,    62,    63,
      64,     0,    10,    11,   341,   112,   421,     0,     0,     0,
      47,    48,     9,     0,     0,     0,   342,    51,     0,     0,
       0,     0,   343,     0,   158,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,     0,
      58,   159,     0,     0,    60,     0,    35,    61,   314,     0,
       0,    37,     0,     0,     0,     0,     0,    62,    63,    64,
     112,    10,    11,     0,     0,    47,    48,     9,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,     0,    58,    59,     0,     0,    60,
       0,    35,    61,     0,     0,     0,    37,     0,     0,     0,
     420,     0,    62,    63,    64,   112,    10,    11,     0,     0,
      47,    48,     9,     0,     0,     0,     0,    51,     0,   429,
       0,     0,     0,     0,   158,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,     0,
      58,   159,     0,     0,    60,     0,    35,    61,     0,     0,
       0,    37,     0,     0,     0,     0,     0,    62,    63,    64,
     112,    10,    11,     0,     0,    47,    48,     9,     0,   473,
       0,     0,    51,     0,     0,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,     0,    58,    59,     0,     0,    60,
       0,    35,    61,     0,     0,     0,    37,     0,     0,     0,
       0,     0,    62,    63,    64,   112,    10,    11,     0,     0,
      47,    48,     9,     0,   474,     0,     0,    51,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,     0,     0,    56,    57,    37,
      58,    59,     0,     0,    60,     0,     0,    61,   112,     0,
       0,     0,     0,    47,    48,     9,     0,    62,    63,    64,
      51,    10,    11,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    57,     0,    58,    59,     0,     0,    60,     0,    35,
      61,     0,     0,     0,    37,     0,     0,     0,   587,     0,
      62,    63,    64,   112,    10,    11,     0,     0,    47,    48,
       9,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,     0,     0,    56,    57,    37,    58,    59,
       0,     0,    60,     0,     0,    61,   112,     0,     0,     0,
       0,    47,    48,     9,     0,    62,    63,    64,    51,    10,
      11,     0,     0,     0,     0,   158,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     0,     0,    56,    57,
     283,    58,   159,     0,     0,    60,     0,     0,    61,   112,
       0,     0,     0,     0,    47,    48,     9,     0,    62,    63,
      64,    51,    10,    11,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,    37,    58,    59,   241,     0,    60,     0,
       0,    61,   112,     0,     0,     0,     0,    47,    48,     9,
       0,    62,    63,    64,    51,    10,    11,     0,    37,     0,
       0,   224,     0,     0,     0,     0,    37,   112,     0,     0,
       0,     0,    47,    48,     9,   112,     0,     0,   114,    51,
      47,    48,     9,     0,   225,     0,   113,    51,     0,     0,
       0,    37,     0,     0,   224,     0,    64,     0,    10,    11,
     112,     0,     0,   114,     0,    47,    48,     9,     0,   115,
       0,   114,    51,     0,     0,     0,     0,   225,     0,   406,
       0,    64,     0,    10,    11,    37,     0,     0,     0,    64,
       0,    10,    11,     0,   112,     0,   114,     0,     0,    47,
      48,     9,   407,     0,     0,     0,    51,     0,     0,     0,
     283,     0,     0,   224,    64,     0,    10,    11,   334,   112,
       0,     0,     0,     0,    47,    48,     9,   335,     0,     0,
     114,    51,   336,   337,   338,     0,   477,     0,   224,   339,
       0,     0,     0,   334,     0,     0,   440,     0,    64,     0,
      10,    11,   335,     0,     0,   114,     0,   336,   337,   541,
       0,   225,     0,   341,   339,     0,     0,     0,     0,   441,
       0,   340,     0,    64,     0,    10,    11,   334,     0,     0,
       0,   343,     0,     0,    11,     0,   335,     0,   341,     0,
       0,   336,   337,   338,     0,     0,     0,     0,   339,     0,
       0,     0,   334,     0,     0,   340,   343,     0,    10,    11,
       0,   335,     0,     0,     0,     0,   336,   337,   338,     0,
       0,     0,   341,   339,     0,     0,     0,     0,   610,     0,
     340,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,     0,     0,    11,     0,     0,     0,   341,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   343,   176,   177,    11,   178,
       0,   180,   181,   182,     0,     0,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,     0,   178,     0,   180,   181,   182,     0,   434,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,     0,     0,     0,     0,     0,     0,   176,
     177,     0,   178,     0,   180,   181,   182,     0,   431,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   176,   177,     0,   178,     0,   180,   181,
     182,     0,   524,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   176,   177,     0,
     178,     0,   180,   181,   182,     0,   658,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   176,   177,     0,   178,     0,   180,   181,   182,     0,
     659,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   176,   177,     0,     0,     0,
     180,   181,   182,     0,     0,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197
};

static const yytype_int16 yycheck[] =
{
      37,    37,    61,   142,    67,    37,    37,   201,   250,   143,
     223,   377,   445,    28,   126,   126,   147,   204,   486,   135,
     132,   453,   258,    61,    61,   263,   264,   321,   316,    61,
     142,   267,   323,    31,   322,    51,   249,     3,    67,   275,
      24,    59,    35,   279,     0,     3,   597,    11,    35,    95,
       8,    97,    98,   289,    60,    49,    74,    37,     3,    17,
      25,    24,    62,    25,    22,    23,    24,    83,    68,    75,
       5,    29,    59,    89,    67,    59,   113,   114,   115,    24,
      67,   113,   114,   115,    62,     5,     3,    21,   389,     5,
     127,     1,     7,     7,    20,   127,   397,    12,    12,   136,
     651,    59,   653,    24,   136,   573,    72,   144,   106,   172,
       3,    75,   144,    71,   151,    73,    74,    36,    63,   151,
      39,   159,   159,    63,     3,    35,    45,   159,    73,    74,
      65,    24,   126,   113,   114,   115,   424,   174,   426,   255,
      75,    67,   174,   172,   438,    65,    66,   127,    62,    65,
     388,    62,   390,    68,    68,    75,   136,    67,     3,    75,
     461,   199,   199,     7,   144,   598,    59,   199,    12,   382,
      63,   151,    62,   605,    24,   643,   609,   610,    35,    24,
      73,    74,     3,    62,    63,     3,   223,     7,   225,    68,
      24,   223,    12,   225,   174,   437,    71,    94,    95,    62,
      97,    98,    59,   504,   241,   220,   243,    67,    66,   241,
      67,   243,   249,   207,   208,    60,   135,   249,    63,    53,
      66,    62,   141,    24,    68,   516,   413,    68,    73,    74,
     472,    66,   523,   420,   271,    59,    59,    72,   432,   271,
      24,     3,    62,   223,     1,   225,   283,   283,    68,   286,
     287,   283,   283,    59,   286,   287,   368,   368,   317,   560,
      74,   241,    24,   243,   477,   399,   378,   378,   384,   249,
     401,    64,    73,    74,    24,    59,   577,   578,    35,   317,
     317,    24,    62,   519,    68,   317,   280,    59,    50,    73,
      74,   271,    63,    35,    35,    35,   290,    59,   664,    62,
      35,   602,    59,   283,    59,    68,   286,   287,     3,    62,
      67,    73,    74,    67,   211,    68,    59,    59,    59,    59,
     217,   218,    35,   360,    59,    67,    67,    67,   360,    24,
      73,    74,    67,    72,   576,   372,   374,   374,   374,    75,
     372,   632,   374,   374,    59,   382,    60,    40,    63,   386,
     382,    44,    72,   416,   386,    50,    71,   570,    55,    56,
      57,    58,    59,    60,     3,    62,    63,    40,   427,   406,
     407,    44,   366,   367,   406,   407,    59,     8,    73,    74,
     360,     5,    60,    60,    35,    75,   113,   114,   115,   427,
     427,    62,   372,    60,   374,   427,    20,    62,    22,   593,
     587,   211,   382,    24,    28,    59,   386,   217,   218,   136,
      62,   405,    36,    72,    62,    39,     3,   144,    24,    43,
      62,    45,    62,    67,   151,   419,   406,   407,    65,    53,
      54,    24,   470,   470,   470,    62,    65,   334,   470,   470,
     477,    66,    24,    67,   341,   477,    59,   174,   486,   486,
     486,    67,   349,    59,   486,   486,   568,   568,   496,   496,
      24,   158,   159,     9,   496,   384,    59,    73,    74,    71,
      67,    17,    24,   392,     8,    21,    24,   396,    60,    24,
      73,    74,    65,   520,    62,    31,    32,    62,   520,    53,
     470,    73,    74,    62,    62,    59,    63,   477,   225,    60,
      60,    53,    60,   127,    68,    60,   486,    59,    35,    73,
      74,   135,    60,    60,   241,    60,    60,   141,    64,   143,
     583,    73,    74,   147,   663,    73,    74,    68,    73,    74,
      24,   341,    68,   570,    60,   573,   573,   573,   570,   349,
     520,   573,   573,   440,   271,    60,    75,    68,   172,   446,
     447,   663,   449,     8,    60,    75,   283,    60,    60,   286,
     287,   458,    17,   460,   623,    59,    36,    22,    23,    24,
      60,    68,     3,    24,    29,    62,   200,    72,    24,    73,
      74,    36,   206,    60,    75,   623,   623,    62,   212,    60,
     570,   623,    59,   573,    66,    60,   220,    60,    53,   223,
      60,    62,    60,    60,    59,   643,   643,   643,    59,    59,
     234,   643,   643,    59,    68,    60,    71,    59,    73,    74,
      75,    34,    73,    74,    59,   249,   250,    73,    74,    62,
     440,    44,    72,   360,    68,    48,   446,   447,    62,   449,
      53,    54,    55,    56,    49,    62,    60,    59,   458,    68,
     460,    60,   549,    68,    34,    14,    60,   281,    60,   386,
     557,    62,    72,   643,    44,    60,    60,   564,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     8,    60,   406,
     407,    68,    31,    22,   583,   644,    17,   509,   525,   525,
     243,    22,    23,    24,    39,   281,   213,   321,    29,    22,
     597,   243,   384,   600,   601,    36,   159,   392,   372,   496,
     441,   334,   334,   604,   463,   600,   212,    -1,   342,    -1,
      -1,   459,    53,    49,    -1,    -1,    -1,    -1,    59,   353,
      -1,    -1,    -1,    -1,    65,    61,    -1,    -1,    64,   549,
      71,    -1,    73,    74,    75,    -1,    -1,   557,   372,    -1,
     374,    -1,    -1,    -1,   651,   379,   653,    -1,   382,    -1,
     384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   392,    -1,
      -1,    -1,   396,    -1,    -1,   399,    -1,   401,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
     600,   601,   416,   520,    22,    23,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,   437,   438,    -1,    -1,    -1,    -1,    -1,
      -1,   445,   446,    -1,   448,    53,    -1,    -1,    -1,   453,
      -1,    59,    -1,    -1,    -1,   459,    -1,    65,   462,   463,
      -1,    -1,    -1,    71,    -1,    73,    74,    75,   472,   175,
     176,   177,   178,   477,   180,   181,   182,    -1,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,    -1,   199,    -1,   201,    -1,   203,     4,     5,
      34,   207,   208,   209,    38,    39,    40,    -1,    -1,    43,
      44,    45,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    33,    34,    -1,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,   570,    -1,    -1,    75,
      33,    34,   576,    -1,   280,    38,    39,    40,    -1,   583,
      43,    44,    45,    46,   290,    48,    49,    50,    51,    52,
      53,    54,    55,    56,   598,    -1,   600,    -1,    -1,    -1,
     604,   605,    -1,    -1,    -1,   609,   610,   313,    -1,    -1,
      -1,   317,    -1,     0,     1,    -1,     3,   323,    -1,     6,
      -1,     8,     9,    10,    -1,    -1,    13,    -1,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    24,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     366,   367,    49,    50,     8,    52,    53,    11,    -1,    56,
      -1,    -1,    59,    17,    -1,    62,    -1,    -1,    22,    23,
      24,    -1,    69,    70,    71,    29,    73,    74,    -1,     1,
      -1,     3,    36,    -1,     6,     7,     8,     9,    10,   405,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    53,
      22,    23,    24,   419,    -1,    27,    28,    29,    30,    31,
      32,   427,    -1,    -1,    36,    -1,   432,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,    53,    -1,    -1,    56,    -1,    -1,    59,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      -1,    73,    74,    -1,    -1,    -1,    -1,   473,   474,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,    -1,     6,    -1,     8,     9,    10,    -1,    -1,    13,
     496,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      24,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
     516,    -1,    36,    -1,    -1,    -1,    -1,   523,   524,   525,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,    53,
      -1,    -1,    56,    -1,    -1,    59,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    -1,    73,
      74,    -1,     3,    -1,    -1,    -1,    -1,     8,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,     8,
      -1,    -1,    -1,    -1,    -1,    36,    -1,   593,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    -1,    49,    50,
      29,    52,    53,    -1,    -1,    56,    -1,    36,    59,    -1,
      -1,     3,    -1,    -1,   620,   621,     8,   623,    69,    70,
      71,    -1,    73,    74,    53,    17,   632,    -1,    -1,    -1,
      22,    23,    24,    -1,    -1,    -1,    65,    29,    -1,    -1,
      -1,    -1,    71,    -1,    36,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,    53,    -1,    -1,    56,    -1,     3,    59,    60,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      17,    73,    74,    -1,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    52,    53,    -1,    -1,    56,
      -1,     3,    59,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      67,    -1,    69,    70,    71,    17,    73,    74,    -1,    -1,
      22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,    53,    -1,    -1,    56,    -1,     3,    59,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      17,    73,    74,    -1,    -1,    22,    23,    24,    -1,    26,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    52,    53,    -1,    -1,    56,
      -1,     3,    59,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    17,    73,    74,    -1,    -1,
      22,    23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    49,    50,     8,
      52,    53,    -1,    -1,    56,    -1,    -1,    59,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    69,    70,    71,
      29,    73,    74,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    52,    53,    -1,    -1,    56,    -1,     3,
      59,    -1,    -1,    -1,     8,    -1,    -1,    -1,    67,    -1,
      69,    70,    71,    17,    73,    74,    -1,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    49,    50,     8,    52,    53,
      -1,    -1,    56,    -1,    -1,    59,    17,    -1,    -1,    -1,
      -1,    22,    23,    24,    -1,    69,    70,    71,    29,    73,
      74,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    49,    50,
       8,    52,    53,    -1,    -1,    56,    -1,    -1,    59,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    69,    70,
      71,    29,    73,    74,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     8,    52,    53,    11,    -1,    56,    -1,
      -1,    59,    17,    -1,    -1,    -1,    -1,    22,    23,    24,
      -1,    69,    70,    71,    29,    73,    74,    -1,     8,    -1,
      -1,    36,    -1,    -1,    -1,    -1,     8,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    17,    -1,    -1,    53,    29,
      22,    23,    24,    -1,    59,    -1,    36,    29,    -1,    -1,
      -1,     8,    -1,    -1,    36,    -1,    71,    -1,    73,    74,
      17,    -1,    -1,    53,    -1,    22,    23,    24,    -1,    59,
      -1,    53,    29,    -1,    -1,    -1,    -1,    59,    -1,    36,
      -1,    71,    -1,    73,    74,     8,    -1,    -1,    -1,    71,
      -1,    73,    74,    -1,    17,    -1,    53,    -1,    -1,    22,
      23,    24,    59,    -1,    -1,    -1,    29,    -1,    -1,    -1,
       8,    -1,    -1,    36,    71,    -1,    73,    74,     8,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    17,    -1,    -1,
      53,    29,    22,    23,    24,    -1,    59,    -1,    36,    29,
      -1,    -1,    -1,     8,    -1,    -1,    36,    -1,    71,    -1,
      73,    74,    17,    -1,    -1,    53,    -1,    22,    23,    24,
      -1,    59,    -1,    53,    29,    -1,    -1,    -1,    -1,    59,
      -1,    36,    -1,    71,    -1,    73,    74,     8,    -1,    -1,
      -1,    71,    -1,    -1,    74,    -1,    17,    -1,    53,    -1,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,     8,    -1,    -1,    36,    71,    -1,    73,    74,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,
      -1,    -1,    53,    29,    -1,    -1,    -1,    -1,    59,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    74,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    33,    34,    74,    36,
      -1,    38,    39,    40,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    40,    -1,    75,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    40,    -1,    72,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    33,    34,    -1,    36,    -1,    38,    39,
      40,    -1,    66,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    33,    34,    -1,
      36,    -1,    38,    39,    40,    -1,    66,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    33,    34,    -1,    36,    -1,    38,    39,    40,    -1,
      66,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    33,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    77,    79,    80,     0,    25,    78,    25,    86,    24,
      73,    74,   141,   142,    81,    24,    88,    89,     3,    62,
      21,    82,   166,    24,    87,   214,    63,     3,    59,    63,
      83,    85,   141,    62,     1,     3,     6,     8,     9,    10,
      13,    15,    16,    17,    18,    19,    20,    22,    23,    27,
      28,    29,    30,    31,    32,    36,    49,    50,    52,    53,
      56,    59,    69,    70,    71,    90,    91,    92,    98,   110,
     113,   121,   124,   126,   127,   128,   129,   134,   138,   141,
     143,   144,   149,   150,   153,   156,   157,   158,   161,   164,
     165,   181,   186,    62,     9,    17,    21,    31,    32,    64,
     199,    24,    60,    83,    84,     3,    86,    88,     3,   138,
     140,   141,    17,    36,    53,    59,   141,   143,   148,   152,
     153,   154,   161,   140,   128,   134,   111,    59,   141,   159,
     128,   138,   114,    35,    67,   137,    71,   126,   186,   193,
     125,   137,   122,    59,    96,    97,   141,    59,    93,   139,
     141,   185,   127,   127,   127,   127,   127,   127,    36,    53,
     126,   135,   147,   153,   155,   161,   127,   127,    11,   126,
     192,    62,    59,    94,   185,     4,    33,    34,    36,    37,
      38,    39,    40,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    67,    59,
      63,    71,    66,    59,   137,     1,   137,     5,    65,    75,
     142,   200,    59,   160,   200,    24,   200,   201,   200,    64,
      62,   190,    88,    59,    36,    59,   146,   152,   153,   154,
     155,   161,   146,   146,    63,    98,   107,   108,   109,   186,
     194,    11,   136,   141,   145,   146,   177,   178,   179,    59,
      67,   162,   112,   194,    24,    59,    68,   138,   171,   173,
     175,   146,    35,    53,    59,    68,   138,   170,   172,   173,
     174,   184,   112,    60,    97,   169,   146,    60,    93,   167,
      65,    75,   146,     8,   147,    60,    72,    72,    60,    94,
      65,   146,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   130,    60,   135,   187,    59,   141,   126,
     192,   182,   126,   130,     1,    67,    91,   100,   180,   181,
     183,   186,   186,   126,     8,    17,    22,    23,    24,    29,
      36,    53,    65,    71,   142,   202,   204,   205,   206,   141,
     207,   215,   162,    59,     3,   202,   202,    83,    60,   179,
       8,   146,    60,   141,    35,   105,     5,    65,    62,   146,
     136,   145,    75,   191,    60,   179,   183,   115,    62,    63,
      24,   173,    59,   176,    62,   190,    72,   104,    59,   174,
      53,   174,    62,   190,     3,   198,    75,   146,   123,    62,
     190,    62,   190,   186,   139,    65,    36,    59,   146,   152,
     153,   154,   161,    67,   146,   146,    62,   190,   186,    65,
      67,   126,   131,   132,   188,   189,    11,    75,   191,    31,
     135,    72,    66,   180,    75,   191,   189,   101,    62,    68,
      36,    59,   203,   204,   206,    59,    67,    71,    67,     8,
     202,     3,    50,    59,   141,   212,   213,     3,    72,    65,
      11,   202,    60,    75,    62,   195,   215,    62,    62,    62,
      60,    60,   106,    26,    26,   194,   177,    59,   141,   151,
     152,   153,   154,   155,   161,   163,    60,    68,   105,   194,
     141,    60,   179,   175,    68,   146,     7,    12,    68,    99,
     102,   174,   198,   174,    60,   172,    68,   138,   198,    35,
      97,    60,    93,    60,   186,   146,   130,    94,    95,   168,
     185,    60,   186,   130,    66,    75,   191,    68,   191,   135,
      60,    60,    60,   192,    60,    68,   183,   180,   202,   205,
     195,    24,   141,   142,   197,   202,   209,   217,   202,   141,
     196,   208,   216,   202,     3,   212,    62,    72,   202,   213,
     202,   198,   141,   207,    60,   183,   126,   126,    62,   179,
      59,   163,   116,    60,   187,    66,   103,    60,    60,   198,
     104,    60,   189,    62,   190,   146,   189,    67,   126,   133,
     131,   132,    60,    66,    72,    68,    60,    60,    59,    68,
      62,    72,   202,    68,    62,    49,   202,    62,   198,    59,
      59,   202,   210,   211,    68,   194,    60,   179,   119,   163,
       5,    65,    66,    75,   183,   198,   198,    68,    68,    95,
      60,    68,   130,   192,   210,   195,   209,   202,   198,   208,
     212,   195,   195,    60,    14,   117,   120,   126,   126,   189,
      72,    60,    60,    60,    60,   163,    20,   100,    66,    66,
      68,   210,   210,   118,   112,   105
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar, yystate;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 128 "go.y"
    {
		xtop = concat(xtop, (yyvsp[(4) - (4)].list));
	}
    break;

  case 3:
#line 134 "go.y"
    {
		prevlineno = lineno;
		yyerror("package statement must be first");
		errorexit();
	}
    break;

  case 4:
#line 140 "go.y"
    {
		mkpackage((yyvsp[(2) - (3)].sym)->name);
	}
    break;

  case 5:
#line 150 "go.y"
    {
		importpkg = runtimepkg;

		if(debug['A'])
			cannedimports("runtime.builtin", "package runtime\n\n$$\n\n");
		else
			cannedimports("runtime.builtin", runtimeimport);
		curio.importsafe = 1;
	}
    break;

  case 6:
#line 161 "go.y"
    {
		importpkg = nil;
	}
    break;

  case 12:
#line 175 "go.y"
    {
		Pkg *ipkg;
		Sym *my;
		Node *pack;
		
		ipkg = importpkg;
		my = importmyname;
		importpkg = nil;
		importmyname = S;

		if(my == nil)
			my = lookup(ipkg->name);

		pack = nod(OPACK, N, N);
		pack->sym = my;
		pack->pkg = ipkg;
		pack->lineno = (yyvsp[(1) - (3)].i);

		if(my->name[0] == '.') {
			importdot(ipkg, pack);
			break;
		}
		if(strcmp(my->name, "init") == 0) {
			yyerror("cannot import package as init - init must be a func");
			break;
		}
		if(my->name[0] == '_' && my->name[1] == '\0')
			break;
		if(my->def) {
			lineno = (yyvsp[(1) - (3)].i);
			redeclare(my, "as imported package name");
		}
		my->def = pack;
		my->lastlineno = (yyvsp[(1) - (3)].i);
		my->block = 1;	// at top level
	}
    break;

  case 13:
#line 212 "go.y"
    {
		// When an invalid import path is passed to importfile,
		// it calls yyerror and then sets up a fake import with
		// no package statement. This allows us to test more
		// than one invalid import statement in a single file.
		if(nerrors == 0)
			fatal("phase error in import");
	}
    break;

  case 16:
#line 227 "go.y"
    {
		// import with original name
		(yyval.i) = parserline();
		importmyname = S;
		importfile(&(yyvsp[(1) - (1)].val), (yyval.i));
	}
    break;

  case 17:
#line 234 "go.y"
    {
		// import with given name
		(yyval.i) = parserline();
		importmyname = (yyvsp[(1) - (2)].sym);
		importfile(&(yyvsp[(2) - (2)].val), (yyval.i));
	}
    break;

  case 18:
#line 241 "go.y"
    {
		// import into my name space
		(yyval.i) = parserline();
		importmyname = lookup(".");
		importfile(&(yyvsp[(2) - (2)].val), (yyval.i));
	}
    break;

  case 19:
#line 250 "go.y"
    {
		if(importpkg->name == nil) {
			importpkg->name = (yyvsp[(2) - (4)].sym)->name;
			pkglookup((yyvsp[(2) - (4)].sym)->name, nil)->npkg++;
		} else if(strcmp(importpkg->name, (yyvsp[(2) - (4)].sym)->name) != 0)
			yyerror("conflicting names %s and %s for package \"%Z\"", importpkg->name, (yyvsp[(2) - (4)].sym)->name, importpkg->path);
		importpkg->direct = 1;
		importpkg->safe = curio.importsafe;

		if(safemode && !curio.importsafe)
			yyerror("cannot import unsafe package \"%Z\"", importpkg->path);
	}
    break;

  case 21:
#line 265 "go.y"
    {
		if(strcmp((yyvsp[(1) - (1)].sym)->name, "safe") == 0)
			curio.importsafe = 1;
	}
    break;

  case 22:
#line 271 "go.y"
    {
		defercheckwidth();
	}
    break;

  case 23:
#line 275 "go.y"
    {
		resumecheckwidth();
		unimportfile();
	}
    break;

  case 24:
#line 284 "go.y"
    {
		yyerror("empty top-level declaration");
		(yyval.list) = nil;
	}
    break;

  case 26:
#line 290 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 27:
#line 294 "go.y"
    {
		yyerror("non-declaration statement outside function body");
		(yyval.list) = nil;
	}
    break;

  case 28:
#line 299 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 29:
#line 305 "go.y"
    {
		(yyval.list) = (yyvsp[(2) - (2)].list);
	}
    break;

  case 30:
#line 309 "go.y"
    {
		(yyval.list) = (yyvsp[(3) - (5)].list);
	}
    break;

  case 31:
#line 313 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 32:
#line 317 "go.y"
    {
		(yyval.list) = (yyvsp[(2) - (2)].list);
		iota = -100000;
		lastconst = nil;
	}
    break;

  case 33:
#line 323 "go.y"
    {
		(yyval.list) = (yyvsp[(3) - (5)].list);
		iota = -100000;
		lastconst = nil;
	}
    break;

  case 34:
#line 329 "go.y"
    {
		(yyval.list) = concat((yyvsp[(3) - (7)].list), (yyvsp[(5) - (7)].list));
		iota = -100000;
		lastconst = nil;
	}
    break;

  case 35:
#line 335 "go.y"
    {
		(yyval.list) = nil;
		iota = -100000;
	}
    break;

  case 36:
#line 340 "go.y"
    {
		(yyval.list) = list1((yyvsp[(2) - (2)].node));
	}
    break;

  case 37:
#line 344 "go.y"
    {
		(yyval.list) = (yyvsp[(3) - (5)].list);
	}
    break;

  case 38:
#line 348 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 39:
#line 354 "go.y"
    {
		iota = 0;
	}
    break;

  case 40:
#line 360 "go.y"
    {
		(yyval.list) = variter((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node), nil);
	}
    break;

  case 41:
#line 364 "go.y"
    {
		(yyval.list) = variter((yyvsp[(1) - (4)].list), (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].list));
	}
    break;

  case 42:
#line 368 "go.y"
    {
		(yyval.list) = variter((yyvsp[(1) - (3)].list), nil, (yyvsp[(3) - (3)].list));
	}
    break;

  case 43:
#line 374 "go.y"
    {
		(yyval.list) = constiter((yyvsp[(1) - (4)].list), (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].list));
	}
    break;

  case 44:
#line 378 "go.y"
    {
		(yyval.list) = constiter((yyvsp[(1) - (3)].list), N, (yyvsp[(3) - (3)].list));
	}
    break;

  case 46:
#line 385 "go.y"
    {
		(yyval.list) = constiter((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node), nil);
	}
    break;

  case 47:
#line 389 "go.y"
    {
		(yyval.list) = constiter((yyvsp[(1) - (1)].list), N, nil);
	}
    break;

  case 48:
#line 395 "go.y"
    {
		// different from dclname because the name
		// becomes visible right here, not at the end
		// of the declaration.
		(yyval.node) = typedcl0((yyvsp[(1) - (1)].sym));
	}
    break;

  case 49:
#line 404 "go.y"
    {
		(yyval.node) = typedcl1((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), 1);
	}
    break;

  case 50:
#line 410 "go.y"
    {
		(yyval.node) = (yyvsp[(1) - (1)].node);

		// These nodes do not carry line numbers.
		// Since a bare name used as an expression is an error,
		// introduce a wrapper node to give the correct line.
		switch((yyval.node)->op) {
		case ONAME:
		case ONONAME:
		case OTYPE:
		case OPACK:
		case OLITERAL:
			(yyval.node) = nod(OPAREN, (yyval.node), N);
			(yyval.node)->implicit = 1;
			break;
		}
	}
    break;

  case 51:
#line 428 "go.y"
    {
		(yyval.node) = nod(OASOP, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		(yyval.node)->etype = (yyvsp[(2) - (3)].i);			// rathole to pass opcode
	}
    break;

  case 52:
#line 433 "go.y"
    {
		if((yyvsp[(1) - (3)].list)->next == nil && (yyvsp[(3) - (3)].list)->next == nil) {
			// simple
			(yyval.node) = nod(OAS, (yyvsp[(1) - (3)].list)->n, (yyvsp[(3) - (3)].list)->n);
			break;
		}
		// multiple
		(yyval.node) = nod(OAS2, N, N);
		(yyval.node)->list = (yyvsp[(1) - (3)].list);
		(yyval.node)->rlist = (yyvsp[(3) - (3)].list);
	}
    break;

  case 53:
#line 445 "go.y"
    {
		if((yyvsp[(3) - (3)].list)->n->op == OTYPESW) {
			(yyval.node) = nod(OTYPESW, N, (yyvsp[(3) - (3)].list)->n->right);
			if((yyvsp[(3) - (3)].list)->next != nil)
				yyerror("expr.(type) must be alone in list");
			if((yyvsp[(1) - (3)].list)->next != nil)
				yyerror("argument count mismatch: %d = %d", count((yyvsp[(1) - (3)].list)), 1);
			else if(((yyvsp[(1) - (3)].list)->n->op != ONAME && (yyvsp[(1) - (3)].list)->n->op != OTYPE && (yyvsp[(1) - (3)].list)->n->op != ONONAME) || isblank((yyvsp[(1) - (3)].list)->n))
				yyerror("invalid variable name %N in type switch", (yyvsp[(1) - (3)].list)->n);
			else
				(yyval.node)->left = dclname((yyvsp[(1) - (3)].list)->n->sym);  // it's a colas, so must not re-use an oldname.
			break;
		}
		(yyval.node) = colas((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list), (yyvsp[(2) - (3)].i));
	}
    break;

  case 54:
#line 461 "go.y"
    {
		(yyval.node) = nod(OASOP, (yyvsp[(1) - (2)].node), nodintconst(1));
		(yyval.node)->etype = OADD;
	}
    break;

  case 55:
#line 466 "go.y"
    {
		(yyval.node) = nod(OASOP, (yyvsp[(1) - (2)].node), nodintconst(1));
		(yyval.node)->etype = OSUB;
	}
    break;

  case 56:
#line 473 "go.y"
    {
		Node *n, *nn;

		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		(yyval.node)->list = (yyvsp[(2) - (3)].list);
		if(typesw != N && typesw->right != N && (n=typesw->right->left) != N) {
			// type switch - declare variable
			nn = newname(n->sym);
			declare(nn, dclcontext);
			(yyval.node)->nname = nn;

			// keep track of the instances for reporting unused
			nn->defn = typesw->right;
		}
	}
    break;

  case 57:
#line 493 "go.y"
    {
		Node *n;

		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		if((yyvsp[(2) - (5)].list)->next == nil)
			n = nod(OAS, (yyvsp[(2) - (5)].list)->n, (yyvsp[(4) - (5)].node));
		else {
			n = nod(OAS2, N, N);
			n->list = (yyvsp[(2) - (5)].list);
			n->rlist = list1((yyvsp[(4) - (5)].node));
		}
		(yyval.node)->list = list1(n);
	}
    break;

  case 58:
#line 511 "go.y"
    {
		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		(yyval.node)->list = list1(colas((yyvsp[(2) - (5)].list), list1((yyvsp[(4) - (5)].node)), (yyvsp[(3) - (5)].i)));
	}
    break;

  case 59:
#line 520 "go.y"
    {
		Node *n, *nn;

		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		if(typesw != N && typesw->right != N && (n=typesw->right->left) != N) {
			// type switch - declare variable
			nn = newname(n->sym);
			declare(nn, dclcontext);
			(yyval.node)->nname = nn;

			// keep track of the instances for reporting unused
			nn->defn = typesw->right;
		}
	}
    break;

  case 60:
#line 538 "go.y"
    {
		markdcl();
	}
    break;

  case 61:
#line 542 "go.y"
    {
		if((yyvsp[(3) - (4)].list) == nil)
			(yyval.node) = nod(OEMPTY, N, N);
		else
			(yyval.node) = liststmt((yyvsp[(3) - (4)].list));
		popdcl();
	}
    break;

  case 62:
#line 552 "go.y"
    {
		// If the last token read by the lexer was consumed
		// as part of the case, clear it (parser has cleared yychar).
		// If the last token read by the lexer was the lookahead
		// leave it alone (parser has it cached in yychar).
		// This is so that the stmt_list action doesn't look at
		// the case tokens if the stmt_list is empty.
		yylast = yychar;
	}
    break;

  case 63:
#line 562 "go.y"
    {
		int last;

		// This is the only place in the language where a statement
		// list is not allowed to drop the final semicolon, because
		// it's the only place where a statement list is not followed 
		// by a closing brace.  Handle the error for pedantry.

		// Find the final token of the statement list.
		// yylast is lookahead; yyprev is last of stmt_list
		last = yyprev;

		if(last > 0 && last != ';' && yychar != '}')
			yyerror("missing statement after label");
		(yyval.node) = (yyvsp[(1) - (3)].node);
		(yyval.node)->nbody = (yyvsp[(3) - (3)].list);
		popdcl();
	}
    break;

  case 64:
#line 582 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 65:
#line 586 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
	}
    break;

  case 66:
#line 592 "go.y"
    {
		markdcl();
	}
    break;

  case 67:
#line 596 "go.y"
    {
		(yyval.list) = (yyvsp[(3) - (4)].list);
		popdcl();
	}
    break;

  case 68:
#line 603 "go.y"
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[(4) - (4)].node));
		(yyval.node)->list = (yyvsp[(1) - (4)].list);
		(yyval.node)->etype = 0;	// := flag
	}
    break;

  case 69:
#line 609 "go.y"
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[(4) - (4)].node));
		(yyval.node)->list = (yyvsp[(1) - (4)].list);
		(yyval.node)->colas = 1;
		colasdefn((yyvsp[(1) - (4)].list), (yyval.node));
	}
    break;

  case 70:
#line 618 "go.y"
    {
		// init ; test ; incr
		if((yyvsp[(5) - (5)].node) != N && (yyvsp[(5) - (5)].node)->colas != 0)
			yyerror("cannot declare in the for-increment");
		(yyval.node) = nod(OFOR, N, N);
		if((yyvsp[(1) - (5)].node) != N)
			(yyval.node)->ninit = list1((yyvsp[(1) - (5)].node));
		(yyval.node)->ntest = (yyvsp[(3) - (5)].node);
		(yyval.node)->nincr = (yyvsp[(5) - (5)].node);
	}
    break;

  case 71:
#line 629 "go.y"
    {
		// normal test
		(yyval.node) = nod(OFOR, N, N);
		(yyval.node)->ntest = (yyvsp[(1) - (1)].node);
	}
    break;

  case 73:
#line 638 "go.y"
    {
		(yyval.node) = (yyvsp[(1) - (2)].node);
		(yyval.node)->nbody = concat((yyval.node)->nbody, (yyvsp[(2) - (2)].list));
	}
    break;

  case 74:
#line 645 "go.y"
    {
		markdcl();
	}
    break;

  case 75:
#line 649 "go.y"
    {
		(yyval.node) = (yyvsp[(3) - (3)].node);
		popdcl();
	}
    break;

  case 76:
#line 656 "go.y"
    {
		// test
		(yyval.node) = nod(OIF, N, N);
		(yyval.node)->ntest = (yyvsp[(1) - (1)].node);
	}
    break;

  case 77:
#line 662 "go.y"
    {
		// init ; test
		(yyval.node) = nod(OIF, N, N);
		if((yyvsp[(1) - (3)].node) != N)
			(yyval.node)->ninit = list1((yyvsp[(1) - (3)].node));
		(yyval.node)->ntest = (yyvsp[(3) - (3)].node);
	}
    break;

  case 78:
#line 673 "go.y"
    {
		markdcl();
	}
    break;

  case 79:
#line 677 "go.y"
    {
		if((yyvsp[(3) - (3)].node)->ntest == N)
			yyerror("missing condition in if statement");
	}
    break;

  case 80:
#line 682 "go.y"
    {
		(yyvsp[(3) - (5)].node)->nbody = (yyvsp[(5) - (5)].list);
	}
    break;

  case 81:
#line 686 "go.y"
    {
		Node *n;
		NodeList *nn;

		(yyval.node) = (yyvsp[(3) - (8)].node);
		n = (yyvsp[(3) - (8)].node);
		popdcl();
		for(nn = concat((yyvsp[(7) - (8)].list), (yyvsp[(8) - (8)].list)); nn; nn = nn->next) {
			if(nn->n->op == OIF)
				popdcl();
			n->nelse = list1(nn->n);
			n = nn->n;
		}
	}
    break;

  case 82:
#line 703 "go.y"
    {
		markdcl();
	}
    break;

  case 83:
#line 707 "go.y"
    {
		if((yyvsp[(4) - (5)].node)->ntest == N)
			yyerror("missing condition in if statement");
		(yyvsp[(4) - (5)].node)->nbody = (yyvsp[(5) - (5)].list);
		(yyval.list) = list1((yyvsp[(4) - (5)].node));
	}
    break;

  case 84:
#line 715 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 85:
#line 719 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].list));
	}
    break;

  case 86:
#line 724 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 87:
#line 728 "go.y"
    {
		NodeList *node;
		
		node = mal(sizeof *node);
		node->n = (yyvsp[(2) - (2)].node);
		node->end = node;
		(yyval.list) = node;
	}
    break;

  case 88:
#line 739 "go.y"
    {
		markdcl();
	}
    break;

  case 89:
#line 743 "go.y"
    {
		Node *n;
		n = (yyvsp[(3) - (3)].node)->ntest;
		if(n != N && n->op != OTYPESW)
			n = N;
		typesw = nod(OXXX, typesw, n);
	}
    break;

  case 90:
#line 751 "go.y"
    {
		(yyval.node) = (yyvsp[(3) - (7)].node);
		(yyval.node)->op = OSWITCH;
		(yyval.node)->list = (yyvsp[(6) - (7)].list);
		typesw = typesw->left;
		popdcl();
	}
    break;

  case 91:
#line 761 "go.y"
    {
		typesw = nod(OXXX, typesw, N);
	}
    break;

  case 92:
#line 765 "go.y"
    {
		(yyval.node) = nod(OSELECT, N, N);
		(yyval.node)->lineno = typesw->lineno;
		(yyval.node)->list = (yyvsp[(4) - (5)].list);
		typesw = typesw->left;
	}
    break;

  case 94:
#line 778 "go.y"
    {
		(yyval.node) = nod(OOROR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 95:
#line 782 "go.y"
    {
		(yyval.node) = nod(OANDAND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 96:
#line 786 "go.y"
    {
		(yyval.node) = nod(OEQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 97:
#line 790 "go.y"
    {
		(yyval.node) = nod(ONE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 98:
#line 794 "go.y"
    {
		(yyval.node) = nod(OLT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 99:
#line 798 "go.y"
    {
		(yyval.node) = nod(OLE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 100:
#line 802 "go.y"
    {
		(yyval.node) = nod(OGE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 101:
#line 806 "go.y"
    {
		(yyval.node) = nod(OGT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 102:
#line 810 "go.y"
    {
		(yyval.node) = nod(OADD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 103:
#line 814 "go.y"
    {
		(yyval.node) = nod(OSUB, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 104:
#line 818 "go.y"
    {
		(yyval.node) = nod(OOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 105:
#line 822 "go.y"
    {
		(yyval.node) = nod(OXOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 106:
#line 826 "go.y"
    {
		(yyval.node) = nod(OMUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 107:
#line 830 "go.y"
    {
		(yyval.node) = nod(ODIV, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 108:
#line 834 "go.y"
    {
		(yyval.node) = nod(OMOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 109:
#line 838 "go.y"
    {
		(yyval.node) = nod(OAND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 110:
#line 842 "go.y"
    {
		(yyval.node) = nod(OANDNOT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 111:
#line 846 "go.y"
    {
		(yyval.node) = nod(OLSH, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 112:
#line 850 "go.y"
    {
		(yyval.node) = nod(ORSH, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 113:
#line 855 "go.y"
    {
		(yyval.node) = nod(OSEND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 115:
#line 862 "go.y"
    {
		(yyval.node) = nod(OIND, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 116:
#line 866 "go.y"
    {
		if((yyvsp[(2) - (2)].node)->op == OCOMPLIT) {
			// Special case for &T{...}: turn into (*T){...}.
			(yyval.node) = (yyvsp[(2) - (2)].node);
			(yyval.node)->right = nod(OIND, (yyval.node)->right, N);
			(yyval.node)->right->implicit = 1;
		} else {
			(yyval.node) = nod(OADDR, (yyvsp[(2) - (2)].node), N);
		}
	}
    break;

  case 117:
#line 877 "go.y"
    {
		(yyval.node) = nod(OPLUS, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 118:
#line 881 "go.y"
    {
		(yyval.node) = nod(OMINUS, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 119:
#line 885 "go.y"
    {
		(yyval.node) = nod(ONOT, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 120:
#line 889 "go.y"
    {
		yyerror("the bitwise complement operator is ^");
		(yyval.node) = nod(OCOM, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 121:
#line 894 "go.y"
    {
		(yyval.node) = nod(OCOM, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 122:
#line 898 "go.y"
    {
		(yyval.node) = nod(ORECV, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 123:
#line 908 "go.y"
    {
		(yyval.node) = nod(OCALL, (yyvsp[(1) - (3)].node), N);
	}
    break;

  case 124:
#line 912 "go.y"
    {
		(yyval.node) = nod(OCALL, (yyvsp[(1) - (5)].node), N);
		(yyval.node)->list = (yyvsp[(3) - (5)].list);
	}
    break;

  case 125:
#line 917 "go.y"
    {
		(yyval.node) = nod(OCALL, (yyvsp[(1) - (6)].node), N);
		(yyval.node)->list = (yyvsp[(3) - (6)].list);
		(yyval.node)->isddd = 1;
	}
    break;

  case 126:
#line 925 "go.y"
    {
		(yyval.node) = nodlit((yyvsp[(1) - (1)].val));
	}
    break;

  case 128:
#line 930 "go.y"
    {
		if((yyvsp[(1) - (3)].node)->op == OPACK) {
			Sym *s;
			s = restrictlookup((yyvsp[(3) - (3)].sym)->name, (yyvsp[(1) - (3)].node)->pkg);
			(yyvsp[(1) - (3)].node)->used = 1;
			(yyval.node) = oldname(s);
			break;
		}
		(yyval.node) = nod(OXDOT, (yyvsp[(1) - (3)].node), newname((yyvsp[(3) - (3)].sym)));
	}
    break;

  case 129:
#line 941 "go.y"
    {
		(yyval.node) = nod(ODOTTYPE, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node));
	}
    break;

  case 130:
#line 945 "go.y"
    {
		(yyval.node) = nod(OTYPESW, N, (yyvsp[(1) - (5)].node));
	}
    break;

  case 131:
#line 949 "go.y"
    {
		(yyval.node) = nod(OINDEX, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
	}
    break;

  case 132:
#line 953 "go.y"
    {
		(yyval.node) = nod(OSLICE, (yyvsp[(1) - (6)].node), nod(OKEY, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node)));
	}
    break;

  case 133:
#line 957 "go.y"
    {
		if((yyvsp[(5) - (8)].node) == N)
			yyerror("middle index required in 3-index slice");
		if((yyvsp[(7) - (8)].node) == N)
			yyerror("final index required in 3-index slice");
		(yyval.node) = nod(OSLICE3, (yyvsp[(1) - (8)].node), nod(OKEY, (yyvsp[(3) - (8)].node), nod(OKEY, (yyvsp[(5) - (8)].node), (yyvsp[(7) - (8)].node))));
	}
    break;

  case 135:
#line 966 "go.y"
    {
		// conversion
		(yyval.node) = nod(OCALL, (yyvsp[(1) - (5)].node), N);
		(yyval.node)->list = list1((yyvsp[(3) - (5)].node));
	}
    break;

  case 136:
#line 972 "go.y"
    {
		(yyval.node) = (yyvsp[(3) - (5)].node);
		(yyval.node)->right = (yyvsp[(1) - (5)].node);
		(yyval.node)->list = (yyvsp[(4) - (5)].list);
		fixlbrace((yyvsp[(2) - (5)].i));
	}
    break;

  case 137:
#line 979 "go.y"
    {
		(yyval.node) = (yyvsp[(3) - (5)].node);
		(yyval.node)->right = (yyvsp[(1) - (5)].node);
		(yyval.node)->list = (yyvsp[(4) - (5)].list);
	}
    break;

  case 138:
#line 985 "go.y"
    {
		yyerror("cannot parenthesize type in composite literal");
		(yyval.node) = (yyvsp[(5) - (7)].node);
		(yyval.node)->right = (yyvsp[(2) - (7)].node);
		(yyval.node)->list = (yyvsp[(6) - (7)].list);
	}
    break;

  case 140:
#line 994 "go.y"
    {
		// composite expression.
		// make node early so we get the right line number.
		(yyval.node) = nod(OCOMPLIT, N, N);
	}
    break;

  case 141:
#line 1002 "go.y"
    {
		(yyval.node) = nod(OKEY, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 142:
#line 1008 "go.y"
    {
		// These nodes do not carry line numbers.
		// Since a composite literal commonly spans several lines,
		// the line number on errors may be misleading.
		// Introduce a wrapper node to give the correct line.
		(yyval.node) = (yyvsp[(1) - (1)].node);
		switch((yyval.node)->op) {
		case ONAME:
		case ONONAME:
		case OTYPE:
		case OPACK:
		case OLITERAL:
			(yyval.node) = nod(OPAREN, (yyval.node), N);
			(yyval.node)->implicit = 1;
		}
	}
    break;

  case 143:
#line 1025 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (4)].node);
		(yyval.node)->list = (yyvsp[(3) - (4)].list);
	}
    break;

  case 145:
#line 1033 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (4)].node);
		(yyval.node)->list = (yyvsp[(3) - (4)].list);
	}
    break;

  case 147:
#line 1041 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (3)].node);
		
		// Need to know on lhs of := whether there are ( ).
		// Don't bother with the OPAREN in other cases:
		// it's just a waste of memory and time.
		switch((yyval.node)->op) {
		case ONAME:
		case ONONAME:
		case OPACK:
		case OTYPE:
		case OLITERAL:
		case OTYPESW:
			(yyval.node) = nod(OPAREN, (yyval.node), N);
		}
	}
    break;

  case 151:
#line 1067 "go.y"
    {
		(yyval.i) = LBODY;
	}
    break;

  case 152:
#line 1071 "go.y"
    {
		(yyval.i) = '{';
	}
    break;

  case 153:
#line 1082 "go.y"
    {
		if((yyvsp[(1) - (1)].sym) == S)
			(yyval.node) = N;
		else
			(yyval.node) = newname((yyvsp[(1) - (1)].sym));
	}
    break;

  case 154:
#line 1091 "go.y"
    {
		(yyval.node) = dclname((yyvsp[(1) - (1)].sym));
	}
    break;

  case 155:
#line 1096 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 157:
#line 1103 "go.y"
    {
		(yyval.sym) = (yyvsp[(1) - (1)].sym);
		// during imports, unqualified non-exported identifiers are from builtinpkg
		if(importpkg != nil && !exportname((yyvsp[(1) - (1)].sym)->name))
			(yyval.sym) = pkglookup((yyvsp[(1) - (1)].sym)->name, builtinpkg);
	}
    break;

  case 159:
#line 1111 "go.y"
    {
		(yyval.sym) = S;
	}
    break;

  case 160:
#line 1117 "go.y"
    {
		Pkg *p;

		if((yyvsp[(2) - (4)].val).u.sval->len == 0)
			p = importpkg;
		else {
			if(isbadimport((yyvsp[(2) - (4)].val).u.sval))
				errorexit();
			p = mkpkg((yyvsp[(2) - (4)].val).u.sval);
		}
		(yyval.sym) = pkglookup((yyvsp[(4) - (4)].sym)->name, p);
	}
    break;

  case 161:
#line 1132 "go.y"
    {
		(yyval.node) = oldname((yyvsp[(1) - (1)].sym));
		if((yyval.node)->pack != N)
			(yyval.node)->pack->used = 1;
	}
    break;

  case 163:
#line 1152 "go.y"
    {
		yyerror("final argument in variadic function missing type");
		(yyval.node) = nod(ODDD, typenod(typ(TINTER)), N);
	}
    break;

  case 164:
#line 1157 "go.y"
    {
		(yyval.node) = nod(ODDD, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 170:
#line 1168 "go.y"
    {
		(yyval.node) = nod(OTPAREN, (yyvsp[(2) - (3)].node), N);
	}
    break;

  case 174:
#line 1177 "go.y"
    {
		(yyval.node) = nod(OIND, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 179:
#line 1187 "go.y"
    {
		(yyval.node) = nod(OTPAREN, (yyvsp[(2) - (3)].node), N);
	}
    break;

  case 189:
#line 1208 "go.y"
    {
		if((yyvsp[(1) - (3)].node)->op == OPACK) {
			Sym *s;
			s = restrictlookup((yyvsp[(3) - (3)].sym)->name, (yyvsp[(1) - (3)].node)->pkg);
			(yyvsp[(1) - (3)].node)->used = 1;
			(yyval.node) = oldname(s);
			break;
		}
		(yyval.node) = nod(OXDOT, (yyvsp[(1) - (3)].node), newname((yyvsp[(3) - (3)].sym)));
	}
    break;

  case 190:
#line 1221 "go.y"
    {
		(yyval.node) = nod(OTARRAY, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
	}
    break;

  case 191:
#line 1225 "go.y"
    {
		// array literal of nelem
		(yyval.node) = nod(OTARRAY, nod(ODDD, N, N), (yyvsp[(4) - (4)].node));
	}
    break;

  case 192:
#line 1230 "go.y"
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[(2) - (2)].node), N);
		(yyval.node)->etype = Cboth;
	}
    break;

  case 193:
#line 1235 "go.y"
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[(3) - (3)].node), N);
		(yyval.node)->etype = Csend;
	}
    break;

  case 194:
#line 1240 "go.y"
    {
		(yyval.node) = nod(OTMAP, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
	}
    break;

  case 197:
#line 1248 "go.y"
    {
		(yyval.node) = nod(OIND, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 198:
#line 1254 "go.y"
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[(3) - (3)].node), N);
		(yyval.node)->etype = Crecv;
	}
    break;

  case 199:
#line 1261 "go.y"
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		(yyval.node)->list = (yyvsp[(3) - (5)].list);
		fixlbrace((yyvsp[(2) - (5)].i));
	}
    break;

  case 200:
#line 1267 "go.y"
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		fixlbrace((yyvsp[(2) - (3)].i));
	}
    break;

  case 201:
#line 1274 "go.y"
    {
		(yyval.node) = nod(OTINTER, N, N);
		(yyval.node)->list = (yyvsp[(3) - (5)].list);
		fixlbrace((yyvsp[(2) - (5)].i));
	}
    break;

  case 202:
#line 1280 "go.y"
    {
		(yyval.node) = nod(OTINTER, N, N);
		fixlbrace((yyvsp[(2) - (3)].i));
	}
    break;

  case 203:
#line 1291 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (3)].node);
		if((yyval.node) == N)
			break;
		if(noescape && (yyvsp[(3) - (3)].list) != nil)
			yyerror("can only use //go:noescape with external func implementations");
		(yyval.node)->nbody = (yyvsp[(3) - (3)].list);
		(yyval.node)->endlineno = lineno;
		(yyval.node)->noescape = noescape;
		funcbody((yyval.node));
	}
    break;

  case 204:
#line 1305 "go.y"
    {
		Node *t;

		(yyval.node) = N;
		(yyvsp[(3) - (5)].list) = checkarglist((yyvsp[(3) - (5)].list), 1);

		if(strcmp((yyvsp[(1) - (5)].sym)->name, "init") == 0) {
			(yyvsp[(1) - (5)].sym) = renameinit();
			if((yyvsp[(3) - (5)].list) != nil || (yyvsp[(5) - (5)].list) != nil)
				yyerror("func init must have no arguments and no return values");
		}
		if(strcmp(localpkg->name, "main") == 0 && strcmp((yyvsp[(1) - (5)].sym)->name, "main") == 0) {
			if((yyvsp[(3) - (5)].list) != nil || (yyvsp[(5) - (5)].list) != nil)
				yyerror("func main must have no arguments and no return values");
		}

		t = nod(OTFUNC, N, N);
		t->list = (yyvsp[(3) - (5)].list);
		t->rlist = (yyvsp[(5) - (5)].list);

		(yyval.node) = nod(ODCLFUNC, N, N);
		(yyval.node)->nname = newname((yyvsp[(1) - (5)].sym));
		(yyval.node)->nname->defn = (yyval.node);
		(yyval.node)->nname->ntype = t;		// TODO: check if nname already has an ntype
		declare((yyval.node)->nname, PFUNC);

		funchdr((yyval.node));
	}
    break;

  case 205:
#line 1334 "go.y"
    {
		Node *rcvr, *t;

		(yyval.node) = N;
		(yyvsp[(2) - (8)].list) = checkarglist((yyvsp[(2) - (8)].list), 0);
		(yyvsp[(6) - (8)].list) = checkarglist((yyvsp[(6) - (8)].list), 1);

		if((yyvsp[(2) - (8)].list) == nil) {
			yyerror("method has no receiver");
			break;
		}
		if((yyvsp[(2) - (8)].list)->next != nil) {
			yyerror("method has multiple receivers");
			break;
		}
		rcvr = (yyvsp[(2) - (8)].list)->n;
		if(rcvr->op != ODCLFIELD) {
			yyerror("bad receiver in method");
			break;
		}
		if(rcvr->right->op == OTPAREN || (rcvr->right->op == OIND && rcvr->right->left->op == OTPAREN))
			yyerror("cannot parenthesize receiver type");

		t = nod(OTFUNC, rcvr, N);
		t->list = (yyvsp[(6) - (8)].list);
		t->rlist = (yyvsp[(8) - (8)].list);

		(yyval.node) = nod(ODCLFUNC, N, N);
		(yyval.node)->shortname = newname((yyvsp[(4) - (8)].sym));
		(yyval.node)->nname = methodname1((yyval.node)->shortname, rcvr->right);
		(yyval.node)->nname->defn = (yyval.node);
		(yyval.node)->nname->ntype = t;
		(yyval.node)->nname->nointerface = nointerface;
		declare((yyval.node)->nname, PFUNC);

		funchdr((yyval.node));
	}
    break;

  case 206:
#line 1374 "go.y"
    {
		Sym *s;
		Type *t;

		(yyval.node) = N;

		s = (yyvsp[(1) - (5)].sym);
		t = functype(N, (yyvsp[(3) - (5)].list), (yyvsp[(5) - (5)].list));

		importsym(s, ONAME);
		if(s->def != N && s->def->op == ONAME) {
			if(eqtype(t, s->def->type)) {
				dclcontext = PDISCARD;  // since we skip funchdr below
				break;
			}
			yyerror("inconsistent definition for func %S during import\n\t%T\n\t%T", s, s->def->type, t);
		}

		(yyval.node) = newname(s);
		(yyval.node)->type = t;
		declare((yyval.node), PFUNC);

		funchdr((yyval.node));
	}
    break;

  case 207:
#line 1399 "go.y"
    {
		(yyval.node) = methodname1(newname((yyvsp[(4) - (8)].sym)), (yyvsp[(2) - (8)].list)->n->right); 
		(yyval.node)->type = functype((yyvsp[(2) - (8)].list)->n, (yyvsp[(6) - (8)].list), (yyvsp[(8) - (8)].list));

		checkwidth((yyval.node)->type);
		addmethod((yyvsp[(4) - (8)].sym), (yyval.node)->type, 0, nointerface);
		nointerface = 0;
		funchdr((yyval.node));
		
		// inl.c's inlnode in on a dotmeth node expects to find the inlineable body as
		// (dotmeth's type)->nname->inl, and dotmeth's type has been pulled
		// out by typecheck's lookdot as this $$->ttype.  So by providing
		// this back link here we avoid special casing there.
		(yyval.node)->type->nname = (yyval.node);
	}
    break;

  case 208:
#line 1417 "go.y"
    {
		(yyvsp[(3) - (5)].list) = checkarglist((yyvsp[(3) - (5)].list), 1);
		(yyval.node) = nod(OTFUNC, N, N);
		(yyval.node)->list = (yyvsp[(3) - (5)].list);
		(yyval.node)->rlist = (yyvsp[(5) - (5)].list);
	}
    break;

  case 209:
#line 1425 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 210:
#line 1429 "go.y"
    {
		(yyval.list) = (yyvsp[(2) - (3)].list);
		if((yyval.list) == nil)
			(yyval.list) = list1(nod(OEMPTY, N, N));
	}
    break;

  case 211:
#line 1437 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 212:
#line 1441 "go.y"
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, (yyvsp[(1) - (1)].node)));
	}
    break;

  case 213:
#line 1445 "go.y"
    {
		(yyvsp[(2) - (3)].list) = checkarglist((yyvsp[(2) - (3)].list), 0);
		(yyval.list) = (yyvsp[(2) - (3)].list);
	}
    break;

  case 214:
#line 1452 "go.y"
    {
		closurehdr((yyvsp[(1) - (1)].node));
	}
    break;

  case 215:
#line 1458 "go.y"
    {
		(yyval.node) = closurebody((yyvsp[(3) - (4)].list));
		fixlbrace((yyvsp[(2) - (4)].i));
	}
    break;

  case 216:
#line 1463 "go.y"
    {
		(yyval.node) = closurebody(nil);
	}
    break;

  case 217:
#line 1474 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 218:
#line 1478 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (3)].list), (yyvsp[(2) - (3)].list));
		if(nsyntaxerrors == 0)
			testdclstack();
		nointerface = 0;
		noescape = 0;
	}
    break;

  case 220:
#line 1489 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list));
	}
    break;

  case 222:
#line 1496 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list));
	}
    break;

  case 223:
#line 1502 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 224:
#line 1506 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 226:
#line 1513 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list));
	}
    break;

  case 227:
#line 1519 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 228:
#line 1523 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 229:
#line 1529 "go.y"
    {
		NodeList *l;

		Node *n;
		l = (yyvsp[(1) - (3)].list);
		if(l == nil) {
			// ? symbol, during import (list1(N) == nil)
			n = (yyvsp[(2) - (3)].node);
			if(n->op == OIND)
				n = n->left;
			n = embedded(n->sym);
			n->right = (yyvsp[(2) - (3)].node);
			n->val = (yyvsp[(3) - (3)].val);
			(yyval.list) = list1(n);
			break;
		}

		for(l=(yyvsp[(1) - (3)].list); l; l=l->next) {
			l->n = nod(ODCLFIELD, l->n, (yyvsp[(2) - (3)].node));
			l->n->val = (yyvsp[(3) - (3)].val);
		}
	}
    break;

  case 230:
#line 1552 "go.y"
    {
		(yyvsp[(1) - (2)].node)->val = (yyvsp[(2) - (2)].val);
		(yyval.list) = list1((yyvsp[(1) - (2)].node));
	}
    break;

  case 231:
#line 1557 "go.y"
    {
		(yyvsp[(2) - (4)].node)->val = (yyvsp[(4) - (4)].val);
		(yyval.list) = list1((yyvsp[(2) - (4)].node));
		yyerror("cannot parenthesize embedded type");
	}
    break;

  case 232:
#line 1563 "go.y"
    {
		(yyvsp[(2) - (3)].node)->right = nod(OIND, (yyvsp[(2) - (3)].node)->right, N);
		(yyvsp[(2) - (3)].node)->val = (yyvsp[(3) - (3)].val);
		(yyval.list) = list1((yyvsp[(2) - (3)].node));
	}
    break;

  case 233:
#line 1569 "go.y"
    {
		(yyvsp[(3) - (5)].node)->right = nod(OIND, (yyvsp[(3) - (5)].node)->right, N);
		(yyvsp[(3) - (5)].node)->val = (yyvsp[(5) - (5)].val);
		(yyval.list) = list1((yyvsp[(3) - (5)].node));
		yyerror("cannot parenthesize embedded type");
	}
    break;

  case 234:
#line 1576 "go.y"
    {
		(yyvsp[(3) - (5)].node)->right = nod(OIND, (yyvsp[(3) - (5)].node)->right, N);
		(yyvsp[(3) - (5)].node)->val = (yyvsp[(5) - (5)].val);
		(yyval.list) = list1((yyvsp[(3) - (5)].node));
		yyerror("cannot parenthesize embedded type");
	}
    break;

  case 235:
#line 1585 "go.y"
    {
		Node *n;

		(yyval.sym) = (yyvsp[(1) - (1)].sym);
		n = oldname((yyvsp[(1) - (1)].sym));
		if(n->pack != N)
			n->pack->used = 1;
	}
    break;

  case 236:
#line 1594 "go.y"
    {
		Pkg *pkg;

		if((yyvsp[(1) - (3)].sym)->def == N || (yyvsp[(1) - (3)].sym)->def->op != OPACK) {
			yyerror("%S is not a package", (yyvsp[(1) - (3)].sym));
			pkg = localpkg;
		} else {
			(yyvsp[(1) - (3)].sym)->def->used = 1;
			pkg = (yyvsp[(1) - (3)].sym)->def->pkg;
		}
		(yyval.sym) = restrictlookup((yyvsp[(3) - (3)].sym)->name, pkg);
	}
    break;

  case 237:
#line 1609 "go.y"
    {
		(yyval.node) = embedded((yyvsp[(1) - (1)].sym));
	}
    break;

  case 238:
#line 1615 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		ifacedcl((yyval.node));
	}
    break;

  case 239:
#line 1620 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[(1) - (1)].sym)));
	}
    break;

  case 240:
#line 1624 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[(2) - (3)].sym)));
		yyerror("cannot parenthesize embedded type");
	}
    break;

  case 241:
#line 1631 "go.y"
    {
		// without func keyword
		(yyvsp[(2) - (4)].list) = checkarglist((yyvsp[(2) - (4)].list), 1);
		(yyval.node) = nod(OTFUNC, fakethis(), N);
		(yyval.node)->list = (yyvsp[(2) - (4)].list);
		(yyval.node)->rlist = (yyvsp[(4) - (4)].list);
	}
    break;

  case 243:
#line 1645 "go.y"
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[(1) - (2)].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[(2) - (2)].node));
	}
    break;

  case 244:
#line 1651 "go.y"
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[(1) - (2)].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[(2) - (2)].node));
	}
    break;

  case 246:
#line 1660 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 247:
#line 1664 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 248:
#line 1669 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 249:
#line 1673 "go.y"
    {
		(yyval.list) = (yyvsp[(1) - (2)].list);
	}
    break;

  case 250:
#line 1681 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 252:
#line 1686 "go.y"
    {
		(yyval.node) = liststmt((yyvsp[(1) - (1)].list));
	}
    break;

  case 254:
#line 1691 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 260:
#line 1702 "go.y"
    {
		(yyvsp[(1) - (2)].node) = nod(OLABEL, (yyvsp[(1) - (2)].node), N);
		(yyvsp[(1) - (2)].node)->sym = dclstack;  // context, for goto restrictions
	}
    break;

  case 261:
#line 1707 "go.y"
    {
		NodeList *l;

		(yyvsp[(1) - (4)].node)->defn = (yyvsp[(4) - (4)].node);
		l = list1((yyvsp[(1) - (4)].node));
		if((yyvsp[(4) - (4)].node))
			l = list(l, (yyvsp[(4) - (4)].node));
		(yyval.node) = liststmt(l);
	}
    break;

  case 262:
#line 1717 "go.y"
    {
		// will be converted to OFALL
		(yyval.node) = nod(OXFALL, N, N);
	}
    break;

  case 263:
#line 1722 "go.y"
    {
		(yyval.node) = nod(OBREAK, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 264:
#line 1726 "go.y"
    {
		(yyval.node) = nod(OCONTINUE, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 265:
#line 1730 "go.y"
    {
		(yyval.node) = nod(OPROC, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 266:
#line 1734 "go.y"
    {
		(yyval.node) = nod(ODEFER, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 267:
#line 1738 "go.y"
    {
		(yyval.node) = nod(OGOTO, (yyvsp[(2) - (2)].node), N);
		(yyval.node)->sym = dclstack;  // context, for goto restrictions
	}
    break;

  case 268:
#line 1743 "go.y"
    {
		(yyval.node) = nod(ORETURN, N, N);
		(yyval.node)->list = (yyvsp[(2) - (2)].list);
		if((yyval.node)->list == nil && curfn != N) {
			NodeList *l;

			for(l=curfn->dcl; l; l=l->next) {
				if(l->n->class == PPARAM)
					continue;
				if(l->n->class != PPARAMOUT)
					break;
				if(l->n->sym->def != l->n)
					yyerror("%s is shadowed during return", l->n->sym->name);
			}
		}
	}
    break;

  case 269:
#line 1762 "go.y"
    {
		(yyval.list) = nil;
		if((yyvsp[(1) - (1)].node) != N)
			(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 270:
#line 1768 "go.y"
    {
		(yyval.list) = (yyvsp[(1) - (3)].list);
		if((yyvsp[(3) - (3)].node) != N)
			(yyval.list) = list((yyval.list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 271:
#line 1776 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 272:
#line 1780 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 273:
#line 1786 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 274:
#line 1790 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 275:
#line 1796 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 276:
#line 1800 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 277:
#line 1806 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 278:
#line 1810 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 279:
#line 1819 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 280:
#line 1823 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 281:
#line 1827 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 282:
#line 1831 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 283:
#line 1836 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 284:
#line 1840 "go.y"
    {
		(yyval.list) = (yyvsp[(1) - (2)].list);
	}
    break;

  case 289:
#line 1854 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 291:
#line 1860 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 293:
#line 1866 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 295:
#line 1872 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 297:
#line 1878 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 299:
#line 1884 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 301:
#line 1890 "go.y"
    {
		(yyval.val).ctype = CTxxx;
	}
    break;

  case 303:
#line 1900 "go.y"
    {
		importimport((yyvsp[(2) - (4)].sym), (yyvsp[(3) - (4)].val).u.sval);
	}
    break;

  case 304:
#line 1904 "go.y"
    {
		importvar((yyvsp[(2) - (4)].sym), (yyvsp[(3) - (4)].type));
	}
    break;

  case 305:
#line 1908 "go.y"
    {
		importconst((yyvsp[(2) - (5)].sym), types[TIDEAL], (yyvsp[(4) - (5)].node));
	}
    break;

  case 306:
#line 1912 "go.y"
    {
		importconst((yyvsp[(2) - (6)].sym), (yyvsp[(3) - (6)].type), (yyvsp[(5) - (6)].node));
	}
    break;

  case 307:
#line 1916 "go.y"
    {
		importtype((yyvsp[(2) - (4)].type), (yyvsp[(3) - (4)].type));
	}
    break;

  case 308:
#line 1920 "go.y"
    {
		if((yyvsp[(2) - (4)].node) == N) {
			dclcontext = PEXTERN;  // since we skip the funcbody below
			break;
		}

		(yyvsp[(2) - (4)].node)->inl = (yyvsp[(3) - (4)].list);

		funcbody((yyvsp[(2) - (4)].node));
		importlist = list(importlist, (yyvsp[(2) - (4)].node));

		if(debug['E']) {
			print("import [%Z] func %lN \n", importpkg->path, (yyvsp[(2) - (4)].node));
			if(debug['m'] > 2 && (yyvsp[(2) - (4)].node)->inl)
				print("inl body:%+H\n", (yyvsp[(2) - (4)].node)->inl);
		}
	}
    break;

  case 309:
#line 1940 "go.y"
    {
		(yyval.sym) = (yyvsp[(1) - (1)].sym);
		structpkg = (yyval.sym)->pkg;
	}
    break;

  case 310:
#line 1947 "go.y"
    {
		(yyval.type) = pkgtype((yyvsp[(1) - (1)].sym));
		importsym((yyvsp[(1) - (1)].sym), OTYPE);
	}
    break;

  case 316:
#line 1967 "go.y"
    {
		(yyval.type) = pkgtype((yyvsp[(1) - (1)].sym));
	}
    break;

  case 317:
#line 1971 "go.y"
    {
		// predefined name like uint8
		(yyvsp[(1) - (1)].sym) = pkglookup((yyvsp[(1) - (1)].sym)->name, builtinpkg);
		if((yyvsp[(1) - (1)].sym)->def == N || (yyvsp[(1) - (1)].sym)->def->op != OTYPE) {
			yyerror("%s is not a type", (yyvsp[(1) - (1)].sym)->name);
			(yyval.type) = T;
		} else
			(yyval.type) = (yyvsp[(1) - (1)].sym)->def->type;
	}
    break;

  case 318:
#line 1981 "go.y"
    {
		(yyval.type) = aindex(N, (yyvsp[(3) - (3)].type));
	}
    break;

  case 319:
#line 1985 "go.y"
    {
		(yyval.type) = aindex(nodlit((yyvsp[(2) - (4)].val)), (yyvsp[(4) - (4)].type));
	}
    break;

  case 320:
#line 1989 "go.y"
    {
		(yyval.type) = maptype((yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].type));
	}
    break;

  case 321:
#line 1993 "go.y"
    {
		(yyval.type) = tostruct((yyvsp[(3) - (4)].list));
	}
    break;

  case 322:
#line 1997 "go.y"
    {
		(yyval.type) = tointerface((yyvsp[(3) - (4)].list));
	}
    break;

  case 323:
#line 2001 "go.y"
    {
		(yyval.type) = ptrto((yyvsp[(2) - (2)].type));
	}
    break;

  case 324:
#line 2005 "go.y"
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[(2) - (2)].type);
		(yyval.type)->chan = Cboth;
	}
    break;

  case 325:
#line 2011 "go.y"
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[(3) - (4)].type);
		(yyval.type)->chan = Cboth;
	}
    break;

  case 326:
#line 2017 "go.y"
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[(3) - (3)].type);
		(yyval.type)->chan = Csend;
	}
    break;

  case 327:
#line 2025 "go.y"
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[(3) - (3)].type);
		(yyval.type)->chan = Crecv;
	}
    break;

  case 328:
#line 2033 "go.y"
    {
		(yyval.type) = functype(nil, (yyvsp[(3) - (5)].list), (yyvsp[(5) - (5)].list));
	}
    break;

  case 329:
#line 2039 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[(2) - (3)].type)));
		if((yyvsp[(1) - (3)].sym))
			(yyval.node)->left = newname((yyvsp[(1) - (3)].sym));
		(yyval.node)->val = (yyvsp[(3) - (3)].val);
	}
    break;

  case 330:
#line 2046 "go.y"
    {
		Type *t;
	
		t = typ(TARRAY);
		t->bound = -1;
		t->type = (yyvsp[(3) - (4)].type);

		(yyval.node) = nod(ODCLFIELD, N, typenod(t));
		if((yyvsp[(1) - (4)].sym))
			(yyval.node)->left = newname((yyvsp[(1) - (4)].sym));
		(yyval.node)->isddd = 1;
		(yyval.node)->val = (yyvsp[(4) - (4)].val);
	}
    break;

  case 331:
#line 2062 "go.y"
    {
		Sym *s;

		if((yyvsp[(1) - (3)].sym) != S) {
			(yyval.node) = nod(ODCLFIELD, newname((yyvsp[(1) - (3)].sym)), typenod((yyvsp[(2) - (3)].type)));
			(yyval.node)->val = (yyvsp[(3) - (3)].val);
		} else {
			s = (yyvsp[(2) - (3)].type)->sym;
			if(s == S && isptr[(yyvsp[(2) - (3)].type)->etype])
				s = (yyvsp[(2) - (3)].type)->type->sym;
			(yyval.node) = embedded(s);
			(yyval.node)->right = typenod((yyvsp[(2) - (3)].type));
			(yyval.node)->val = (yyvsp[(3) - (3)].val);
		}
	}
    break;

  case 332:
#line 2080 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, newname((yyvsp[(1) - (5)].sym)), typenod(functype(fakethis(), (yyvsp[(3) - (5)].list), (yyvsp[(5) - (5)].list))));
	}
    break;

  case 333:
#line 2084 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[(1) - (1)].type)));
	}
    break;

  case 334:
#line 2089 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 336:
#line 2096 "go.y"
    {
		(yyval.list) = (yyvsp[(2) - (3)].list);
	}
    break;

  case 337:
#line 2100 "go.y"
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, typenod((yyvsp[(1) - (1)].type))));
	}
    break;

  case 338:
#line 2110 "go.y"
    {
		(yyval.node) = nodlit((yyvsp[(1) - (1)].val));
	}
    break;

  case 339:
#line 2114 "go.y"
    {
		(yyval.node) = nodlit((yyvsp[(2) - (2)].val));
		switch((yyval.node)->val.ctype){
		case CTINT:
		case CTRUNE:
			mpnegfix((yyval.node)->val.u.xval);
			break;
		case CTFLT:
			mpnegflt((yyval.node)->val.u.fval);
			break;
		default:
			yyerror("bad negated constant");
		}
	}
    break;

  case 340:
#line 2129 "go.y"
    {
		(yyval.node) = oldname(pkglookup((yyvsp[(1) - (1)].sym)->name, builtinpkg));
		if((yyval.node)->op != OLITERAL)
			yyerror("bad constant %S", (yyval.node)->sym);
	}
    break;

  case 342:
#line 2138 "go.y"
    {
		if((yyvsp[(2) - (5)].node)->val.ctype == CTRUNE && (yyvsp[(4) - (5)].node)->val.ctype == CTINT) {
			(yyval.node) = (yyvsp[(2) - (5)].node);
			mpaddfixfix((yyvsp[(2) - (5)].node)->val.u.xval, (yyvsp[(4) - (5)].node)->val.u.xval, 0);
			break;
		}
		(yyvsp[(4) - (5)].node)->val.u.cval->real = (yyvsp[(4) - (5)].node)->val.u.cval->imag;
		mpmovecflt(&(yyvsp[(4) - (5)].node)->val.u.cval->imag, 0.0);
		(yyval.node) = nodcplxlit((yyvsp[(2) - (5)].node)->val, (yyvsp[(4) - (5)].node)->val);
	}
    break;

  case 345:
#line 2154 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 346:
#line 2158 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 347:
#line 2164 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 348:
#line 2168 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 349:
#line 2174 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 350:
#line 2178 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;


/* Line 1267 of yacc.c.  */
#line 4869 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 2182 "go.y"


static void
fixlbrace(int lbr)
{
	// If the opening brace was an LBODY,
	// set up for another one now that we're done.
	// See comment in lex.c about loophack.
	if(lbr == LBODY)
		loophack = 1;
}


