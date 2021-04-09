/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 34 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"

#include "ErpcLexer.h"
#include "AstNode.h"
#include "Logging.h"
#include "format_string.h"

using namespace erpcgen;

/*! Our special location type. */
#define YYLTYPE token_loc_t

// this indicates that we're using our own type. it should be unset automatically
// but that's not working for some reason with the .hpp file.
#if defined(YYLTYPE_IS_TRIVIAL)
    #undef YYLTYPE_IS_TRIVIAL
    #define YYLTYPE_IS_TRIVIAL 0
#endif

/*! Default location action */
#define YYLLOC_DEFAULT(Current, Rhs, N) \
    do {        \
        if (N)  \
        {       \
            (Current).m_firstLine = YYRHSLOC(Rhs, 1).m_firstLine;   \
            (Current).m_lastLine = YYRHSLOC(Rhs, N).m_lastLine;     \
        }       \
        else    \
        {       \
            (Current).m_firstLine = (Current).m_lastLine = YYRHSLOC(Rhs, 0).m_lastLine; \
        }       \
    } while (0)

#line 104 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "erpcgen_parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_IDENT = 3,                  /* "identifier"  */
  YYSYMBOL_TOK_STRING_LITERAL = 4,         /* "string"  */
  YYSYMBOL_TOK_INT_LITERAL = 5,            /* "integer"  */
  YYSYMBOL_TOK_FLOAT_LITERAL = 6,          /* "float"  */
  YYSYMBOL_7_ = 7,                         /* '@'  */
  YYSYMBOL_8_ = 8,                         /* '('  */
  YYSYMBOL_9_ = 9,                         /* ')'  */
  YYSYMBOL_10_ = 10,                       /* '{'  */
  YYSYMBOL_11_ = 11,                       /* '}'  */
  YYSYMBOL_12_ = 12,                       /* '['  */
  YYSYMBOL_13_ = 13,                       /* ']'  */
  YYSYMBOL_14_ = 14,                       /* '<'  */
  YYSYMBOL_15_ = 15,                       /* '>'  */
  YYSYMBOL_16_ = 16,                       /* '='  */
  YYSYMBOL_17_ = 17,                       /* ','  */
  YYSYMBOL_18_ = 18,                       /* ';'  */
  YYSYMBOL_19_ = 19,                       /* ':'  */
  YYSYMBOL_20_ = 20,                       /* '+'  */
  YYSYMBOL_21_ = 21,                       /* '-'  */
  YYSYMBOL_22_ = 22,                       /* '*'  */
  YYSYMBOL_23_ = 23,                       /* '/'  */
  YYSYMBOL_24_ = 24,                       /* '%'  */
  YYSYMBOL_25_ = 25,                       /* '^'  */
  YYSYMBOL_26_ = 26,                       /* '~'  */
  YYSYMBOL_27_ = 27,                       /* '&'  */
  YYSYMBOL_28_ = 28,                       /* '|'  */
  YYSYMBOL_TOK_LSHIFT = 29,                /* "<<"  */
  YYSYMBOL_TOK_RSHIFT = 30,                /* ">>"  */
  YYSYMBOL_TOK_ARROW = 31,                 /* "->"  */
  YYSYMBOL_TOK_OPTIONS = 32,               /* "options"  */
  YYSYMBOL_TOK_CONST = 33,                 /* "const"  */
  YYSYMBOL_TOK_IMPORT = 34,                /* "import"  */
  YYSYMBOL_TOK_ENUM = 35,                  /* "enum"  */
  YYSYMBOL_TOK_STRUCT = 36,                /* "struct"  */
  YYSYMBOL_TOK_UNION = 37,                 /* "union"  */
  YYSYMBOL_TOK_SWITCH = 38,                /* "switch"  */
  YYSYMBOL_TOK_CASE = 39,                  /* "case"  */
  YYSYMBOL_TOK_DEFAULT = 40,               /* "default"  */
  YYSYMBOL_TOK_OPTIONAL = 41,              /* "optional"  */
  YYSYMBOL_TOK_BYREF = 42,                 /* "byref"  */
  YYSYMBOL_TOK_TYPE = 43,                  /* "type"  */
  YYSYMBOL_TOK_INTERFACE = 44,             /* "interface"  */
  YYSYMBOL_TOK_VERSION = 45,               /* "version"  */
  YYSYMBOL_TOK_IN = 46,                    /* "in"  */
  YYSYMBOL_TOK_OUT = 47,                   /* "out"  */
  YYSYMBOL_TOK_INOUT = 48,                 /* "inout"  */
  YYSYMBOL_TOK_ASYNC = 49,                 /* "async"  */
  YYSYMBOL_TOK_ONEWAY = 50,                /* "oneway"  */
  YYSYMBOL_TOK_LIST = 51,                  /* "list"  */
  YYSYMBOL_TOK_REF = 52,                   /* "ref"  */
  YYSYMBOL_TOK_TRUE = 53,                  /* "true"  */
  YYSYMBOL_TOK_FALSE = 54,                 /* "false"  */
  YYSYMBOL_TOK_VOID = 55,                  /* "void"  */
  YYSYMBOL_TOK_ML_COMMENT = 56,            /* "doxygen ml. comment"  */
  YYSYMBOL_TOK_IL_COMMENT = 57,            /* "doxygen il. comment"  */
  YYSYMBOL_TOK_PROGRAM = 58,               /* "program"  */
  YYSYMBOL_TOK_CHILDREN = 59,              /* TOK_CHILDREN  */
  YYSYMBOL_TOK_ENUM_MEMBER = 60,           /* TOK_ENUM_MEMBER  */
  YYSYMBOL_TOK_STRUCT_MEMBER = 61,         /* TOK_STRUCT_MEMBER  */
  YYSYMBOL_TOK_UNION_CASE = 62,            /* TOK_UNION_CASE  */
  YYSYMBOL_TOK_FUNCTION = 63,              /* TOK_FUNCTION  */
  YYSYMBOL_TOK_PARAM = 64,                 /* TOK_PARAM  */
  YYSYMBOL_TOK_RETURN = 65,                /* TOK_RETURN  */
  YYSYMBOL_TOK_EXPR = 66,                  /* TOK_EXPR  */
  YYSYMBOL_TOK_ANNOTATION = 67,            /* TOK_ANNOTATION  */
  YYSYMBOL_TOK_UNARY_NEGATE = 68,          /* TOK_UNARY_NEGATE  */
  YYSYMBOL_TOK_ARRAY = 69,                 /* TOK_ARRAY  */
  YYSYMBOL_UNARY_OP = 70,                  /* UNARY_OP  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_root_def = 72,                  /* root_def  */
  YYSYMBOL_program = 73,                   /* program  */
  YYSYMBOL_def_list = 74,                  /* def_list  */
  YYSYMBOL_definition = 75,                /* definition  */
  YYSYMBOL_definition_base = 76,           /* definition_base  */
  YYSYMBOL_import_stmt = 77,               /* import_stmt  */
  YYSYMBOL_const_def = 78,                 /* const_def  */
  YYSYMBOL_enum_def = 79,                  /* enum_def  */
  YYSYMBOL_enumerator_list_opt = 80,       /* enumerator_list_opt  */
  YYSYMBOL_comma_opt = 81,                 /* comma_opt  */
  YYSYMBOL_semi_opt = 82,                  /* semi_opt  */
  YYSYMBOL_comma_semi_opt = 83,            /* comma_semi_opt  */
  YYSYMBOL_enumerator_list = 84,           /* enumerator_list  */
  YYSYMBOL_enumerator = 85,                /* enumerator  */
  YYSYMBOL_interface_def = 86,             /* interface_def  */
  YYSYMBOL_function_def_list_opt = 87,     /* function_def_list_opt  */
  YYSYMBOL_function_def_list = 88,         /* function_def_list  */
  YYSYMBOL_function_def = 89,              /* function_def  */
  YYSYMBOL_function_type_base_def = 90,    /* function_type_base_def  */
  YYSYMBOL_function_type_def = 91,         /* function_type_def  */
  YYSYMBOL_function_return_type = 92,      /* function_return_type  */
  YYSYMBOL_param_list_opt = 93,            /* param_list_opt  */
  YYSYMBOL_param_list_opt_in = 94,         /* param_list_opt_in  */
  YYSYMBOL_param_list = 95,                /* param_list  */
  YYSYMBOL_param_list_in = 96,             /* param_list_in  */
  YYSYMBOL_param_def = 97,                 /* param_def  */
  YYSYMBOL_param_def_in = 98,              /* param_def_in  */
  YYSYMBOL_param_dir_in = 99,              /* param_dir_in  */
  YYSYMBOL_param_dir = 100,                /* param_dir  */
  YYSYMBOL_callback_def = 101,             /* callback_def  */
  YYSYMBOL_callback_param_list_opt = 102,  /* callback_param_list_opt  */
  YYSYMBOL_callback_param_list = 103,      /* callback_param_list  */
  YYSYMBOL_callback_param = 104,           /* callback_param  */
  YYSYMBOL_typedef_def = 105,              /* typedef_def  */
  YYSYMBOL_struct_def = 106,               /* struct_def  */
  YYSYMBOL_struct_member_list = 107,       /* struct_member_list  */
  YYSYMBOL_struct_member = 108,            /* struct_member  */
  YYSYMBOL_struct_member_options_list = 109, /* struct_member_options_list  */
  YYSYMBOL_struct_member_options = 110,    /* struct_member_options  */
  YYSYMBOL_struct_data_type = 111,         /* struct_data_type  */
  YYSYMBOL_union_def = 112,                /* union_def  */
  YYSYMBOL_union_type_def = 113,           /* union_type_def  */
  YYSYMBOL_union_case_list = 114,          /* union_case_list  */
  YYSYMBOL_union_case = 115,               /* union_case  */
  YYSYMBOL_union_case_expr_list = 116,     /* union_case_expr_list  */
  YYSYMBOL_union_member_list_opt = 117,    /* union_member_list_opt  */
  YYSYMBOL_union_member_list = 118,        /* union_member_list  */
  YYSYMBOL_union_member = 119,             /* union_member  */
  YYSYMBOL_simple_data_type = 120,         /* simple_data_type  */
  YYSYMBOL_data_type = 121,                /* data_type  */
  YYSYMBOL_typename = 122,                 /* typename  */
  YYSYMBOL_name_opt = 123,                 /* name_opt  */
  YYSYMBOL_list_type = 124,                /* list_type  */
  YYSYMBOL_array_type = 125,               /* array_type  */
  YYSYMBOL_annotation_list_opt = 126,      /* annotation_list_opt  */
  YYSYMBOL_annotation_list = 127,          /* annotation_list  */
  YYSYMBOL_annotation = 128,               /* annotation  */
  YYSYMBOL_annotation_value_opt = 129,     /* annotation_value_opt  */
  YYSYMBOL_const_expr = 130,               /* const_expr  */
  YYSYMBOL_doxy_ml_comment_opt = 131,      /* doxy_ml_comment_opt  */
  YYSYMBOL_doxy_ml_comment = 132,          /* doxy_ml_comment  */
  YYSYMBOL_doxy_il_comment_opt = 133,      /* doxy_il_comment_opt  */
  YYSYMBOL_int_const_expr = 134,           /* int_const_expr  */
  YYSYMBOL_expr = 135,                     /* expr  */
  YYSYMBOL_unary_expr = 136,               /* unary_expr  */
  YYSYMBOL_int_value = 137,                /* int_value  */
  YYSYMBOL_float_value = 138,              /* float_value  */
  YYSYMBOL_string_literal = 139,           /* string_literal  */
  YYSYMBOL_ident = 140,                    /* ident  */
  YYSYMBOL_ident_opt = 141                 /* ident_opt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 80 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"

/*! Forward declaration of yylex(). */
static int yylex(YYSTYPE * lvalp, YYLTYPE * yylloc, ErpcLexer * lexer);

