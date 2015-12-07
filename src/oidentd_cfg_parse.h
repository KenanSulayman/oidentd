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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_USER = 258,
     TOK_DEFAULT = 259,
     TOK_GLOBAL = 260,
     TOK_FROM = 261,
     TOK_TO = 262,
     TOK_FPORT = 263,
     TOK_LPORT = 264,
     TOK_FORCE = 265,
     TOK_REPLY = 266,
     TOK_ALLOWDENY = 267,
     TOK_CAP = 268,
     TOK_STRING = 269
   };
#endif
#define TOK_USER 258
#define TOK_DEFAULT 259
#define TOK_GLOBAL 260
#define TOK_FROM 261
#define TOK_TO 262
#define TOK_FPORT 263
#define TOK_LPORT 264
#define TOK_FORCE 265
#define TOK_REPLY 266
#define TOK_ALLOWDENY 267
#define TOK_CAP 268
#define TOK_STRING 269




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 60 "./oidentd_cfg_parse.y"
typedef union YYSTYPE {
	int value;
	char *string;
} YYSTYPE;
/* Line 1240 of yacc.c.  */
#line 70 "y.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


