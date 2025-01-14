
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 46 "project.y"

  int integer;
  double real;
  char *text;



/* Line 1676 of yacc.c  */
#line 123 "project.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