/*! Forward declaration of error handling function. */
static void yyerror(YYLTYPE * yylloc, ErpcLexer * lexer, AstNode ** resultAST, const char * error);
#line 88 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"

/*! Function for merge two strings */
static AstNode * mergeString(Token * t1, Token * t2);

/*! Function for merge two token locations */
token_loc_t mergeLocation(const token_loc_t & l1, const token_loc_t & l2);

#line 295 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   327

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    24,    27,     2,
       8,     9,    22,    20,    17,    21,     2,    23,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    19,    18,
      14,    16,    15,     2,     7,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    12,     2,    13,    25,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    10,    28,    11,    26,     2,     2,     2,
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
       5,     6,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   256,   256,   262,   268,   273,   287,   296,   306,   310,
     318,   322,   326,   330,   334,   338,   343,   349,   359,   371,
     380,   385,   390,   391,   394,   395,   398,   399,   400,   406,
     412,   422,   431,   445,   454,   459,   468,   473,   480,   489,
     493,   502,   510,   526,   532,   540,   544,   549,   555,   560,
     568,   573,   580,   585,   595,   606,   620,   625,   629,   633,
     637,   646,   654,   665,   670,   676,   681,   688,   702,   713,
     719,   730,   735,   745,   758,   763,   769,   773,   780,   784,
     790,   798,   805,   813,   818,   826,   832,   841,   846,   854,
     858,   864,   870,   876,   883,   896,   900,   904,   911,   915,
     919,   925,   931,   936,   944,   954,   964,   969,   977,   982,
     992,   999,  1009,  1013,  1018,  1023,  1027,  1034,  1039,  1044,
    1054,  1061,  1073,  1081,  1088,  1092,  1096,  1100,  1106,  1112,
    1118,  1124,  1130,  1136,  1142,  1148,  1154,  1160,  1164,  1171,
    1175,  1180,  1187,  1191,  1195,  1201,  1207,  1211,  1217,  1223,
    1228
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"identifier\"",
  "\"string\"", "\"integer\"", "\"float\"", "'@'", "'('", "')'", "'{'",
  "'}'", "'['", "']'", "'<'", "'>'", "'='", "','", "';'", "':'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "'~'", "'&'", "'|'", "\"<<\"",
  "\">>\"", "\"->\"", "\"options\"", "\"const\"", "\"import\"", "\"enum\"",
  "\"struct\"", "\"union\"", "\"switch\"", "\"case\"", "\"default\"",
  "\"optional\"", "\"byref\"", "\"type\"", "\"interface\"", "\"version\"",
  "\"in\"", "\"out\"", "\"inout\"", "\"async\"", "\"oneway\"", "\"list\"",
  "\"ref\"", "\"true\"", "\"false\"", "\"void\"",
  "\"doxygen ml. comment\"", "\"doxygen il. comment\"", "\"program\"",
  "TOK_CHILDREN", "TOK_ENUM_MEMBER", "TOK_STRUCT_MEMBER", "TOK_UNION_CASE",
  "TOK_FUNCTION", "TOK_PARAM", "TOK_RETURN", "TOK_EXPR", "TOK_ANNOTATION",
  "TOK_UNARY_NEGATE", "TOK_ARRAY", "UNARY_OP", "$accept", "root_def",
  "program", "def_list", "definition", "definition_base", "import_stmt",
  "const_def", "enum_def", "enumerator_list_opt", "comma_opt", "semi_opt",
  "comma_semi_opt", "enumerator_list", "enumerator", "interface_def",
  "function_def_list_opt", "function_def_list", "function_def",
  "function_type_base_def", "function_type_def", "function_return_type",
  "param_list_opt", "param_list_opt_in", "param_list", "param_list_in",
  "param_def", "param_def_in", "param_dir_in", "param_dir", "callback_def",
  "callback_param_list_opt", "callback_param_list", "callback_param",
  "typedef_def", "struct_def", "struct_member_list", "struct_member",
  "struct_member_options_list", "struct_member_options",
  "struct_data_type", "union_def", "union_type_def", "union_case_list",
  "union_case", "union_case_expr_list", "union_member_list_opt",
  "union_member_list", "union_member", "simple_data_type", "data_type",
  "typename", "name_opt", "list_type", "array_type", "annotation_list_opt",
  "annotation_list", "annotation", "annotation_value_opt", "const_expr",
  "doxy_ml_comment_opt", "doxy_ml_comment", "doxy_il_comment_opt",
  "int_const_expr", "expr", "unary_expr", "int_value", "float_value",
  "string_literal", "ident", "ident_opt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,    64,    40,    41,
     123,   125,    91,    93,    60,    62,    61,    44,    59,    58,
      43,    45,    42,    47,    37,    94,   126,    38,   124,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303
};
#endif

