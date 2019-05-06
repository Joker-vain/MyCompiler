/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 13 "parser.y" /* yacc.c:1909  */

   struct treeNode* type_treenode;

#line 140 "y.tab.h" /* yacc.c:1909  */
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
