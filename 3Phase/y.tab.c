/* A Bison parser, made by GNU Bison 1.875a.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

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
     AND = 258,
     ARRAY = 259,
     Begin = 260,
     CASE = 261,
     CHARACTER = 262,
     CONSTANT = 263,
     DO = 264,
     ELSE = 265,
     END = 266,
     FLOAT = 267,
     FUNCTION = 268,
     IDENTIFIER = 269,
     IF = 270,
     INTEGER = 271,
     INTNUM = 272,
     FLOATNUM = 273,
     CHARCONST = 274,
     RelOp = 275,
     AddOp = 276,
     MulOp = 277,
     MOD = 278,
     NOT = 279,
     OF = 280,
     OR = 281,
     PROCEDURE = 282,
     PROGRAM = 283,
     READ = 284,
     RETURN = 285,
     STRINGCONSTANT = 286,
     THEN = 287,
     VAR = 288,
     WHILE = 289,
     WRITE = 290,
     COL = 291,
     DDOT = 292
   };
#endif
#define AND 258
#define ARRAY 259
#define Begin 260
#define CASE 261
#define CHARACTER 262
#define CONSTANT 263
#define DO 264
#define ELSE 265
#define END 266
#define FLOAT 267
#define FUNCTION 268
#define IDENTIFIER 269
#define IF 270
#define INTEGER 271
#define INTNUM 272
#define FLOATNUM 273
#define CHARCONST 274
#define RelOp 275
#define AddOp 276
#define MulOp 277
#define MOD 278
#define NOT 279
#define OF 280
#define OR 281
#define PROCEDURE 282
#define PROGRAM 283
#define READ 284
#define RETURN 285
#define STRINGCONSTANT 286
#define THEN 287
#define VAR 288
#define WHILE 289
#define WRITE 290
#define COL 291
#define DDOT 292




/* Copy the first part of user declarations.  */
#line 1 "./source/nothing_yacc.y"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "sym_tab.h"
  extern FILE *yyin;
  void yyerror(char *);
  extern int line_no;
  extern char *symbol;
  

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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 172 "y.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   487

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  33
/* YYNRULES -- Number of rules. */
#define YYNRULES  143
/* YYNRULES -- Number of states. */
#define YYNSTATES  285

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    38,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,    10,    17,    23,    29,    35,    41,    46,
      51,    55,    58,    63,    68,    73,    79,    85,    91,    93,
      97,   101,   103,   105,   107,   109,   111,   113,   120,   127,
     134,   141,   145,   149,   153,   157,   161,   165,   168,   171,
     175,   178,   185,   192,   199,   205,   211,   217,   222,   227,
     231,   235,   239,   243,   247,   251,   255,   261,   267,   273,
     275,   277,   279,   281,   283,   285,   287,   289,   293,   297,
     302,   307,   313,   319,   324,   329,   333,   337,   339,   343,
     347,   350,   353,   356,   359,   361,   365,   369,   371,   375,
     379,   381,   383,   385,   387,   394,   401,   408,   413,   418,
     423,   428,   433,   438,   443,   448,   453,   458,   462,   467,
     471,   476,   480,   484,   486,   490,   494,   497,   499,   503,
     507,   511,   515,   519,   523,   527,   530,   532,   534,   536,
     538,   540,   542,   546,   549,   553,   555,   557,   562,   566,
     571,   575,   580,   584
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      47,     0,    -1,    28,    14,    38,    48,    55,    71,    -1,
      28,    14,     1,    48,    55,    71,    -1,    28,    14,    38,
      55,    71,    -1,    28,    14,     1,    55,    71,    -1,    28,
      14,    38,    48,    71,    -1,    28,    14,     1,    48,    71,
      -1,    28,    14,    38,    71,    -1,    28,    14,     1,    71,
      -1,    56,    33,    49,    -1,    33,    49,    -1,    50,    45,
      51,    38,    -1,    50,     1,    51,    38,    -1,    50,    45,
      51,     1,    -1,    49,    50,    45,    51,    38,    -1,    49,
      50,     1,    51,    38,    -1,    49,    50,    45,    51,     1,
      -1,    14,    -1,    50,    39,    14,    -1,    50,     1,    14,
      -1,    52,    -1,    53,    -1,    16,    -1,    12,    -1,     7,
      -1,     1,    -1,     4,    43,    54,    44,    25,    52,    -1,
       4,     1,    54,    44,    25,    52,    -1,     4,    43,    54,
       1,    25,    52,    -1,     4,    43,    54,    44,     1,    52,
      -1,    17,    37,    17,    -1,    19,    37,    19,    -1,    17,
       1,    17,    -1,    19,     1,    19,    -1,    55,    56,    38,
      -1,    55,    56,     1,    -1,    56,    38,    -1,    56,     1,
      -1,    57,    48,    71,    -1,    57,    71,    -1,    13,    14,
      58,    45,    52,    38,    -1,    13,    14,    58,     1,    52,
      38,    -1,    13,    14,    58,    45,    52,     1,    -1,    13,
      14,    45,    52,    38,    -1,    13,    14,     1,    52,    38,
      -1,    13,    14,    45,    52,     1,    -1,    27,    14,    58,
      38,    -1,    27,    14,    58,     1,    -1,    27,    14,    38,
      -1,    27,    14,     1,    -1,    41,    59,    42,    -1,     1,
      59,    42,    -1,    41,    59,     1,    -1,    50,    45,    51,
      -1,    50,     1,    51,    -1,    59,    38,    50,    45,    51,
      -1,    59,     1,    50,    45,    51,    -1,    59,    38,    50,
       1,    51,    -1,    61,    -1,    68,    -1,    62,    -1,    63,
      -1,    70,    -1,    69,    -1,    71,    -1,    73,    -1,    77,
      36,    75,    -1,    77,     1,    75,    -1,    34,    75,     9,
      60,    -1,    34,    75,     1,    60,    -1,     6,    75,    25,
      64,    11,    -1,     6,    75,     1,    64,    11,    -1,     6,
      75,    25,    64,    -1,     6,    75,    25,    11,    -1,     6,
      75,    11,    -1,     6,    75,     1,    -1,    65,    -1,    64,
      38,    65,    -1,    64,     1,    65,    -1,    64,    38,    -1,
      64,     1,    -1,    38,    65,    -1,     1,    65,    -1,    38,
      -1,    66,    45,    60,    -1,    66,     1,    60,    -1,    67,
      -1,    66,    39,    67,    -1,    66,     1,    67,    -1,    17,
      -1,    18,    -1,    19,    -1,     1,    -1,    15,    75,    32,
      60,    10,    60,    -1,    15,    75,     1,    60,    10,    60,
      -1,    15,    75,    32,    60,     1,    60,    -1,    15,    75,
      32,    60,    -1,    15,    75,     1,    60,    -1,    29,    41,
      77,    42,    -1,    29,     1,    77,    42,    -1,    29,    41,
      77,     1,    -1,    29,    41,     1,    42,    -1,    35,    41,
      75,    42,    -1,    35,     1,    75,    42,    -1,    35,    41,
      75,     1,    -1,    35,    41,    31,    42,    -1,    14,    41,
      42,    -1,    14,    41,    74,    42,    -1,     1,    74,    42,
      -1,    14,    41,    74,     1,    -1,     5,    72,    11,    -1,
       5,    72,     1,    -1,    60,    -1,    72,    38,    60,    -1,
      72,     1,    60,    -1,    30,    75,    -1,    75,    -1,    74,
      39,    75,    -1,    74,     1,    75,    -1,    75,    20,    75,
      -1,    75,    21,    75,    -1,    75,    26,    75,    -1,    75,
       3,    75,    -1,    75,    22,    75,    -1,    24,    75,    -1,
      76,    -1,    77,    -1,    17,    -1,    18,    -1,    19,    -1,
      31,    -1,    41,    75,    42,    -1,     1,    42,    -1,    41,
      75,     1,    -1,    78,    -1,    14,    -1,    14,    43,    75,
      44,    -1,     1,    75,    44,    -1,    14,    43,    75,     1,
      -1,    14,    41,    42,    -1,    14,    41,    74,    42,    -1,
       1,    74,    42,    -1,    14,    41,    74,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,    34,    34,    38,    43,    47,    52,    56,    61,    65,
      73,    74,    80,    81,    85,    89,    91,    95,   102,   103,
     104,   111,   112,   117,   118,   119,   120,   127,   129,   133,
     137,   144,   145,   146,   150,   157,   158,   162,   163,   169,
     170,   175,   177,   181,   185,   187,   191,   195,   197,   200,
     202,   209,   210,   214,   222,   224,   228,   230,   234,   241,
     242,   243,   244,   245,   246,   247,   248,   253,   255,   262,
     264,   271,   273,   277,   281,   283,   287,   294,   296,   297,
     301,   302,   306,   308,   312,   317,   319,   327,   329,   331,
     339,   340,   341,   342,   350,   352,   356,   360,   362,   369,
     371,   376,   381,   386,   388,   393,   398,   403,   405,   407,
     410,   418,   420,   428,   429,   431,   439,   444,   445,   447,
     455,   456,   457,   458,   459,   460,   461,   466,   467,   468,
     469,   470,   472,   474,   478,   481,   486,   492,   494,   498,
     505,   507,   509,   512
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ARRAY", "Begin", "CASE", 
  "CHARACTER", "CONSTANT", "DO", "ELSE", "END", "FLOAT", "FUNCTION", 
  "IDENTIFIER", "IF", "INTEGER", "INTNUM", "FLOATNUM", "CHARCONST", 
  "RelOp", "AddOp", "MulOp", "MOD", "NOT", "OF", "OR", "PROCEDURE", 
  "PROGRAM", "READ", "RETURN", "STRINGCONSTANT", "THEN", "VAR", "WHILE", 
  "WRITE", "COL", "DDOT", "';'", "','", "\"'\"", "'('", "')'", "'['", 
  "']'", "':'", "$accept", "Program", "DeclSet", "Decls", "Idents", 
  "Type", "StdType", "ArrayType", "Dim", "SubProgs", "SubProg", "Head", 
  "Args", "Params", "Stmt", "Assignment", "WhileStmt", "CaseStmt", 
  "Cases", "CaseElt", "CaseLabels", "Labels", "IfStmt", "IOStmt", 
  "Invocation", "Block", "Stmts", "Return", "Exprs", "Expr", "Factor", 
  "Variable", "Function", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    59,    44,
     293,    40,    41,    91,    93,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    46,    47,    47,    47,    47,    47,    47,    47,    47,
      48,    48,    49,    49,    49,    49,    49,    49,    50,    50,
      50,    51,    51,    52,    52,    52,    52,    53,    53,    53,
      53,    54,    54,    54,    54,    55,    55,    55,    55,    56,
      56,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    59,    59,    59,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    61,    62,
      62,    63,    63,    63,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    66,    66,    66,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    70,
      70,    71,    71,    72,    72,    72,    73,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    77,    77,    77,    77,
      78,    78,    78,    78
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     6,     6,     5,     5,     5,     5,     4,     4,
       3,     2,     4,     4,     4,     5,     5,     5,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     6,     6,     6,
       6,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       2,     6,     6,     6,     5,     5,     5,     4,     4,     3,
       3,     3,     3,     3,     3,     3,     5,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       4,     5,     5,     4,     4,     3,     3,     1,     3,     3,
       2,     2,     2,     2,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     1,     6,     6,     6,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     3,     4,     3,
       4,     3,     3,     1,     3,     3,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     2,     3,     1,     1,     4,     3,     4,
       3,     4,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,     8,     0,
       0,   136,     0,     0,     0,     0,     0,   113,    59,    61,
      62,    60,    64,    63,    65,     0,    66,     0,     0,     0,
      18,    11,     0,     0,     0,     7,     0,     5,    38,     0,
      37,     0,     0,    40,     0,     6,     4,     0,   136,   128,
     129,   130,     0,   131,     0,     0,   117,   126,   127,   135,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
     112,   111,     0,     0,     0,     0,     0,     0,     0,    50,
      49,     0,     0,     0,     0,     0,     3,    36,    35,    10,
      39,     2,   133,     0,     0,   125,     0,     0,     0,   109,
       0,     0,     0,     0,     0,   138,    76,    75,     0,   107,
       0,   117,     0,     0,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   131,     0,   115,   114,    68,    67,    26,
      25,    24,    23,     0,     0,     0,     0,     0,     0,     0,
      48,    47,     0,     0,     0,    20,     0,    21,    22,    19,
       0,   142,   140,     0,   134,   132,   119,   118,   123,   120,
     121,   124,   122,    93,    90,    91,    92,    84,     0,    77,
       0,    87,    74,    73,   110,   108,   139,   137,    98,    97,
       0,   100,   102,   101,    99,    70,    69,   104,   106,   105,
     103,     0,     0,    45,     0,     0,    52,    53,    51,    46,
      44,     0,     0,     0,     0,     0,     0,    13,    14,    12,
     143,   141,    93,    83,    82,    81,    72,    80,     0,     0,
       0,    71,     0,     0,     0,    55,    54,     0,     0,    42,
      43,    41,    16,    17,    15,     0,     0,     0,     0,    79,
      78,    93,    86,    89,    88,    85,    95,    96,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,    58,    56,    33,    31,    34,    32,     0,     0,     0,
       0,    28,    29,    30,    27
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     2,    11,    41,   143,   156,   157,   158,   247,    12,
      46,    14,    88,   145,    27,    28,    29,    30,   178,   179,
     180,   181,    31,    32,    33,    34,    35,    36,    65,    66,
      67,    68,    69
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -157
static const short yypact[] =
{
     -15,     6,    24,   128,  -157,   268,   268,   368,    16,    20,
      90,    13,    13,   146,   268,  -157,    13,    13,  -157,   286,
     286,   -16,   286,    43,   286,   286,   101,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,   182,  -157,    82,     1,   135,
    -157,    90,     9,    13,   129,  -157,   143,  -157,  -157,    90,
    -157,    33,    63,  -157,    13,  -157,  -157,   173,   226,  -157,
    -157,  -157,   286,  -157,   286,    89,   174,  -157,  -157,  -157,
     405,   215,   286,   367,    14,    21,   287,   434,   286,   305,
     399,  -157,   368,   286,   286,   457,    90,   243,    11,    90,
    -157,   147,    10,   445,    94,   471,  -157,  -157,  -157,    90,
    -157,  -157,  -157,   104,   223,  -157,   250,   286,   286,  -157,
     286,   286,   286,   286,   286,  -157,   342,  -157,   339,  -157,
     111,   287,   119,   368,   368,   286,    60,    72,   244,    40,
     368,   368,   322,   126,   276,  -157,  -157,   287,   287,  -157,
    -157,  -157,  -157,    31,   140,   114,   120,   148,   243,   243,
    -157,  -157,   445,   471,    36,  -157,   150,  -157,  -157,  -157,
     179,  -157,  -157,   112,  -157,  -157,   287,   287,   331,    65,
     177,  -157,   389,   400,  -157,  -157,  -157,   342,   211,  -157,
      35,  -157,  -157,   273,   314,  -157,  -157,  -157,   200,   201,
     174,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,   445,   471,  -157,    90,    90,  -157,    90,  -157,  -157,
    -157,   190,   181,   193,   197,   261,   261,  -157,  -157,  -157,
     314,  -157,  -157,  -157,  -157,   400,  -157,   342,   361,   421,
     368,  -157,   368,   368,   368,  -157,  -157,    62,    80,  -157,
    -157,  -157,  -157,  -157,  -157,    97,   229,   192,    28,  -157,
    -157,   314,  -157,  -157,  -157,  -157,  -157,  -157,  -157,   238,
     471,   445,   471,   272,   282,   241,   275,   289,   291,   188,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,   243,   243,   243,
     243,  -157,  -157,  -157,  -157
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -157,  -157,    17,   263,    -2,   -91,   -71,  -157,   105,   232,
     277,  -157,   281,   240,   -73,  -157,  -157,  -157,   212,  -156,
    -157,  -129,  -157,  -157,  -157,   121,  -157,  -157,   -38,   -19,
    -157,    -7,  -157
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const short yytable[] =
{
      37,    70,    85,    73,   160,    76,    77,   135,    42,   136,
      93,   152,   148,     1,   144,   125,   147,   223,     7,   103,
       3,   224,   128,    16,     4,    71,     8,    72,   126,   268,
      38,    51,   201,   120,    39,   126,   228,   215,     7,    92,
       9,   193,    86,   105,    74,   106,    87,    42,    94,    94,
     188,   189,   121,   122,    95,   153,   149,   195,   196,   132,
     134,   213,   214,   259,   137,   138,   163,   127,   129,   249,
      94,   250,   269,    37,   229,    37,   202,   211,   212,   216,
     230,   261,   194,    83,    75,   121,   112,   113,   166,   167,
     107,   168,   169,   170,   171,   172,    49,    92,   263,   253,
     254,    94,    78,    72,    40,   107,   190,   260,   159,   190,
     235,   236,   184,   220,   191,   204,    37,    37,    84,    94,
     186,   207,   110,    37,    37,   262,    15,    18,   108,     5,
      48,   109,    45,    47,   264,    53,    89,    55,    56,   111,
     112,   113,    79,   108,    97,   114,   161,    48,   150,   209,
     108,   108,   205,   185,   221,   252,   206,   255,   205,   256,
     257,   258,   208,   187,    96,   166,     6,    50,   198,   270,
     271,   272,   100,    90,    57,   101,    86,   110,   203,    49,
     218,    98,   240,    80,    50,   151,   210,    58,   217,   279,
      59,    60,    61,    81,   111,   112,   113,    62,   243,   113,
     114,   166,   237,   238,    63,   237,   281,   282,   283,   284,
     232,   234,   225,   280,    64,   102,    57,   219,   115,   241,
      82,    37,   226,    37,    57,    37,    37,    37,   239,    58,
     265,   242,    59,    60,    61,   244,   267,    58,    17,    62,
      59,    60,    61,    43,   139,    57,    63,    62,    54,   227,
     140,   164,   155,   110,    63,   141,    64,   119,    58,   142,
     275,    59,    60,    61,    64,   162,   266,   104,    62,    72,
     111,   112,   113,     7,    -1,    63,   114,   199,   245,   110,
     246,     8,    13,    13,   231,    64,   192,    57,    44,   273,
     110,    52,   165,    44,   276,     9,   111,   112,   113,   274,
      58,    10,   114,    59,    60,    61,    57,   111,   112,   113,
      62,   227,    99,   114,   277,    -1,   278,    63,   200,    58,
      91,   248,    59,    60,    61,   110,   146,    64,    58,    62,
     183,    59,    60,    61,    -1,     0,   133,     0,    62,     0,
     173,     0,   111,   112,   113,    63,    64,     0,   114,     0,
     182,   111,   112,   113,     0,    64,   174,   175,   176,   174,
     175,   176,   251,     0,   197,     0,     7,    20,   123,    19,
     110,     0,     0,     7,    20,    21,    22,   177,   174,   175,
     176,     0,    21,    22,     0,     0,     0,   111,   112,   113,
      23,    24,   110,   114,     0,    25,    26,    23,    24,   124,
      -1,    -1,    25,    26,     7,    20,   116,     0,   110,   111,
     112,   113,     0,    21,    22,    -1,   117,   174,   175,   176,
       0,     0,   222,     0,     0,   111,   112,   113,    23,    24,
     118,   114,     0,    25,    26,   130,     0,   110,   174,   175,
     176,     0,     0,   131,     0,     0,   139,     0,     0,   154,
       0,     0,   140,     0,   111,   112,   113,   141,   139,   155,
     114,   142,     0,     0,   140,     0,     0,     0,     0,   141,
       0,    40,   139,   142,     0,   154,     0,     0,   140,     0,
       0,     0,     0,   141,     0,     0,     0,   142
};

static const short yycheck[] =
{
       7,    20,     1,    22,    95,    24,    25,    80,    10,    82,
       1,     1,     1,    28,    85,     1,    87,   173,     5,    57,
      14,   177,     1,     6,     0,    41,    13,    43,    14,     1,
      14,    14,     1,    71,    14,    14,     1,     1,     5,    41,
      27,     1,    41,    62,     1,    64,    45,    49,    39,    39,
     123,   124,    71,    72,    45,    45,    45,   130,   131,    78,
      79,   152,   153,     1,    83,    84,   104,    74,    75,   225,
      39,   227,    44,    80,    39,    82,    45,   148,   149,    43,
      45,     1,    42,     1,    41,   104,    21,    22,   107,   108,
       1,   110,   111,   112,   113,   114,    33,    99,     1,   228,
     229,    39,     1,    43,    14,     1,   125,    45,    14,   128,
     201,   202,     1,     1,    42,     1,   123,   124,    36,    39,
       1,     1,     3,   130,   131,    45,     5,     6,    39,     1,
       1,    42,    11,    12,    37,    14,     1,    16,    17,    20,
      21,    22,    41,    39,     1,    26,    42,     1,     1,     1,
      39,    39,    38,    42,    42,   228,    42,   230,    38,   232,
     233,   234,    42,    44,    43,   184,    38,    38,    42,   260,
     261,   262,    51,    38,     1,    54,    41,     3,    38,    33,
       1,    38,     1,     1,    38,    38,    38,    14,    38,     1,
      17,    18,    19,    11,    20,    21,    22,    24,     1,    22,
      26,   220,   204,   205,    31,   207,   277,   278,   279,   280,
      10,    10,     1,    25,    41,    42,     1,    38,    44,    38,
      38,   228,    11,   230,     1,   232,   233,   234,    38,    14,
       1,    38,    17,    18,    19,    38,    44,    14,     6,    24,
      17,    18,    19,    11,     1,     1,    31,    24,    16,    38,
       7,     1,    14,     3,    31,    12,    41,    42,    14,    16,
      19,    17,    18,    19,    41,    42,    37,    41,    24,    43,
      20,    21,    22,     5,     1,    31,    26,     1,    17,     3,
      19,    13,     5,     6,    11,    41,    42,     1,    11,    17,
       3,    14,    42,    16,    19,    27,    20,    21,    22,    17,
      14,    33,    26,    17,    18,    19,     1,    20,    21,    22,
      24,    38,    49,    26,    25,     1,    25,    31,    42,    14,
      39,   216,    17,    18,    19,     3,    86,    41,    14,    24,
     118,    17,    18,    19,     3,    -1,    31,    -1,    24,    -1,
       1,    -1,    20,    21,    22,    31,    41,    -1,    26,    -1,
      11,    20,    21,    22,    -1,    41,    17,    18,    19,    17,
      18,    19,     1,    -1,    42,    -1,     5,     6,     1,     1,
       3,    -1,    -1,     5,     6,    14,    15,    38,    17,    18,
      19,    -1,    14,    15,    -1,    -1,    -1,    20,    21,    22,
      29,    30,     3,    26,    -1,    34,    35,    29,    30,    32,
       1,     1,    34,    35,     5,     6,     1,    -1,     3,    20,
      21,    22,    -1,    14,    15,    26,    11,    17,    18,    19,
      -1,    -1,     1,    -1,    -1,    20,    21,    22,    29,    30,
      25,    26,    -1,    34,    35,     1,    -1,     3,    17,    18,
      19,    -1,    -1,     9,    -1,    -1,     1,    -1,    -1,     4,
      -1,    -1,     7,    -1,    20,    21,    22,    12,     1,    14,
      26,    16,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,
      -1,    14,     1,    16,    -1,     4,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    16
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    28,    47,    14,     0,     1,    38,     5,    13,    27,
      33,    48,    55,    56,    57,    71,    48,    55,    71,     1,
       6,    14,    15,    29,    30,    34,    35,    60,    61,    62,
      63,    68,    69,    70,    71,    72,    73,    77,    14,    14,
      14,    49,    50,    55,    56,    71,    56,    71,     1,    33,
      38,    48,    56,    71,    55,    71,    71,     1,    14,    17,
      18,    19,    24,    31,    41,    74,    75,    76,    77,    78,
      75,    41,    43,    75,     1,    41,    75,    75,     1,    41,
       1,    11,    38,     1,    36,     1,    41,    45,    58,     1,
      38,    58,    50,     1,    39,    45,    71,     1,    38,    49,
      71,    71,    42,    74,    41,    75,    75,     1,    39,    42,
       3,    20,    21,    22,    26,    44,     1,    11,    25,    42,
      74,    75,    75,     1,    32,     1,    14,    77,     1,    77,
       1,     9,    75,    31,    75,    60,    60,    75,    75,     1,
       7,    12,    16,    50,    52,    59,    59,    52,     1,    45,
       1,    38,     1,    45,     4,    14,    51,    52,    53,    14,
      51,    42,    42,    74,     1,    42,    75,    75,    75,    75,
      75,    75,    75,     1,    17,    18,    19,    38,    64,    65,
      66,    67,    11,    64,     1,    42,     1,    44,    60,    60,
      75,    42,    42,     1,    42,    60,    60,    42,    42,     1,
      42,     1,    45,    38,     1,    38,    42,     1,    42,     1,
      38,    52,    52,    51,    51,     1,    43,    38,     1,    38,
       1,    42,     1,    65,    65,     1,    11,    38,     1,    39,
      45,    11,    10,     1,    10,    51,    51,    50,    50,    38,
       1,    38,    38,     1,    38,    17,    19,    54,    54,    65,
      65,     1,    60,    67,    67,    60,    60,    60,    60,     1,
      45,     1,    45,     1,    37,     1,    37,    44,     1,    44,
      51,    51,    51,    17,    17,    19,    19,    25,    25,     1,
      25,    52,    52,    52,    52
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1


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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
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
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
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

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
#line 34 "./source/nothing_yacc.y"
    {
                            printf("\t\t----- Correct----- \n");
                          }
    break;

  case 3:
#line 38 "./source/nothing_yacc.y"
    { 
                            printf("\tERROR AT LINE NO. %d :';' expected\n",                               line_no); yyerrok;yyclearin;
                            printf("\t\t-----Not  Correct----- \n");
                          }
    break;

  case 4:
#line 43 "./source/nothing_yacc.y"
    {
                             printf("\t\t----- Correct----- \n");
                         }
    break;

  case 5:
#line 47 "./source/nothing_yacc.y"
    { 
                           printf("\tERROR AT LINE NO. %d : ';' expected\n",                              line_no); yyerrok;yyclearin;
                           printf("\t\t-----Not  Correct----- \n");
                        }
    break;

  case 6:
#line 52 "./source/nothing_yacc.y"
    {
                          printf("\t\t----- Correct----\n");
                        }
    break;

  case 7:
#line 56 "./source/nothing_yacc.y"
    { 
                          printf("\tERROR: AT LINE NO. %d :';' expected\n",                              line_no); yyerrok;yyclearin;
                          printf("\t\t-----Not  Correct----\n");
                        }
    break;

  case 8:
#line 61 "./source/nothing_yacc.y"
    {
                           printf("\t\t---- Correct----\n");
                        }
    break;

  case 9:
#line 65 "./source/nothing_yacc.y"
    { 
                          printf("\tERROR AT LINE NO. %d:  ';' expected  token\n",line_no); yyerrok;yyclearin; 
                          printf("\t\t----Not  Correct----\n");
                        }
    break;

  case 13:
#line 81 "./source/nothing_yacc.y"
    {
                            printf("\tERROR AT LINE %d: ':' token expected after Identifiers\n",line_no);yyerrok;yyclearin; 
                           }
    break;

  case 14:
#line 85 "./source/nothing_yacc.y"
    { 
                             printf("\tERROR AT LINE %d: ';' token expected after Type Declaration\n",line_no); yyerrok;yyclearin                             ; 
                            }
    break;

  case 16:
#line 91 "./source/nothing_yacc.y"
    { 
                               printf("\tERROR AT LINE %d : ':' token expected after Identifiers",line_no); yyerrok;yyclearin; 
                               }
    break;

  case 17:
#line 95 "./source/nothing_yacc.y"
    { 
                               printf("\tERROR AT LINE %d : ';' token expected after Type Declaration\n",line_no);                                            yyerrok;yyclearin; 
                              }
    break;

  case 18:
#line 102 "./source/nothing_yacc.y"
    {printf("\t\tIDENTIFIER is %s\n",symbol); if(Insert(symbol)) printf("Insert Successfully\n");}
    break;

  case 19:
#line 103 "./source/nothing_yacc.y"
    {printf("\t\t IDENTIFIER is %s\n",symbol); if(Insert(symbol)) printf("Insert Successfully\n"); }
    break;

  case 20:
#line 104 "./source/nothing_yacc.y"
    { 
                              printf("\tERROR AT LINE %d : ',' expected betweenIdentifiers\n",line_no);  yyerrok;yyclearin; 
                             }
    break;

  case 26:
#line 120 "./source/nothing_yacc.y"
    { 
                               printf("\tERROR AT LINE %d : Std Type Missing\n"                               ,line_no);  yyerrok;yyclearin;
                          }
    break;

  case 28:
#line 129 "./source/nothing_yacc.y"
    { 
                                  printf("\tERROR AT LINE %d : '[' expected    after ARRAY token\n",line_no);                                                 yyerrok;yyclearin; 
                                 }
    break;

  case 29:
#line 133 "./source/nothing_yacc.y"
    { 
                                  printf("\tERROR AT LINE %d : ']' expected    before OF token\n",line_no);                                                   yyerrok;yyclearin; 
                                  }
    break;

  case 30:
#line 137 "./source/nothing_yacc.y"
    { 
                                   printf("\tERROR AT LINE %d : Array without  OF keyword\n",line_no); yyerrok;yyclearin; 
                                  }
    break;

  case 33:
#line 146 "./source/nothing_yacc.y"
    { 
                                  printf("\tERROR AT LINE %d : In dimenstion ofARRAY declaration\n",line_no);                                                 yyerrok;yyclearin;
                                 }
    break;

  case 34:
#line 150 "./source/nothing_yacc.y"
    { 
                                 printf("\tERROR AT LINE %d : In dimenstion of ARRAY declaration\n",line_no); yyerrok;                                        yyclearin;
                                 }
    break;

  case 36:
#line 158 "./source/nothing_yacc.y"
    { 
                                  printf("\tERROR AT LINE %d : ';' expected\n"                                   ,line_no );  yyerrok;yyclearin;
                                 }
    break;

  case 38:
#line 163 "./source/nothing_yacc.y"
    {  
                                  printf("\tERROR AT LINE %d : ';' expected\n"                                   ,line_no);  yyerrok;yyclearin;                                                }
    break;

  case 42:
#line 177 "./source/nothing_yacc.y"
    {
                                                 printf("\tERROR AT LINE %d :Passing Arguments to function ':' expected\n",line_no);                                                      yyerrok; yyclearin;
                                                }
    break;

  case 43:
#line 181 "./source/nothing_yacc.y"
    {
                                                printf("\tERROR AT LINE %d :    ';' expected after function Argument passing\n",line_no);                                                  yyerrok; yyclearin;
                                               }
    break;

  case 45:
#line 187 "./source/nothing_yacc.y"
    {
                                              printf("\tERROR AT LINE %d :     Passing Arguments to function ':' expected\n",line_no);  yyerrok;                                                yyclearin;
                                             }
    break;

  case 46:
#line 191 "./source/nothing_yacc.y"
    { 
                                             printf("\tERROR AT LINE %d : ';'  expected after function Argument passing\n",line_no);  yyerrok;                                                 yyclearin;
                                            }
    break;

  case 48:
#line 197 "./source/nothing_yacc.y"
    { 
                                           printf ("';' expected\n",line_no);                                             yyerrok; yyclearin; 
                                           }
    break;

  case 50:
#line 202 "./source/nothing_yacc.y"
    {
                                           printf ("';' expected\n",line_no);                                             yyerrok; yyclearin; 
                                           }
    break;

  case 52:
#line 210 "./source/nothing_yacc.y"
    {
                                printf("\tERROR AT LINE %d : '(' missing in    Function Or Procedure\n",line_no);                                             yyerrok;yyclearin;
                               }
    break;

  case 53:
#line 214 "./source/nothing_yacc.y"
    {
                              printf("\tERROR AT LINE %d : ')' missing in      Function Or Procedure\n",line_no); yyerrok;                                    yyclearin;
                            }
    break;

  case 55:
#line 224 "./source/nothing_yacc.y"
    {
                            printf("\tERROR AT LINE %d : ':' expected in parameters before type\n",line_no);yyerrok;                                    yyclearin;
                          }
    break;

  case 57:
#line 230 "./source/nothing_yacc.y"
    {
                                   printf("\tERROR AT LINE %d : ';' expected in parameters before identifiers\n",line_no)                                   ; yyerrok; yyclearin;
                                  }
    break;

  case 58:
#line 234 "./source/nothing_yacc.y"
    {
                                    printf("\tERROR AT LINE %d : ':' expected  in parameters before Type\n",line_no);                                         yyerrok;yyclearin;
                                  }
    break;

  case 68:
#line 255 "./source/nothing_yacc.y"
    {
                                  printf("\tERROR AT LINE %d : In assignment   COLON missing\n",line_no); yyerrok;                                            yyclearin;
                                 }
    break;

  case 70:
#line 264 "./source/nothing_yacc.y"
    {
                                printf("\tERROR AT LINE %d : Keyword DO missing in While statement\n",line_no);                                        yyerrok;yyclearin;
                               }
    break;

  case 72:
#line 273 "./source/nothing_yacc.y"
    {
                                   printf("\tERROR AT LINE %d : Keyword OF missing in CASE statement\n",line_no);  yyerrok;yyclearin;
                                 }
    break;

  case 73:
#line 277 "./source/nothing_yacc.y"
    {
                                        printf("\tERROR AT LINE %d : CASE statement without END keyword\n",line_no);  yyerrok;yyclearin;
                                       }
    break;

  case 75:
#line 283 "./source/nothing_yacc.y"
    {
                                   printf("\tERROR AT LINE %d : Keyword OF     missing in CASE statement\n",line_no);                                         yyerrok;yyclearin;
                                  }
    break;

  case 76:
#line 287 "./source/nothing_yacc.y"
    {
                                   printf("\tERROR AT LINE %d : CASE statement without END keyword\n",line_no); yyerrok;                                      yyclearin;
                                 }
    break;

  case 79:
#line 297 "./source/nothing_yacc.y"
    {
                                  printf("\tERROR AT LINE %d : ';' missing     before Case Labels\n",line_no); yyerrok;                                       yyclearin;
                                 }
    break;

  case 81:
#line 302 "./source/nothing_yacc.y"
    {
                              printf("\tERROR AT LINE %d : ';' missing in Case Statement\n",line_no); yyerrok;yyclearin;
                             }
    break;

  case 83:
#line 308 "./source/nothing_yacc.y"
    {  
                             printf("\tERROR AT LINE %d : ';' missing before Case Labels\n",line_no); yyerrok;yyclearin;
                            }
    break;

  case 86:
#line 319 "./source/nothing_yacc.y"
    {
                               printf("\tERROR AT LINE %d : ':' missing after  Case Label\n",line_no); 
                         yyerrok;yyclearin;
                              }
    break;

  case 89:
#line 331 "./source/nothing_yacc.y"
    {
                              printf("\tERROR AT LINE %d : ',' missing betweem Labels\n",line_no); 
                              yyerrok;yyclearin;
                             }
    break;

  case 93:
#line 342 "./source/nothing_yacc.y"
    {
                              printf("\tERROR AT LINE %d : Label missing in Case Statement\n",line_no);
                              yyerrok;yyclearin;
                             }
    break;

  case 95:
#line 352 "./source/nothing_yacc.y"
    {
                                 printf("\tERROR AT LINE %d : Keyword THEN  missing in IF statement\n",line_no);  yyerrok;yyclearin;
                                }
    break;

  case 96:
#line 356 "./source/nothing_yacc.y"
    {
                                 printf("\tERROR AT LINE %d : Keyword ELSE     missing in IF statement\n",line_no);                                           yyerrok;yyclearin;
                                }
    break;

  case 98:
#line 362 "./source/nothing_yacc.y"
    {
                                 printf("\tERROR AT LINE %d : Keyword THEN     missing in IF statement\n",line_no);                                           yyerrok;yyclearin;
                                }
    break;

  case 100:
#line 371 "./source/nothing_yacc.y"
    {
                               printf("\tERROR AT LINE %d : '(' missing after  READ\n",line_no); 
                                yyerrok;yyclearin;
                              }
    break;

  case 101:
#line 376 "./source/nothing_yacc.y"
    {
                                 printf("\tERROR AT LINE %d : ')' missing in   READ\n",line_no); 
                                 yyerrok;yyclearin;
                                }
    break;

  case 102:
#line 381 "./source/nothing_yacc.y"
    {
                                 printf("\tERROR AT LINE %d : Argument of      READ\n",line_no); 
                                 yyerrok;yyclearin;
                                }
    break;

  case 104:
#line 388 "./source/nothing_yacc.y"
    {
                                 printf("\tERROR AT LINE %d : '(' missing afterWRITE\n",line_no); 
                                 yyerrok;yyclearin;
                                }
    break;

  case 105:
#line 393 "./source/nothing_yacc.y"
    {
                                 printf("\tERROR AT LINE %d : ')' missing in   WRITE\n",line_no); 
                                 yyerrok;yyclearin;
                                }
    break;

  case 109:
#line 407 "./source/nothing_yacc.y"
    {
                                       printf("\tERROR AT LINE %d : '('         missing after Identifier\n",line_no);                                           yyerrok;yyclearin;
                                      }
    break;

  case 110:
#line 410 "./source/nothing_yacc.y"
    {
                                      printf("\tERROR AT LINE %d : ')' missing\n ",line_no); 
                                       yyerrok;yyclearin;
                                      }
    break;

  case 112:
#line 420 "./source/nothing_yacc.y"
    {
                           printf("\tERROR AT LINE %d : Begin without END keyword\n",line_no); 
                           yyerrok;yyclearin;
                          }
    break;

  case 115:
#line 431 "./source/nothing_yacc.y"
    {
                         printf("\tERROR AT LINE %d : ';' missing within  Statements\n",line_no); 
                         yyerrok;yyclearin;
                        }
    break;

  case 119:
#line 447 "./source/nothing_yacc.y"
    {
                       printf("\tERROR AT LINE %d : ',' missing within Expressions\n",line_no); 
                        yyerrok;yyclearin;
                      }
    break;

  case 133:
#line 474 "./source/nothing_yacc.y"
    {
                            printf("\tERROR AT LINE %d : '(' missing\n",line_no                            ); yyerrok;yyclearin;
                          }
    break;

  case 134:
#line 478 "./source/nothing_yacc.y"
    {
                           printf("\tERROR AT LINE %d : ')' missing\n",line_no)                           ; yyerrok;yyclearin;
                          }
    break;

  case 136:
#line 486 "./source/nothing_yacc.y"
    {if(Check(symbol))
                        printf("\tSymbol %s is Present\n",symbol);
                      else
                        printf("\tSymbol %s is NOT Present\n",symbol);
                      }
    break;

  case 138:
#line 494 "./source/nothing_yacc.y"
    {
                                    printf("\tERROR AT LINE %d : '[' missing\n"                                    ,line_no); yyerrok;yyclearin;
                                   }
    break;

  case 139:
#line 498 "./source/nothing_yacc.y"
    {
                                    printf("\tERROR AT LINE %d : ']' missing\n"                                    ,line_no); yyerrok;yyclearin;
                                   }
    break;

  case 142:
#line 509 "./source/nothing_yacc.y"
    {
                                     printf("\tERROR AT LINE %d : '(' missing\n ",line_no); yyerrok;yyclearin;                                                                                    }
    break;

  case 143:
#line 512 "./source/nothing_yacc.y"
    {
                                     printf("\tERROR AT LINE %d : '(' missing   \n",line_no); yyerrok;yyclearin;                                                                                  }
    break;


    }

/* Line 999 of yacc.c.  */
#line 1824 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 518 "./source/nothing_yacc.y"


void yyerror(char *err)
{
  return;
}


int Hash_value(char *symbol)
{
  char *p;
  unsigned h=0,g;
  for(p=symbol; *p!='\0'; p++)
    {
      h=(h << 4)+(*p);
      if(g=h & 0xf0000000)
	{
	  h=h ^ (g >> 24);
	  h=h ^ g;
	}
    }
  return (h % max_no_symbols);
}

int Insert(char* new_symbol)
{
  int pc=0;
  int probe;
  int inc=1;
  Sym_tab *H;
  
  
  H=ps->items[ps->top];
  probe=Hash_value(new_symbol);
  
  while(H->name[probe] !=(char*)'\0' && strcmp(new_symbol, H->name[probe]) && pc<= max_no_symbols/2)
    {
      pc++;
      probe=(probe+inc) % max_no_symbols;
      inc+=2;
    }

  if(H->name[probe] ==(char*)'\0')
    {
      H->name[probe]=new_symbol;
      return 1;
    }

  else if(strcmp(new_symbol, H->name[probe]) == 0)
    {
      perror("Same key cant be appear");
      return 0;
    }
  else
    {
      perror("Hash Table is full");
      return 0;
    }
}

int Check(char *new_symbol)
{
  int pc=0;
  int probe;
  int inc=1,i;
  Sym_tab *H;

  for(i=ps->top; i>-1; i--){
    H=ps->items[i];
    probe=Hash_value(new_symbol);

  
    while(H->name[probe]!=(char *)'\0' && strcmp(new_symbol,H->name[probe]) && pc<= max_no_symbols/2)
      {
	pc++;
	probe=(probe+inc) % max_no_symbols;
	inc+=2;
      }
    
    if(H->name[probe]!=(char *)'\0' && !strcmp(new_symbol, H->name[probe]))
      {
	//printf("\t SYMBOL %s is Declared\n",new_symbol);
	return 1;
      }
    
    /* else */
/*       { */
/* 	printf("\tSYMBOL %s is NOT declared in %dth position of Stack\n",new_symbol,i); */
/*       } */
  }
  //printf("\tERROR: SYMBOL %s is undeclared\n");
  return 0;
}


main(int argc, char *argv[])
{
  if(argc > 1)
    {
      FILE *fp;
      fp=fopen(argv[1],"r");
      if(!fp)
	{
	  printf("Error in Opening the file\n");
	  exit(0);
	}
      yyin=fp;
    }
    yyparse();
}