#define YYPACT_NINF (-201)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-119)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,    35,  -201,    59,   -11,    20,  -201,  -201,    39,   -23,
    -201,  -201,    21,    39,  -201,    60,    25,    39,  -201,  -201,
     100,  -201,    23,    19,    60,    60,    60,    60,    60,    60,
      60,    80,  -201,  -201,  -201,  -201,  -201,  -201,  -201,   113,
    -201,   202,    60,  -201,   101,    38,  -201,  -201,  -201,  -201,
     114,  -201,   130,   132,   152,   155,   168,   174,    80,  -201,
    -201,    44,  -201,  -201,  -201,   105,  -201,   105,   105,   105,
    -201,  -201,   121,  -201,   248,  -201,  -201,  -201,   185,  -201,
     182,    19,   105,   175,    15,   137,   117,    29,    33,    47,
    -201,   138,  -201,  -201,  -201,  -201,   189,   183,  -201,  -201,
      19,   223,  -201,  -201,  -201,  -201,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,  -201,  -201,    14,   188,
     213,   193,    15,  -201,    60,    46,  -201,  -201,   105,   195,
     107,  -201,  -201,  -201,   208,  -201,   214,    56,  -201,    39,
     217,   210,  -201,    19,  -201,   199,   120,    38,  -201,   153,
     153,  -201,  -201,  -201,   280,   291,   269,   237,   237,  -201,
    -201,  -201,  -201,  -201,    90,  -201,  -201,    37,    30,  -201,
     109,  -201,  -201,  -201,  -201,    34,  -201,   190,    38,    27,
    -201,  -201,    39,   105,   218,   229,  -201,  -201,  -201,    60,
    -201,   208,   105,   109,  -201,  -201,    83,  -201,  -201,   167,
    -201,  -201,   111,  -201,    39,  -201,  -201,    19,  -201,    39,
    -201,  -201,    60,    39,  -201,  -201,  -201,    45,  -201,  -201,
    -201,   241,  -201,   208,   218,   138,   222,    80,    38,   138,
      60,  -201,   244,  -201,    39,   253,    26,  -201,  -201,   138,
     117,   138,    80,  -201,    60,   140,  -201,  -201,  -201,   138
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     118,     0,   119,     0,   118,   118,     6,     8,   107,   117,
      17,     1,   118,   107,     7,     0,     0,   106,   108,   120,
       0,   148,   114,     0,   103,   103,     0,     0,     0,     0,
       0,    25,    10,    11,    15,    16,    14,    12,    13,     0,
     109,     0,     0,   111,     0,     0,    97,    95,    96,   101,
       0,   102,     0,    70,    82,     0,     0,     0,    25,    24,
     122,    57,   146,   142,   145,     0,   113,     0,     0,     0,
     143,   144,     0,   115,   123,   137,   124,   125,   116,   126,
     114,     0,     0,     0,    21,   118,     0,     0,   118,    57,
       5,     9,    56,    59,    60,    46,     0,    45,    50,    58,
       0,     0,   139,   140,   141,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,   110,     0,     0,
       0,     0,    20,    29,     0,   118,    71,    75,     0,     0,
       0,    83,   100,    99,    98,    68,     0,   118,    36,   107,
       0,    48,    52,     0,   121,     0,    57,   150,   138,   127,
     128,   129,   130,   131,   134,   132,   133,   135,   136,   104,
     105,    18,    19,    30,   107,    69,    72,     0,     0,    87,
     118,    81,    84,    33,    37,     0,    42,    57,   150,   107,
      51,   149,   107,     0,    23,     0,    76,    77,    74,     0,
      79,    78,     0,   118,    90,    86,   118,    92,    75,    28,
      39,    40,     0,    53,   107,    44,    41,     0,    54,   107,
      22,   122,     0,   107,    88,    85,    93,     0,    26,    27,
     122,    61,    55,    43,    23,    32,     0,    25,     0,    38,
      64,   122,     0,   122,   107,     0,    23,    65,    67,    31,
       0,    73,    25,    62,     0,     0,   122,    66,    80,    94
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,  -201,   259,   122,  -201,  -201,  -201,   177,  -201,
    -200,   -54,  -201,  -201,   143,  -201,  -201,  -201,   158,  -201,
      99,  -201,  -201,  -201,  -201,  -201,   151,   128,   -82,  -201,
    -201,  -201,  -201,    62,  -201,   221,  -201,   191,   119,  -201,
    -201,  -201,  -201,    78,  -128,  -201,   126,  -201,   127,   -62,
    -201,  -201,   297,  -201,  -201,   -10,  -201,   307,   245,   206,
      16,  -201,   -50,   -76,   173,  -201,  -201,  -201,  -201,   -15,
     149
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    31,     7,    32,    33,   121,
     211,    60,   220,   122,   123,    34,   136,   137,   138,   199,
      35,   206,    96,   140,    97,   141,    98,   142,    99,   100,
     201,   235,   236,   237,    36,    37,   125,   126,   167,   188,
     189,   190,    38,   130,   131,   168,   195,   196,   197,    45,
     135,    46,    50,    47,    48,    16,    17,    18,    43,    72,
      13,     9,    91,    73,    74,    75,    76,    77,    78,    79,
     182
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    39,   172,    20,    90,    39,   119,   143,    49,    51,
      53,    54,    55,    56,    57,    58,     8,    -4,  -118,   118,
      -3,    -2,    21,     1,   231,   134,    82,    80,    21,   159,
      83,    41,    21,    19,    15,   -63,   244,    21,   147,    10,
      21,    21,    42,   210,   -35,     2,    15,   192,    21,   193,
      82,     1,   169,   -47,     1,     1,   -49,   165,    23,    11,
      24,    25,    26,    21,    24,    25,    49,   -34,    27,    28,
      44,     2,    49,     2,   185,    29,     2,     2,   186,   187,
      44,   178,   205,    30,    29,    49,   186,   187,    44,     2,
      92,    93,    94,    92,   -89,   143,    44,    15,    59,    95,
     124,   127,     2,    21,   139,   191,   183,   209,    21,   164,
      63,    64,     2,    65,    21,    81,   214,   172,   171,    61,
     -91,    61,   -89,   -89,    84,    67,    68,    14,    49,   175,
     105,    69,   181,    23,    14,    24,    25,    26,   124,     2,
      85,   127,  -102,    27,    28,   223,   128,   129,   -91,   -91,
      29,   248,    49,   139,   184,   228,   128,   129,    70,    71,
     202,   225,    86,   181,   194,     2,    92,    93,    94,   207,
     229,    87,   208,   233,   213,   108,   109,   110,    88,   128,
     129,   239,    89,   241,   218,   219,   198,   221,   246,   116,
      41,   120,    49,     2,   222,   144,   249,   226,   145,   224,
     146,   160,    49,   227,   162,    21,    62,    63,    64,   198,
      65,    66,   198,   234,   170,   238,    21,    62,    63,    64,
      82,    65,    67,    68,   242,   173,   176,   177,    69,   238,
     179,   232,   148,    67,    68,   210,    92,   212,   101,    69,
     102,   103,   104,   106,   107,   108,   109,   110,   111,   230,
     112,   113,   114,   115,   240,    70,    71,   106,   107,   108,
     109,   110,   243,    12,   132,   163,    70,    71,   106,   107,
     108,   109,   110,   111,   200,   112,   113,   114,   115,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   106,
     107,   108,   109,   110,   111,   174,   112,   180,   114,   115,
     106,   107,   108,   109,   110,   203,   247,   112,   133,   114,
     115,   106,   107,   108,   109,   110,   166,   217,   245,   215,
     114,   115,    52,   216,    40,   117,   161,   204
};

