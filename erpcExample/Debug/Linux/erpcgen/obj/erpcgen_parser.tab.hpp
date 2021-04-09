/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HOME_DUCK_GITCLONES_ERPC_DEBUG_LINUX_ERPCGEN_OBJ_ERPCGEN_PARSER_TAB_HPP_INCLUDED
# define YY_YY_HOME_DUCK_GITCLONES_ERPC_DEBUG_LINUX_ERPCGEN_OBJ_ERPCGEN_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    END = 0,                       /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOK_IDENT = 258,               /* "identifier"  */
    TOK_STRING_LITERAL = 259,      /* "string"  */
    TOK_INT_LITERAL = 260,         /* "integer"  */
    TOK_FLOAT_LITERAL = 261,       /* "float"  */
    TOK_LSHIFT = 262,              /* "<<"  */
    TOK_RSHIFT = 263,              /* ">>"  */
    TOK_ARROW = 264,               /* "->"  */
    TOK_OPTIONS = 265,             /* "options"  */
    TOK_CONST = 266,               /* "const"  */
    TOK_IMPORT = 267,              /* "import"  */
    TOK_ENUM = 268,                /* "enum"  */
    TOK_STRUCT = 269,              /* "struct"  */
    TOK_UNION = 270,               /* "union"  */
    TOK_SWITCH = 271,              /* "switch"  */
    TOK_CASE = 272,                /* "case"  */
    TOK_DEFAULT = 273,             /* "default"  */
    TOK_OPTIONAL = 274,            /* "optional"  */
    TOK_BYREF = 275,               /* "byref"  */
    TOK_TYPE = 276,                /* "type"  */
    TOK_INTERFACE = 277,           /* "interface"  */
    TOK_VERSION = 278,             /* "version"  */
    TOK_IN = 279,                  /* "in"  */
    TOK_OUT = 280,                 /* "out"  */
    TOK_INOUT = 281,               /* "inout"  */
    TOK_ASYNC = 282,               /* "async"  */
    TOK_ONEWAY = 283,              /* "oneway"  */
    TOK_LIST = 284,                /* "list"  */
    TOK_REF = 285,                 /* "ref"  */
    TOK_TRUE = 286,                /* "true"  */
    TOK_FALSE = 287,               /* "false"  */
    TOK_VOID = 288,                /* "void"  */
    TOK_ML_COMMENT = 289,          /* "doxygen ml. comment"  */
    TOK_IL_COMMENT = 290,          /* "doxygen il. comment"  */
    TOK_PROGRAM = 291,             /* "program"  */
    TOK_CHILDREN = 292,            /* TOK_CHILDREN  */
    TOK_ENUM_MEMBER = 293,         /* TOK_ENUM_MEMBER  */
    TOK_STRUCT_MEMBER = 294,       /* TOK_STRUCT_MEMBER  */
    TOK_UNION_CASE = 295,          /* TOK_UNION_CASE  */
    TOK_FUNCTION = 296,            /* TOK_FUNCTION  */
    TOK_PARAM = 297,               /* TOK_PARAM  */
    TOK_RETURN = 298,              /* TOK_RETURN  */
    TOK_EXPR = 299,                /* TOK_EXPR  */
    TOK_ANNOTATION = 300,          /* TOK_ANNOTATION  */
    TOK_UNARY_NEGATE = 301,        /* TOK_UNARY_NEGATE  */
    TOK_ARRAY = 302,               /* TOK_ARRAY  */
    UNARY_OP = 303                 /* UNARY_OP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 68 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"

    int64_t m_int;
/*    std::string * m_str;*/
    erpcgen::Token * m_token;
    erpcgen::AstNode * m_ast;

#line 119 "/home/duck/gitclones/erpc/Debug/Linux/erpcgen/obj/erpcgen_parser.tab.hpp"

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



int yyparse (erpcgen::ErpcLexer * lexer, erpcgen::AstNode ** resultAST);
/* "%code provides" blocks.  */
#line 75 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"

/*! @brief Returns the string containing the human-readable name of a token. */
const char * get_token_name(int tok);

#line 150 "/home/duck/gitclones/erpc/Debug/Linux/erpcgen/obj/erpcgen_parser.tab.hpp"

#endif /* !YY_YY_HOME_DUCK_GITCLONES_ERPC_DEBUG_LINUX_ERPCGEN_OBJ_ERPCGEN_PARSER_TAB_HPP_INCLUDED  */