static const yytype_uint8 yycheck[] =
{
      15,    16,   130,    13,    58,    20,    82,    89,    23,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     3,    81,
       0,     0,     3,    34,   224,    87,    12,    42,     3,    15,
      45,     8,     3,    56,     7,     9,   236,     3,   100,     4,
       3,     3,    19,    17,    11,    56,     7,    17,     3,    19,
      12,    34,   128,     9,    34,    34,     9,    11,    33,     0,
      35,    36,    37,     3,    35,    36,    81,    11,    43,    44,
      51,    56,    87,    56,    37,    50,    56,    56,    41,    42,
      51,   143,    55,    58,    50,   100,    41,    42,    51,    56,
      46,    47,    48,    46,    11,   177,    51,     7,    18,    55,
      84,    85,    56,     3,    88,   167,    16,   183,     3,   124,
       5,     6,    56,     8,     3,    14,   192,   245,    11,     8,
      11,     8,    39,    40,    10,    20,    21,     5,   143,   139,
       9,    26,   147,    33,    12,    35,    36,    37,   122,    56,
      10,   125,    10,    43,    44,   207,    39,    40,    39,    40,
      50,    11,   167,   137,   164,   217,    39,    40,    53,    54,
     175,   211,    10,   178,    55,    56,    46,    47,    48,   179,
     220,    16,   182,   227,   189,    22,    23,    24,    10,    39,
      40,   231,     8,   233,    17,    18,   170,   202,   242,     4,
       8,    16,   207,    56,   204,    57,   246,   212,     9,   209,
      17,    13,   217,   213,    11,     3,     4,     5,     6,   193,
       8,     9,   196,   228,    19,   230,     3,     4,     5,     6,
      12,     8,    20,    21,   234,    11,     9,    17,    26,   244,
      31,     9,     9,    20,    21,    17,    46,     8,    65,    26,
      67,    68,    69,    20,    21,    22,    23,    24,    25,     8,
      27,    28,    29,    30,    10,    53,    54,    20,    21,    22,
      23,    24,     9,     4,    87,   122,    53,    54,    20,    21,
      22,    23,    24,    25,   175,    27,    28,    29,    30,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,    20,
      21,    22,    23,    24,    25,   137,    27,   146,    29,    30,
      20,    21,    22,    23,    24,   177,   244,    27,    87,    29,
      30,    20,    21,    22,    23,    24,   125,   198,   240,   193,
      29,    30,    25,   196,    17,    80,   120,   178
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    56,    72,    73,    74,    75,    77,   131,   132,
       4,     0,    74,   131,    75,     7,   126,   127,   128,    56,
     126,     3,   140,    33,    35,    36,    37,    43,    44,    50,
      58,    76,    78,    79,    86,    91,   105,   106,   113,   140,
     128,     8,    19,   129,    51,   120,   122,   124,   125,   140,
     123,   140,   123,   140,   140,   140,   140,   140,   140,    18,
      82,     8,     4,     5,     6,     8,     9,    20,    21,    26,
      53,    54,   130,   134,   135,   136,   137,   138,   139,   140,
     140,    14,    12,   140,    10,    10,    10,    16,    10,     8,
      82,   133,    46,    47,    48,    55,    93,    95,    97,    99,
     100,   135,   135,   135,   135,     9,    20,    21,    22,    23,
      24,    25,    27,    28,    29,    30,     4,   129,   120,   134,
      16,    80,    84,    85,   131,   107,   108,   131,    39,    40,
     114,   115,    79,   106,   120,   121,    87,    88,    89,   131,
      94,    96,    98,    99,    57,     9,    17,   120,     9,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,    15,
      13,   130,    11,    85,   140,    11,   108,   109,   116,   134,
      19,    11,   115,    11,    89,   126,     9,    17,   120,    31,
      97,   140,   141,    16,   126,    37,    41,    42,   110,   111,
     112,   120,    17,    19,    55,   117,   118,   119,   131,    90,
      91,   101,   140,    98,   141,    55,    92,   126,   126,   134,
      17,    81,     8,   140,   134,   117,   119,   109,    17,    18,
      83,   140,   126,   120,   126,   133,   140,   126,   120,   133,
       8,    81,     9,    82,   140,   102,   103,   104,   140,   133,
      10,   133,   126,     9,    81,   114,    82,   104,    11,   133
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    72,    73,    74,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    77,    78,    79,
      80,    80,    81,    81,    82,    82,    83,    83,    83,    84,
      84,    85,    85,    86,    87,    87,    88,    88,    89,    90,
      90,    91,    91,    92,    92,    93,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    98,    99,    99,   100,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   105,   106,
     106,   107,   107,   108,   109,   109,   110,   110,   111,   111,
     112,   113,   113,   114,   114,   115,   115,   116,   116,   117,
     117,   117,   118,   118,   119,   120,   120,   120,   121,   121,
     121,   122,   123,   123,   124,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     136,   136,   137,   137,   137,   138,   139,   139,   140,   141,
     141
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     5,     1,     2,     1,     5,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     5,
       1,     0,     1,     0,     1,     0,     1,     1,     0,     1,
       2,     7,     5,     5,     1,     0,     1,     2,     5,     1,
       1,     6,     5,     2,     1,     1,     1,     0,     1,     0,
       1,     3,     1,     3,     4,     4,     1,     0,     1,     1,
       1,     2,     5,     1,     0,     1,     3,     1,     4,     5,
       2,     1,     2,     7,     2,     0,     1,     1,     1,     1,
       7,     5,     2,     1,     2,     4,     3,     1,     3,     1,
       1,     0,     1,     2,     7,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     4,     1,     0,     1,     2,
       5,     3,     3,     2,     0,     1,     1,     1,     0,     1,
       2,     2,     0,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     2,
       2,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (&yylloc, lexer, resultAST, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

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

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
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

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, lexer, resultAST); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, erpcgen::ErpcLexer * lexer, erpcgen::AstNode ** resultAST)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (lexer);
  YYUSE (resultAST);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, erpcgen::ErpcLexer * lexer, erpcgen::AstNode ** resultAST)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, lexer, resultAST);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, erpcgen::ErpcLexer * lexer, erpcgen::AstNode ** resultAST)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), lexer, resultAST);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, lexer, resultAST); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, erpcgen::ErpcLexer * lexer, erpcgen::AstNode ** resultAST)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (lexer);
  YYUSE (resultAST);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_TOK_IDENT: /* "identifier"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1553 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_STRING_LITERAL: /* "string"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1559 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_INT_LITERAL: /* "integer"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1565 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_FLOAT_LITERAL: /* "float"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1571 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_7_: /* '@'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1577 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_8_: /* '('  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1583 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_9_: /* ')'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1589 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_10_: /* '{'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1595 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_11_: /* '}'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1601 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_12_: /* '['  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1607 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_13_: /* ']'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1613 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_14_: /* '<'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1619 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_15_: /* '>'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1625 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_16_: /* '='  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1631 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_17_: /* ','  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1637 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_18_: /* ';'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1643 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_19_: /* ':'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1649 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_20_: /* '+'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1655 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_21_: /* '-'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1661 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_22_: /* '*'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1667 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_23_: /* '/'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1673 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_24_: /* '%'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1679 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_25_: /* '^'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1685 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_26_: /* '~'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1691 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_27_: /* '&'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1697 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_28_: /* '|'  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1703 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_LSHIFT: /* "<<"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1709 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_RSHIFT: /* ">>"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1715 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_ARROW: /* "->"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1721 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_OPTIONS: /* "options"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1727 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_CONST: /* "const"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1733 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_IMPORT: /* "import"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1739 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_ENUM: /* "enum"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1745 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_STRUCT: /* "struct"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1751 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_UNION: /* "union"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1757 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_SWITCH: /* "switch"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1763 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_CASE: /* "case"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1769 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_DEFAULT: /* "default"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1775 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_OPTIONAL: /* "optional"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1781 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_BYREF: /* "byref"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1787 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_TYPE: /* "type"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1793 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_INTERFACE: /* "interface"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1799 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_VERSION: /* "version"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1805 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_IN: /* "in"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1811 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_OUT: /* "out"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1817 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_INOUT: /* "inout"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1823 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_ASYNC: /* "async"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1829 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_ONEWAY: /* "oneway"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1835 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_LIST: /* "list"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1841 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_REF: /* "ref"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1847 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_TRUE: /* "true"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1853 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_FALSE: /* "false"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1859 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_VOID: /* "void"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1865 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_ML_COMMENT: /* "doxygen ml. comment"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1871 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_IL_COMMENT: /* "doxygen il. comment"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1877 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_PROGRAM: /* "program"  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1883 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_CHILDREN: /* TOK_CHILDREN  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1889 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_ENUM_MEMBER: /* TOK_ENUM_MEMBER  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1895 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_STRUCT_MEMBER: /* TOK_STRUCT_MEMBER  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1901 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_UNION_CASE: /* TOK_UNION_CASE  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1907 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_FUNCTION: /* TOK_FUNCTION  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1913 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_PARAM: /* TOK_PARAM  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1919 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_RETURN: /* TOK_RETURN  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1925 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_EXPR: /* TOK_EXPR  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1931 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_ANNOTATION: /* TOK_ANNOTATION  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1937 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_UNARY_NEGATE: /* TOK_UNARY_NEGATE  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1943 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_TOK_ARRAY: /* TOK_ARRAY  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1949 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_param_dir_in: /* param_dir_in  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1955 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

    case YYSYMBOL_param_dir: /* param_dir  */
#line 251 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
            { if (((*yyvaluep).m_token)) { delete ((*yyvaluep).m_token); } }
#line 1961 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (erpcgen::ErpcLexer * lexer, erpcgen::AstNode ** resultAST)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
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

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, lexer);
    }

  if (yychar <= END)
    {
      yychar = END;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* root_def: program def_list  */
#line 257 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            *resultAST = new AstNode(Token(TOK_CHILDREN));
                            (*resultAST)->appendChild((yyvsp[-1].m_ast));
                            (*resultAST)->appendChild((yyvsp[0].m_ast));
                        }
#line 2269 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 3: /* root_def: def_list  */
#line 263 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            *resultAST = new AstNode(Token(TOK_CHILDREN));
                            (*resultAST)->appendChild((yyvsp[0].m_ast));
                        }
#line 2278 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 4: /* root_def: %empty  */
#line 268 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            *resultAST = new AstNode(Token(TOK_CHILDREN));
                        }
#line 2286 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 5: /* program: doxy_ml_comment_opt annotation_list_opt "program" ident semi_opt  */
#line 274 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            AstNode * prog  = new AstNode(Token(TOK_PROGRAM));
                            prog->appendChild(new AstNode(*(yyvsp[-1].m_ast)));
                            prog->appendChild((yyvsp[-3].m_ast));
                            prog->appendChild((yyvsp[-4].m_ast));
                            (yyval.m_ast) = prog;
                        }
#line 2298 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 6: /* def_list: definition  */
#line 288 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            AstNode * l = new AstNode(Token(TOK_CHILDREN));
                            if ((yyvsp[0].m_ast))
                            {
                                l->appendChild((yyvsp[0].m_ast));
                            }
                            (yyval.m_ast) = l;
                        }
#line 2311 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 7: /* def_list: def_list definition  */
#line 297 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            if ((yyvsp[0].m_ast))
                            {
                                (yyvsp[-1].m_ast)->appendChild((yyvsp[0].m_ast));
                            }
                            (yyval.m_ast) = (yyvsp[-1].m_ast);
                        }
#line 2323 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 8: /* definition: import_stmt  */
#line 307 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 2331 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 9: /* definition: doxy_ml_comment_opt annotation_list_opt definition_base semi_opt doxy_il_comment_opt  */
#line 311 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[-2].m_ast);
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-4].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2342 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 10: /* definition_base: const_def  */
#line 319 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2350 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 11: /* definition_base: enum_def  */
#line 323 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2358 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 12: /* definition_base: struct_def  */
#line 327 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2366 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 13: /* definition_base: union_type_def  */
#line 331 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2374 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 14: /* definition_base: typedef_def  */
#line 335 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2382 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 15: /* definition_base: interface_def  */
#line 339 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2390 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 16: /* definition_base: function_type_def  */
#line 344 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2398 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 17: /* import_stmt: "import" "string"  */
#line 350 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            std::string s = (yyvsp[0].m_token)->getStringValue();
                            lexer->pushFile(s);
                        }
#line 2407 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 18: /* const_def: "const" simple_data_type ident '=' const_expr  */
#line 360 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-4].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2418 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 19: /* enum_def: "enum" name_opt '{' enumerator_list_opt '}'  */
#line 372 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-4].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                        }
#line 2428 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 20: /* enumerator_list_opt: enumerator_list  */
#line 381 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2436 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 21: /* enumerator_list_opt: %empty  */
#line 385 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 2444 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 29: /* enumerator_list: enumerator  */
#line 407 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            AstNode * n = new AstNode(Token(TOK_CHILDREN));
                            n->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast) = n;
                        }
#line 2454 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 30: /* enumerator_list: enumerator_list enumerator  */
#line 413 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyvsp[-1].m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast) = (yyvsp[-1].m_ast);
                        }
#line 2463 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 31: /* enumerator: doxy_ml_comment_opt ident '=' int_const_expr annotation_list_opt comma_opt doxy_il_comment_opt  */
#line 423 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_ENUM_MEMBER, NULL, (yylsp[-6])));
                            (yyval.m_ast)->appendChild((yyvsp[-5].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-6].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2476 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 32: /* enumerator: doxy_ml_comment_opt ident annotation_list_opt comma_opt doxy_il_comment_opt  */
#line 432 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_ENUM_MEMBER, NULL, (yylsp[-4])));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild(NULL);
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-4].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2489 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 33: /* interface_def: "interface" ident '{' function_def_list_opt '}'  */
#line 446 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-4].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                        }
#line 2499 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 34: /* function_def_list_opt: function_def_list  */
#line 455 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2507 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 35: /* function_def_list_opt: %empty  */
#line 459 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 2515 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 36: /* function_def_list: function_def  */
#line 469 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_CHILDREN));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2524 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 37: /* function_def_list: function_def_list function_def  */
#line 474 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyvsp[-1].m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast) = (yyvsp[-1].m_ast);
                        }
#line 2533 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 38: /* function_def: doxy_ml_comment_opt annotation_list_opt function_type_base_def comma_semi_opt doxy_il_comment_opt  */
#line 481 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[-2].m_ast);
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-4].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2544 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 39: /* function_type_base_def: function_type_def  */
#line 490 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2552 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 40: /* function_type_base_def: callback_def  */
#line 494 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2560 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 41: /* function_type_def: ident '(' param_list_opt ')' "->" function_return_type  */
#line 503 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_FUNCTION, NULL, (yylsp[-5])));
                            (yyval.m_ast)->appendChild((yyvsp[-5].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast)->appendChild(NULL);  // function type null to recognize function and callback
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                        }
#line 2572 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 42: /* function_type_def: "oneway" ident '(' param_list_opt_in ')'  */
#line 511 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_FUNCTION, NULL, (yylsp[-3])));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            AstNode * returnAst = new AstNode(Token(TOK_RETURN));
                            returnAst->appendChild(new AstNode(*(yyvsp[-4].m_token)));
                            returnAst->appendChild(NULL);
                            (yyval.m_ast)->appendChild(returnAst);
                            (yyval.m_ast)->appendChild(NULL);  // function type null to recognize function and callback
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                        }
#line 2587 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 43: /* function_return_type: annotation_list_opt simple_data_type  */
#line 527 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_RETURN));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                        }
#line 2597 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 44: /* function_return_type: "void"  */
#line 533 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_RETURN));
                            (yyval.m_ast)->appendChild(new AstNode(*(yyvsp[0].m_token)));
                            (yyval.m_ast)->appendChild(NULL);
                        }
#line 2607 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 45: /* param_list_opt: param_list  */
#line 541 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2615 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 46: /* param_list_opt: "void"  */
#line 545 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 2623 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 47: /* param_list_opt: %empty  */
#line 549 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 2631 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 48: /* param_list_opt_in: param_list_in  */
#line 556 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2639 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 49: /* param_list_opt_in: %empty  */
#line 560 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 2647 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 50: /* param_list: param_def  */
#line 569 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_CHILDREN));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2656 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 51: /* param_list: param_list ',' param_def  */
#line 574 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyvsp[-2].m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast) = (yyvsp[-2].m_ast);
                        }
#line 2665 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 52: /* param_list_in: param_def_in  */
#line 581 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_CHILDREN));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2674 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 53: /* param_list_in: param_list_in ',' param_def_in  */
#line 586 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyvsp[-2].m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast) = (yyvsp[-2].m_ast);
                        }
#line 2683 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 54: /* param_def: param_dir simple_data_type ident_opt annotation_list_opt  */
#line 596 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_PARAM, NULL, (yylsp[-1])));
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            AstNode *n = ((yyvsp[-3].m_token)) ? new AstNode(*(yyvsp[-3].m_token)) : NULL;
                            (yyval.m_ast)->appendChild(n);
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2696 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 55: /* param_def_in: param_dir_in simple_data_type ident_opt annotation_list_opt  */
#line 607 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_PARAM, NULL, (yylsp[-1])));
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            AstNode *n = ((yyvsp[-3].m_token)) ? new AstNode(*(yyvsp[-3].m_token)) : NULL;
                            (yyval.m_ast)->appendChild(n);
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2709 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 56: /* param_dir_in: "in"  */
#line 621 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_token) = (yyvsp[0].m_token);
                        }
#line 2717 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 57: /* param_dir_in: %empty  */
#line 625 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_token) = NULL;
                        }
#line 2725 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 58: /* param_dir: param_dir_in  */
#line 630 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_token) = (yyvsp[0].m_token);
                        }
#line 2733 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 59: /* param_dir: "out"  */
#line 634 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_token) = (yyvsp[0].m_token);
                        }
#line 2741 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 60: /* param_dir: "inout"  */
#line 638 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_token) = (yyvsp[0].m_token);
                        }
#line 2749 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 61: /* callback_def: ident ident  */
#line 647 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_FUNCTION, NULL, (yylsp[0])));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast)->appendChild(NULL);  // return type null to recognize function and callback
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                            (yyval.m_ast)->appendChild(NULL);
                        }
#line 2761 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 62: /* callback_def: ident ident '(' callback_param_list_opt ')'  */
#line 655 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_FUNCTION, NULL, (yylsp[-3])));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild(NULL);  // return type null to recognize function and callback
                            (yyval.m_ast)->appendChild((yyvsp[-4].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                        }
#line 2773 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 63: /* callback_param_list_opt: callback_param_list  */
#line 666 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2781 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 64: /* callback_param_list_opt: %empty  */
#line 670 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 2789 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 65: /* callback_param_list: callback_param  */
#line 677 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_CHILDREN));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2798 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 66: /* callback_param_list: callback_param_list comma_opt callback_param  */
#line 682 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[-2].m_ast);
                            (yyvsp[-2].m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2807 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 67: /* callback_param: ident  */
#line 689 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_PARAM, NULL, (yylsp[0])));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                            /* To be commaptible with param_def. */
                            (yyval.m_ast)->appendChild(NULL);
                            (yyval.m_ast)->appendChild(NULL);
                            (yyval.m_ast)->appendChild(NULL);
                        }
#line 2820 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 68: /* typedef_def: "type" ident '=' data_type  */
#line 703 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-3].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2830 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 69: /* struct_def: "struct" name_opt '{' struct_member_list '}'  */
#line 714 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-4].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                        }
#line 2840 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 70: /* struct_def: "struct" ident  */
#line 720 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2849 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 71: /* struct_member_list: struct_member  */
#line 731 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_CHILDREN));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2858 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 72: /* struct_member_list: struct_member_list struct_member  */
#line 736 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyvsp[-1].m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast) = (yyvsp[-1].m_ast);
                        }
#line 2867 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 73: /* struct_member: doxy_ml_comment_opt struct_member_options_list struct_data_type ident annotation_list_opt semi_opt doxy_il_comment_opt  */
#line 746 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_STRUCT_MEMBER));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-4].m_ast));
                            (yyval.m_ast)->appendChild(new AstNode(Token(TOK_INT_LITERAL, new IntegerValue((yyvsp[-5].m_int)))));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-6].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2881 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 74: /* struct_member_options_list: struct_member_options_list struct_member_options  */
#line 759 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_int) = (yyvsp[-1].m_int) | (yyvsp[0].m_int);
                        }
#line 2889 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 75: /* struct_member_options_list: %empty  */
#line 763 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_int) = 0;
                        }
#line 2897 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 76: /* struct_member_options: "optional"  */
#line 770 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_int) = 1;
                        }
#line 2905 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 77: /* struct_member_options: "byref"  */
#line 774 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_int) = 2;
                        }
#line 2913 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 78: /* struct_data_type: simple_data_type  */
#line 781 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2921 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 79: /* struct_data_type: union_def  */
#line 785 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 2929 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 80: /* union_def: "union" '(' ident ')' '{' union_case_list '}'  */
#line 791 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-6].m_token));
                            (yyval.m_ast)->appendChild(NULL);
                            (yyval.m_ast)->appendChild((yyvsp[-4].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                        }
#line 2940 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 81: /* union_type_def: "union" ident '{' union_case_list '}'  */
#line 799 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-4].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild(NULL);
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                        }
#line 2951 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 82: /* union_type_def: "union" ident  */
#line 806 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast)->appendChild(NULL);
                        }
#line 2961 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 83: /* union_case_list: union_case  */
#line 814 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_CHILDREN));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2970 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 84: /* union_case_list: union_case_list union_case  */
#line 819 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyvsp[-1].m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast) = (yyvsp[-1].m_ast);
                        }
#line 2979 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 85: /* union_case: "case" union_case_expr_list ':' union_member_list_opt  */
#line 827 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_UNION_CASE));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2989 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 86: /* union_case: "default" ':' union_member_list_opt  */
#line 833 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_UNION_CASE));
                            (yyval.m_ast)->appendChild(new AstNode(*(yyvsp[-2].m_token)));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 2999 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 87: /* union_case_expr_list: int_const_expr  */
#line 842 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_CHILDREN));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3008 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 88: /* union_case_expr_list: union_case_expr_list ',' int_const_expr  */
#line 847 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyvsp[-2].m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast) = (yyvsp[-2].m_ast);
                        }
#line 3017 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 89: /* union_member_list_opt: union_member_list  */
#line 855 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3025 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 90: /* union_member_list_opt: "void"  */
#line 859 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_CHILDREN));
                            (yyval.m_ast)->appendChild(new AstNode(Token(*(yyvsp[0].m_token))));
                        }
#line 3034 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 91: /* union_member_list_opt: %empty  */
#line 864 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 3042 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 92: /* union_member_list: union_member  */
#line 871 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_CHILDREN));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));

                        }
#line 3052 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 93: /* union_member_list: union_member_list union_member  */
#line 877 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyvsp[-1].m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast) = (yyvsp[-1].m_ast);
                        }
#line 3061 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 94: /* union_member: doxy_ml_comment_opt struct_member_options_list simple_data_type ident annotation_list_opt semi_opt doxy_il_comment_opt  */
#line 884 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_CHILDREN));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-4].m_ast));
                            (yyval.m_ast)->appendChild(new AstNode(Token(TOK_INT_LITERAL, new IntegerValue((yyvsp[-5].m_int)))));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-6].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3075 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 95: /* simple_data_type: list_type  */
#line 897 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3083 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 96: /* simple_data_type: array_type  */
#line 901 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3091 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 97: /* simple_data_type: typename  */
#line 905 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3099 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 98: /* data_type: simple_data_type  */
#line 912 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3107 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 99: /* data_type: struct_def  */
#line 916 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3115 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 100: /* data_type: enum_def  */
#line 920 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3123 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 101: /* typename: ident  */
#line 926 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3131 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 102: /* name_opt: ident  */
#line 932 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3139 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 103: /* name_opt: %empty  */
#line 936 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 3147 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 104: /* list_type: "list" '<' simple_data_type '>'  */
#line 945 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-3].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                        }
#line 3156 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 105: /* array_type: simple_data_type '[' int_const_expr ']'  */
#line 955 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_ARRAY));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                            (yyval.m_ast)->reverseExpr();
                        }
#line 3167 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 106: /* annotation_list_opt: annotation_list  */
#line 965 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3175 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 107: /* annotation_list_opt: %empty  */
#line 969 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 3183 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 108: /* annotation_list: annotation  */
#line 978 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_CHILDREN));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3192 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 109: /* annotation_list: annotation_list annotation  */
#line 983 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyvsp[-1].m_ast)->appendChild((yyvsp[0].m_ast));
                            (yyval.m_ast) = (yyvsp[-1].m_ast);
                        }
#line 3201 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 110: /* annotation: '@' ident ':' ident annotation_value_opt  */
#line 993 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_ANNOTATION));
                            (yyval.m_ast)->appendChild((yyvsp[-3].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3212 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 111: /* annotation: '@' ident annotation_value_opt  */
#line 1000 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_ANNOTATION));
                            (yyval.m_ast)->appendChild(NULL);
                            (yyval.m_ast)->appendChild((yyvsp[-1].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3223 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 112: /* annotation_value_opt: '(' const_expr ')'  */
#line 1010 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[-1].m_ast);
                        }
#line 3231 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 113: /* annotation_value_opt: '(' ')'  */
#line 1014 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 3239 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 114: /* annotation_value_opt: %empty  */
#line 1018 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 3247 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 115: /* const_expr: int_const_expr  */
#line 1024 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3255 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 116: /* const_expr: string_literal  */
#line 1028 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3263 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 117: /* doxy_ml_comment_opt: doxy_ml_comment  */
#line 1035 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3271 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 118: /* doxy_ml_comment_opt: %empty  */
#line 1039 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 3279 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 119: /* doxy_ml_comment: "doxygen ml. comment"  */
#line 1045 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            // Merge string literals into one string. Remove first '\n'
                            Value * v = (yyvsp[0].m_token)->getValue();
                            StringValue * s = dynamic_cast<StringValue *>(v);
                            assert(s);
                            s = new StringValue(s->toString().substr(1, s->toString().size() - 1));
                            (yyvsp[0].m_token)->setValue(s);
                            (yyval.m_ast) = new AstNode(*(yyvsp[0].m_token));
                        }
#line 3293 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 120: /* doxy_ml_comment: doxy_ml_comment "doxygen ml. comment"  */
#line 1055 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) =  mergeString(&(yyvsp[-1].m_ast)->getToken(), (yyvsp[0].m_token));
                        }
#line 3301 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 121: /* doxy_il_comment_opt: doxy_il_comment_opt "doxygen il. comment"  */
#line 1062 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            if((yyvsp[-1].m_ast))
                            {
                                (yyval.m_ast) =  mergeString(&(yyvsp[-1].m_ast)->getToken(), (yyvsp[0].m_token));
                            }
                            else
                            {
                                (yyval.m_ast) =  new AstNode(*(yyvsp[0].m_token));
                            }
                        }
#line 3316 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 122: /* doxy_il_comment_opt: %empty  */
#line 1073 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 3324 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 123: /* int_const_expr: expr  */
#line 1082 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_EXPR, NULL, (yylsp[0])));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3333 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 124: /* expr: int_value  */
#line 1089 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3341 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 125: /* expr: float_value  */
#line 1093 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3349 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 126: /* expr: ident  */
#line 1097 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3357 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 127: /* expr: expr '+' expr  */
#line 1101 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3367 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 128: /* expr: expr '-' expr  */
#line 1107 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3377 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 129: /* expr: expr '*' expr  */
#line 1113 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3387 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 130: /* expr: expr '/' expr  */
#line 1119 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3397 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 131: /* expr: expr '%' expr  */
#line 1125 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3407 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 132: /* expr: expr '&' expr  */
#line 1131 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3417 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 133: /* expr: expr '|' expr  */
#line 1137 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3427 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 134: /* expr: expr '^' expr  */
#line 1143 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3437 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 135: /* expr: expr "<<" expr  */
#line 1149 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3447 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 136: /* expr: expr ">>" expr  */
#line 1155 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[-2].m_ast));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3457 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 137: /* expr: unary_expr  */
#line 1161 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                            {
                                (yyval.m_ast) = (yyvsp[0].m_ast);
                            }
#line 3465 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 138: /* expr: '(' expr ')'  */
#line 1165 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[-1].m_ast);
                            //$$->setLocation(@1, @3);
                        }
#line 3474 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 139: /* unary_expr: '+' expr  */
#line 1172 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3482 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 140: /* unary_expr: '-' expr  */
#line 1176 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_UNARY_NEGATE, NULL, (yylsp[-1])));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3491 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 141: /* unary_expr: '~' expr  */
#line 1181 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[-1].m_token));
                            (yyval.m_ast)->appendChild((yyvsp[0].m_ast));
                        }
#line 3500 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 142: /* int_value: "integer"  */
#line 1188 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[0].m_token));
                        }
#line 3508 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 143: /* int_value: "true"  */
#line 1192 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_INT_LITERAL, new IntegerValue(1), (yylsp[0])));
                        }
#line 3516 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 144: /* int_value: "false"  */
#line 1196 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(Token(TOK_INT_LITERAL, new IntegerValue(0), (yylsp[0])));
                        }
#line 3524 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 145: /* float_value: "float"  */
#line 1202 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[0].m_token));
                        }
#line 3532 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 146: /* string_literal: "string"  */
#line 1208 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[0].m_token));
                        }
#line 3540 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 147: /* string_literal: string_literal "string"  */
#line 1212 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) =  mergeString(&(yyvsp[-1].m_ast)->getToken(), (yyvsp[0].m_token));
                        }
#line 3548 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 148: /* ident: "identifier"  */
#line 1218 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = new AstNode(*(yyvsp[0].m_token));
                        }
#line 3556 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 149: /* ident_opt: ident  */
#line 1224 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = (yyvsp[0].m_ast);
                        }
#line 3564 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;

  case 150: /* ident_opt: %empty  */
#line 1228 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"
                        {
                            (yyval.m_ast) = NULL;
                        }
#line 3572 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"
    break;


#line 3576 "/home/duck/gitclones/erpc/Debug/Linux/erpcsniffer/obj/erpcgen_parser.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, lexer, resultAST, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= END)
        {
          /* Return failure if at end of input.  */
          if (yychar == END)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, lexer, resultAST);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, lexer, resultAST);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, lexer, resultAST, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, lexer, resultAST);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, lexer, resultAST);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1233 "/home/duck/gitclones/erpc/erpcgen/src/erpcgen_parser.y"


/* code goes here */

static int yylex(YYSTYPE * lvalp, YYLTYPE * yylloc, ErpcLexer * lexer)
{
    Token * token = lexer->getNextToken();
    if (!token)
    {
        return END;
    }

    lvalp->m_token = token;
    *yylloc = token->getLocation();
    return token->getToken();
}

static void yyerror(YYLTYPE * yylloc, ErpcLexer * lexer, AstNode ** resultAST, const char * error)
{
    (void)resultAST;
    throw syntax_error(format_string("file %s:%d:%d: %s\n", lexer->getFileName().c_str(),
        yylloc->m_firstLine, yylloc->m_firstChar, error));
}

const char * get_token_name(int tok)
{
    return yytname[YYTRANSLATE(tok)];
}

static AstNode * mergeString(Token * t1, Token * t2)
{
    // Merge string literals into one string.
    Value * v1 = t1->getValue();
    Value * v2 = t2->getValue();

    if (v1 && v2)
    {
        StringValue * s1 = dynamic_cast<StringValue *>(v1);
        StringValue * s2 = dynamic_cast<StringValue *>(v2);
        if (s1 && s2)
        {
            StringValue * s = new StringValue(std::string(s1->toString()) + std::string(s2->toString()));
            token_loc_t newTokLocation = mergeLocation(t1->getLocation(), t2->getLocation());
            return new AstNode(Token(t2->getToken(), s, newTokLocation));
        }
    }

    return new AstNode(*t2);
}

token_loc_t mergeLocation(const token_loc_t & l1, const token_loc_t & l2)
{
    token_loc_t newTokLocation;
    newTokLocation.m_firstLine = l1.m_firstLine;
    newTokLocation.m_firstChar = l1.m_firstChar;
    newTokLocation.m_lastLine = l2.m_lastLine;
    newTokLocation.m_lastChar = l2.m_lastChar;
    return newTokLocation;
}
