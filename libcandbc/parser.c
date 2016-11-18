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
#line 17 "src/libcandbc/parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <dbcModel.h>
#include <math.h>

/* Tell Bison how much stack space is needed. */
#define YYMAXDEPTH 20000


#line 81 "src/libcandbc/parser.c" /* yacc.c:339  */

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
#ifndef YY_YY_SRC_LIBCANDBC_PARSER_H_INCLUDED
# define YY_YY_SRC_LIBCANDBC_PARSER_H_INCLUDED
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
    T_COLON = 258,
    T_SEMICOLON = 259,
    T_SEP = 260,
    T_AT = 261,
    T_PLUS = 262,
    T_MINUS = 263,
    T_BOX_OPEN = 264,
    T_BOX_CLOSE = 265,
    T_PAR_OPEN = 266,
    T_PAR_CLOSE = 267,
    T_COMMA = 268,
    T_ID = 269,
    T_STRING_VAL = 270,
    T_INT_VAL = 271,
    T_DOUBLE_VAL = 272,
    T_VERSION = 273,
    T_INT = 274,
    T_FLOAT = 275,
    T_STRING = 276,
    T_ENUM = 277,
    T_HEX = 278,
    T_BO = 279,
    T_BS = 280,
    T_BU = 281,
    T_SG = 282,
    T_EV = 283,
    T_NS = 284,
    T_NS_DESC = 285,
    T_CM = 286,
    T_BA_DEF = 287,
    T_BA = 288,
    T_VAL = 289,
    T_CAT_DEF = 290,
    T_CAT = 291,
    T_FILTE = 292,
    T_BA_DEF_DEF = 293,
    T_EV_DATA = 294,
    T_ENVVAR_DATA = 295,
    T_SGTYPE = 296,
    T_SGTYPE_VAL = 297,
    T_BA_DEF_SGTYPE = 298,
    T_BA_SGTYPE = 299,
    T_SIG_TYPE_REF = 300,
    T_VAL_TABLE = 301,
    T_SIG_GROUP = 302,
    T_SIG_VALTYPE = 303,
    T_SIGTYPE_VALTYPE = 304,
    T_BO_TX_BU = 305,
    T_BA_DEF_REL = 306,
    T_BA_REL = 307,
    T_BA_DEF_DEF_REL = 308,
    T_BU_SG_REL = 309,
    T_BU_EV_REL = 310,
    T_BU_BO_REL = 311,
    T_SG_MUL_VAL = 312,
    T_DUMMY_NODE_VECTOR = 313,
    T_NAN = 314
  };
#endif
/* Tokens.  */
#define T_COLON 258
#define T_SEMICOLON 259
#define T_SEP 260
#define T_AT 261
#define T_PLUS 262
#define T_MINUS 263
#define T_BOX_OPEN 264
#define T_BOX_CLOSE 265
#define T_PAR_OPEN 266
#define T_PAR_CLOSE 267
#define T_COMMA 268
#define T_ID 269
#define T_STRING_VAL 270
#define T_INT_VAL 271
#define T_DOUBLE_VAL 272
#define T_VERSION 273
#define T_INT 274
#define T_FLOAT 275
#define T_STRING 276
#define T_ENUM 277
#define T_HEX 278
#define T_BO 279
#define T_BS 280
#define T_BU 281
#define T_SG 282
#define T_EV 283
#define T_NS 284
#define T_NS_DESC 285
#define T_CM 286
#define T_BA_DEF 287
#define T_BA 288
#define T_VAL 289
#define T_CAT_DEF 290
#define T_CAT 291
#define T_FILTE 292
#define T_BA_DEF_DEF 293
#define T_EV_DATA 294
#define T_ENVVAR_DATA 295
#define T_SGTYPE 296
#define T_SGTYPE_VAL 297
#define T_BA_DEF_SGTYPE 298
#define T_BA_SGTYPE 299
#define T_SIG_TYPE_REF 300
#define T_VAL_TABLE 301
#define T_SIG_GROUP 302
#define T_SIG_VALTYPE 303
#define T_SIGTYPE_VALTYPE 304
#define T_BO_TX_BU 305
#define T_BA_DEF_REL 306
#define T_BA_REL 307
#define T_BA_DEF_DEF_REL 308
#define T_BU_SG_REL 309
#define T_BU_EV_REL 310
#define T_BU_BO_REL 311
#define T_SG_MUL_VAL 312
#define T_DUMMY_NODE_VECTOR 313
#define T_NAN 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 37 "src/libcandbc/parser.y" /* yacc.c:355  */

  number_t                     number;
  double                       double_val;
  string_t                     string;
  object_type_t                object_type;
  signal_t                    *signal;
  node_list_t                 *node_list;
  string_list_t               *string_list;
  mux_info_t                   mux_info;
  signal_list_t               *signal_list;
  string_t                     signal_name;
  string_list_t               *signal_name_list;
  signal_group_t              *signal_group;
  signal_group_list_t         *signal_group_list;
  message_t                   *message;
  message_list_t              *message_list;
  attribute_value_t           *attribute_value;
  attribute_object_class_t     attribute_object_class;
  attribute_rel_t             *attribute_rel;
  attribute_rel_list_t        *attribute_rel_list;
  attribute_definition_t      *attribute_definition;
  attribute_definition_list_t *attribute_definition_list;
  dbc_t                       *dbc;
  envvar_t                    *envvar;
  envvar_list_t               *envvar_list;
  val_map_entry_t             *val_map_entry;
  val_map_t                   *val_map;
  valtable_list_t             *valtable_list;
  valtable_t                  *valtable;

#line 270 "src/libcandbc/parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void* dbcptr);

#endif /* !YY_YY_SRC_LIBCANDBC_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 68 "src/libcandbc/parser.y" /* yacc.c:358  */

extern int yylex (void);
extern char *yytext;
extern int   yylineno;

void
yyerror (void* dbcptr, char* msg)
{
  fprintf(stderr,"Error in line %d '%s', symbol '%s'\n",
          yylineno, msg, yytext);
}

/* context dependent object access (TODO: replace by dbc pointer) */
char *current_yacc_file;
dbc_t *current_dbc;
string_t current_attribute;

static attribute_definition_t *
attribute_definition_find(string_t name, attribute_object_class_t aoc)
{
  /* lookup attribute in attribute_definition_list */
  attribute_definition_list_t *adl;
  attribute_definition_t *ret = NULL;

  for(adl = current_dbc->attribute_definition_list;
      adl != NULL;
      adl=adl->next) {
    if(!strcmp(adl->attribute_definition->name,name)) {
      int found;

      switch(adl->attribute_definition->object_type) {
      case ot_network:
      case ot_node:
      case ot_message:
      case ot_signal:
        found = (aoc == aoc_object);
        break;
      case ot_node_signal:
      case ot_node_message:
        found = (aoc == aoc_relation);
        break;
      default:
        found = 0;
      }
      if(found) {
        ret = adl->attribute_definition;
        break;
      }
    }
  }
  return ret;
}

static node_t *node_find(string_t name)
{
  node_list_t *nl;

  for(nl = current_dbc->node_list; nl != NULL; nl = nl->next) {
    if(nl->node->name != NULL) {
      if(!strcmp(nl->node->name, name)) {
        return nl->node;
      }
    }
  }
  return NULL;
}

static message_t *message_find(uint32 id)
{
  message_list_t *ml;

  for(ml = current_dbc->message_list; ml != NULL; ml = ml->next)
    if(ml->message->id == id)
      return ml->message;
  return NULL;
}


static signal_t *signal_find(uint32 id, string_t name)
{
  message_list_t *ml;
  signal_list_t *sl;

  for(ml = current_dbc->message_list; ml != NULL; ml = ml->next)
    if(ml->message->id == id)
      for(sl = ml->message->signal_list; sl != NULL; sl = sl->next)
        if(sl->signal->name != NULL)
          if(!strcmp(sl->signal->name,name))
            return sl->signal;
  return NULL;
}

static envvar_t *envvar_find(string_t name)
{
  envvar_list_t *el;

  for(el = current_dbc->envvar_list; el != NULL; el = el->next)
    if(el->envvar->name != NULL)
      if(!strcmp(el->envvar->name,name))
        return el->envvar;
  return NULL;
}

/*
 * create a new attribute and append it to the attribute list "al".
 *
 * name - name of the new attribute
 * av   - value of the new attribute
 *
 * if the attribute with the given name is already in
 * current_dbc->attribute_defition_list, the value is cast to the
 * already existing type.
 */
void attribute_append(
  attribute_list_t **al,
  string_t           name,
  attribute_value_t *av)
{
  CREATE(attribute_t,a);
  CREATE(attribute_list_t,al_new);

  /* search for the end of the list and link new node */
  if(*al == NULL) {
    *al = al_new;
  } else {
    attribute_list_t *linkfrom = linkfrom = *al;
    while(linkfrom->next != NULL) {
      linkfrom = linkfrom->next;
    }
    linkfrom ->next = al_new;
  }
  al_new->next = NULL;

  /* look up value type in attribute definition list */
  attribute_definition_t *const ad =
    attribute_definition_find(name, aoc_object);

  if(ad != NULL) {
    /* dynamic cast */
    if(   av->value_type == vt_integer
       && ad->value_type == vt_float) {
      av->value.double_val = (double)av->value.int_val;
      av->value_type = ad->value_type;
    } else if(   av->value_type == vt_float
              && ad->value_type == vt_integer) {
      printf("warning: converting double value "
             "%lf to integer value ", av->value.double_val);
      av->value.int_val = (sint32)lrint(av->value.double_val);
      printf("%d ", av->value.int_val);
      av->value_type = ad->value_type;
      printf("in attribute %s\n",name);
    } else if(   av->value_type == vt_integer
              && ad->value_type == vt_hex) {
      av->value.hex_val = (uint32)av->value.int_val;
      av->value_type = ad->value_type;
    } else if(   av->value_type == vt_integer
              && ad->value_type == vt_enum) {
#ifdef CONVERT_INT_TO_ENUM
      int eindex = av->value.int_val;
      string_list_t *el;

      /* goto element eindex in the enum list and set the string */
      for(el = ad->range.enum_list;
          el != NULL;
          el = el->next, eindex--) {
        if(eindex == 0) {
          av->value.enum_val = strdup(el->string);
        }
      }
      av->value_type = ad->value_type;
#endif
    } else if(av->value_type != ad->value_type) {
      fprintf(stderr, "error: unhandled type conversion: %d->%d\n",
              av->value_type,
              ad->value_type);
    }
  }

  /* copy attribute name and value*/
  a->name  = name;
  a->value = av;

  /* fill new list element */
  al_new->attribute = a;
}


#line 474 "src/libcandbc/parser.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   352,   352,   363,   365,   367,   370,   374,   352,   388,
     391,   392,   395,   396,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   432,   435,   445,   478,   480,   484,   497,   504,
     511,   520,   522,   526,   536,   547,   558,   581,   584,   595,
     628,   630,   635,   650,   659,   683,   684,   689,   692,   702,
     714,   726,   735,   745,   759,   760,   761,   762,   763,   765,
     767,   772,   774,   779,   798,   820,   823,   833,   844,   846,
     858,   873,   875,   880,   889,   900,   911,   921,   938,   941,
     951,   970,   973,   983,  1015,  1019,  1038,  1039,  1042,  1049,
    1059,  1066,  1076,  1083,  1094,  1095,  1096,  1099,  1100,  1102,
    1103,  1104,  1105,  1107,  1110,  1111,  1118,  1121,  1134,  1142,
    1145,  1155,  1166,  1171,  1186,  1189,  1199,  1214,  1216
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_COLON", "T_SEMICOLON", "T_SEP",
  "T_AT", "T_PLUS", "T_MINUS", "T_BOX_OPEN", "T_BOX_CLOSE", "T_PAR_OPEN",
  "T_PAR_CLOSE", "T_COMMA", "T_ID", "T_STRING_VAL", "T_INT_VAL",
  "T_DOUBLE_VAL", "T_VERSION", "T_INT", "T_FLOAT", "T_STRING", "T_ENUM",
  "T_HEX", "T_BO", "T_BS", "T_BU", "T_SG", "T_EV", "T_NS", "T_NS_DESC",
  "T_CM", "T_BA_DEF", "T_BA", "T_VAL", "T_CAT_DEF", "T_CAT", "T_FILTE",
  "T_BA_DEF_DEF", "T_EV_DATA", "T_ENVVAR_DATA", "T_SGTYPE", "T_SGTYPE_VAL",
  "T_BA_DEF_SGTYPE", "T_BA_SGTYPE", "T_SIG_TYPE_REF", "T_VAL_TABLE",
  "T_SIG_GROUP", "T_SIG_VALTYPE", "T_SIGTYPE_VALTYPE", "T_BO_TX_BU",
  "T_BA_DEF_REL", "T_BA_REL", "T_BA_DEF_DEF_REL", "T_BU_SG_REL",
  "T_BU_EV_REL", "T_BU_BO_REL", "T_SG_MUL_VAL", "T_DUMMY_NODE_VECTOR",
  "T_NAN", "$accept", "dbc", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6",
  "version", "symbol_section", "symbol_list", "symbol", "envvar_list",
  "envvar", "envvar_data_list", "envvar_data", "attribute_value",
  "attribute_list", "attribute", "attribute_rel_list", "attribute_rel",
  "attribute_definition_default_list", "attribute_definition_default",
  "attribute_definition_object_or_relation", "attribute_definition_list",
  "attribute_definition", "attribute_object_type", "val_list", "val",
  "val_map", "val_map_entry", "sig_valtype_list", "sig_valtype",
  "comment_list", "comment", "message_list", "message", "signal_list",
  "signal", "mux_info", "signal_name", "signal_name_list",
  "space_identifier_list", "comma_identifier_list", "comma_string_list",
  "double_val", "bit_start", "bit_len", "scale", "offset", "min", "max",
  "endianess", "signedness", "space_node_list", "node_list",
  "valtable_list", "valtable", "message_section", "signal_group",
  "signal_group_list", "message_transmitters", "message_transmitter_list", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -215

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-215)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -215,    10,     0,  -215,     6,    17,  -215,    47,    57,    22,
      80,    58,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,    22,  -215,    83,  -215,  -215,    11,    41,    11,  -215,
      74,  -215,    41,  -215,    75,    65,  -215,    77,    86,    75,
      78,  -215,    65,  -215,  -215,  -215,    79,    45,  -215,    93,
      81,    45,    71,    84,    98,  -215,    88,  -215,    71,    89,
      90,   102,    66,  -215,    82,    94,   104,    96,    99,    85,
      66,   101,  -215,    82,    90,  -215,   108,   107,     2,   -24,
      85,  -215,  -215,   105,  -215,  -215,   106,   109,   114,   110,
     113,   112,   115,    13,   -18,  -215,   -24,   116,  -215,  -215,
     117,   118,   120,  -215,   119,   121,   123,   124,  -215,  -215,
    -215,  -215,  -215,  -215,   -29,  -215,    12,   122,   125,  -215,
     126,   128,   127,   129,  -215,  -215,   111,   -29,   130,   131,
     -11,   136,   133,   134,  -215,   138,   141,  -215,  -215,   142,
    -215,   137,    69,   111,  -215,    -1,   139,  -215,  -215,  -215,
     -11,  -215,   140,   150,   143,   144,   146,  -215,    -4,   148,
     132,    69,  -215,   152,   153,   154,   160,   161,   133,  -215,
     163,  -215,   162,   155,  -215,  -215,  -215,   156,   159,   158,
     165,   135,    33,    87,   132,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,   164,   166,    28,    28,   167,  -215,   169,
      75,   101,   168,   147,    87,  -215,  -215,    73,   145,   171,
     173,    28,   151,   175,    75,   172,   174,   147,  -215,  -215,
    -215,  -215,   176,    90,  -215,  -215,   181,   177,  -215,   184,
     188,   182,  -215,   -11,   191,  -215,   101,  -215,   183,   185,
    -215,   157,  -215,    28,   193,   195,   -11,   196,  -215,   190,
    -215,   194,  -215,   190,   198,  -215,   199,  -215,  -215,   -11,
    -215,   200,   -11,  -215,   197,   201,    90,  -215
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     9,     0,     0,    10,
       0,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      11,    12,   132,     0,     3,    13,   126,   129,   126,   128,
       0,     4,   129,   127,    85,    98,   130,     0,     0,    85,
       0,     5,    98,    87,   131,    86,     0,   137,    99,     0,
       0,   137,    42,     0,     0,   138,     0,     6,    42,     0,
       0,     0,    45,    43,   101,   110,     0,     0,     0,    91,
      45,     0,   100,   101,     0,   136,     0,     0,     0,    67,
      91,    46,   106,   104,   102,   111,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     7,    67,     0,    92,   105,
       0,     0,     0,    93,     0,     0,     0,     0,    76,    75,
      77,    78,    79,    80,    60,    68,     0,     0,     0,    47,
       0,     0,     0,     0,    65,    66,    51,    60,     0,     0,
       0,     0,     0,     0,   117,     0,     0,    96,    95,     0,
      94,     0,    57,    51,    61,     0,     0,   116,   114,   115,
       0,    71,   112,     0,     0,     0,     0,    97,     0,     0,
      81,    57,    52,     0,     0,     0,     0,     0,     0,    72,
       0,   118,     0,     0,    49,    48,    50,     0,     0,     0,
       0,     0,     0,    88,    81,    58,    64,    62,    63,    69,
      70,   113,    73,     0,     0,     0,     0,     0,    53,     0,
      85,     0,     0,   134,    88,    82,   123,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,   134,     8,    89,
     124,   125,     0,     0,    55,    54,     0,     0,    84,     0,
       0,     0,   135,     0,     0,    56,     0,    83,     0,     0,
     119,     0,    44,     0,     0,     0,     0,     0,    90,     0,
     120,     0,    59,   108,     0,   107,     0,   109,   133,     0,
     121,     0,     0,   122,     0,     0,     0,   103
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
     170,  -215,   149,  -215,   178,  -215,  -212,    46,  -215,    29,
    -215,    67,  -215,  -215,    97,  -215,  -215,     8,  -215,   -58,
    -215,    -9,  -215,   179,  -215,   180,  -215,   187,  -215,  -215,
    -214,  -215,   -56,   -94,    30,  -168,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,   186,  -215,   189,  -215,  -215,  -215,
     -17,  -215,   192
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    47,    55,    67,    82,   134,     5,     8,
      40,    41,    77,    78,    89,    90,   200,   162,   163,   180,
     181,   146,   147,   148,   115,   116,   117,   203,   204,    58,
      59,   223,   224,    99,   100,    61,    62,    92,    93,   120,
     103,   274,   275,    86,   173,   170,   155,   192,   261,   271,
     281,   284,   227,   242,    49,    44,    51,    52,    11,   237,
     238,    71,    72
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     105,    65,   187,   229,   230,   167,   168,   234,   113,   144,
       3,   194,   195,   196,   183,   184,   185,   108,     4,   246,
     197,     6,   198,   199,   145,    48,   109,   114,   110,   111,
     112,   149,   150,   151,   152,   153,   132,   128,   133,   129,
     130,   131,   263,   194,   195,   196,     7,   220,   169,   221,
       9,   267,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     240,   241,    10,    42,    43,   260,    46,    50,    54,    60,
      64,    57,    63,    69,    66,    70,    73,    74,   270,    76,
      79,    80,    81,    84,    85,    87,    88,    94,    95,    91,
     107,   280,    96,    97,   283,   102,    98,   106,   123,   119,
     137,   179,   121,   138,   139,   122,   124,   125,   126,   127,
     157,   136,   158,   160,   140,   222,   141,   142,   154,   143,
     171,   156,   159,   175,   161,   165,   177,   166,   172,   254,
     174,   176,   178,   188,   189,   186,   206,   207,   208,   190,
     191,   193,   233,   201,   209,   210,   202,   212,   213,   218,
     266,   214,   215,   216,   217,   244,   249,   245,   247,   248,
     226,   231,   228,   232,   235,   255,   250,   253,   257,   219,
     251,   258,   287,   256,   236,   262,   259,   268,   269,   264,
     272,   265,   278,   243,   273,   282,   276,   285,   279,   182,
     205,    45,   225,   135,   164,   239,   286,   277,   211,     0,
     252,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       0,    56,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     104
};

static const yytype_int16 yycheck[] =
{
      94,    59,   170,   215,   216,    16,    17,   221,    32,    38,
       0,    15,    16,    17,    15,    16,    17,    15,    18,   231,
      24,    15,    26,    27,    53,    14,    24,    51,    26,    27,
      28,    19,    20,    21,    22,    23,    54,    24,    56,    26,
      27,    28,   256,    15,    16,    17,    29,    14,    59,    16,
       3,   263,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       7,     8,    25,     3,    26,   253,     3,    46,    14,    24,
       4,    16,    15,    14,    16,    50,     3,    16,   266,    28,
      16,     3,    14,    14,    14,     3,    40,    13,     4,    27,
       3,   279,    16,    14,   282,    14,    31,     9,     4,    14,
       3,    52,    16,     5,     4,    16,    16,    14,    16,    14,
       4,    15,     4,     4,    15,    48,    15,    14,    16,    15,
       4,    16,    15,     5,    33,    15,     4,    16,    15,   243,
      16,    10,    15,    13,     4,    16,     4,     4,     4,    16,
      16,    15,   220,    15,     4,     4,    34,     4,     6,     4,
      13,    16,    16,    14,    16,     4,   234,     4,    27,     4,
      16,    14,    16,    14,    16,     4,    14,    11,     4,    54,
      16,     3,   286,    16,    47,     4,    14,     4,     3,    16,
       4,    16,     4,    58,    14,     5,    12,    10,     9,   163,
     181,    41,   204,   116,   147,   224,    15,   273,   188,    -1,
     237,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      93
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,    62,     0,    18,    68,    15,    29,    69,     3,
      25,   118,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      70,    71,     3,    26,   115,    70,     3,    63,    14,   114,
      46,   116,   117,   114,    14,    64,   116,    16,    89,    90,
      24,    95,    96,    15,     4,    89,    16,    65,    95,    14,
      50,   121,   122,     3,    16,   122,    28,    72,    73,    16,
       3,    14,    66,    72,    14,    14,   103,     3,    40,    74,
      75,    27,    97,    98,    13,     4,    16,    14,    31,    93,
      94,    74,    14,   100,    97,   103,     9,     3,    15,    24,
      26,    27,    28,    32,    51,    84,    85,    86,    93,    14,
      99,    16,    16,     4,    16,    14,    16,    14,    24,    26,
      27,    28,    54,    56,    67,    84,    15,     3,     5,     4,
      15,    15,    14,    15,    38,    53,    81,    82,    83,    19,
      20,    21,    22,    23,    16,   106,    16,     4,     4,    15,
       4,    33,    77,    78,    81,    15,    16,    16,    17,    59,
     105,     4,    15,   104,    16,     5,    10,     4,    15,    52,
      79,    80,    77,    15,    16,    17,    16,   105,    13,     4,
      16,    16,   107,    15,    15,    16,    17,    24,    26,    27,
      76,    15,    34,    87,    88,    79,     4,     4,     4,     4,
       4,   104,     4,     6,    16,    16,    14,    16,     4,    54,
      14,    16,    48,    91,    92,    87,    16,   112,    16,    76,
      76,    14,    14,    89,   100,    16,    47,   119,   120,    91,
       7,     8,   113,    58,     4,     4,    76,    27,     4,    89,
      14,    16,   120,    11,   103,     4,    16,     4,     3,    14,
     105,   108,     4,   100,    16,    16,    13,    76,     4,     3,
     105,   109,     4,    14,   101,   102,    12,   102,     4,     9,
     105,   110,     5,   105,   111,    10,    15,   103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    62,    63,    64,    65,    66,    67,    61,    68,
      69,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    72,    73,    74,    74,    75,    76,    76,
      76,    77,    77,    78,    78,    78,    78,    79,    79,    80,
      81,    81,    82,    82,    82,    83,    83,    84,    84,    85,
      85,    85,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    91,    91,
      92,    93,    93,    94,    94,    94,    94,    94,    95,    95,
      96,    97,    97,    98,    99,    99,   100,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   113,   114,   114,   115,   116,
     116,   117,   118,   119,   120,   120,   121,   122,   122
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,     0,     0,    23,     2,
       2,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,    15,     0,     2,     5,     1,     1,
       1,     0,     2,     4,     6,     6,     7,     0,     2,     9,
       0,     2,     4,     4,     4,     1,     1,     0,     2,     6,
       6,     4,     5,     6,     1,     2,     2,     2,     2,     2,
       2,     0,     2,     5,     4,     0,     2,     2,     0,     2,
       6,     0,     2,     3,     5,     5,     5,     6,     0,     2,
       7,     0,     2,    22,     0,     1,     1,     1,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     3,     0,
       2,     4,     2,     7,     0,     2,     5,     0,     2
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
      yyerror (dbcptr, YY_("syntax error: cannot back up")); \
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
                  Type, Value, dbcptr); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void* dbcptr)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (dbcptr);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void* dbcptr)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, dbcptr);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, void* dbcptr)
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
                                              , dbcptr);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, dbcptr); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void* dbcptr)
{
  YYUSE (yyvaluep);
  YYUSE (dbcptr);
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
yyparse (void* dbcptr)
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
#line 352 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
        CREATE(network_t, network);
        current_dbc = (dbc_t *)dbcptr;
        current_dbc->network = network;
        current_dbc->network->comment = NULL;
        current_dbc->network->attribute_list = NULL;
      }
#line 1773 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 363 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { current_dbc->node_list = (yyvsp[0].node_list); }
#line 1779 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 365 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { current_dbc->valtable_list = (yyvsp[0].valtable_list); }
#line 1785 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 367 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { current_dbc->message_list = (yyvsp[0].message_list); }
#line 1791 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 370 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { current_dbc->envvar_list  = (yyvsp[0].envvar_list); }
#line 1797 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 374 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { current_dbc->attribute_definition_list = (yyvsp[0].attribute_definition_list); }
#line 1803 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 381 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
        current_dbc->version            = (yyvsp[-21].string);
        current_dbc->signal_group_list  = (yyvsp[0].signal_group_list);
	current_dbc->attribute_rel_list = (yyvsp[-3].attribute_rel_list);
      }
#line 1813 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 388 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1819 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 432 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      (yyval.envvar_list) = NULL;
    }
#line 1827 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 436 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(envvar_list_t,list);
      list->envvar = (yyvsp[-1].envvar);
      list->next   = (yyvsp[0].envvar_list);
      (yyval.envvar_list) = list;
    }
#line 1838 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 460 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(envvar_t, envvar);

      envvar->name    = (yyvsp[-13].string);
      envvar->envtype = (envtype_t)(yyvsp[-11].number);
      envvar->min     = (yyvsp[-9].number);
      envvar->max     = (yyvsp[-7].number);
      envvar->unit    = (yyvsp[-5].string);
      envvar->max     = (yyvsp[-4].number);
      envvar->index   = (yyvsp[-3].number);
      envvar->access  = (accesstype_t)(yyvsp[-2].number);
      envvar->node_list = (yyvsp[-1].string_list);
      envvar->val_map = NULL;
      envvar->comment = NULL;
      (yyval.envvar) = envvar;
    }
#line 1859 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 487 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
        free((yyvsp[-3].string));
      }
#line 1867 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 498 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(attribute_value_t, av);
      av->value_type    = vt_integer; /* preliminary value type */
      av->value.int_val = (yyvsp[0].number);
      (yyval.attribute_value) = av;
    }
#line 1878 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 505 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(attribute_value_t, av);
      av->value_type = vt_string;
      av->value.string_val = (yyvsp[0].string);
      (yyval.attribute_value) = av;
    }
#line 1889 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 512 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(attribute_value_t, av);
      av->value_type = vt_float;
      av->value.double_val = (yyvsp[0].double_val);
      (yyval.attribute_value) = av;
    }
#line 1900 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 527 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      if(current_dbc->network != NULL) {
        attribute_append(&current_dbc->network->attribute_list,(yyvsp[-2].string),(yyvsp[-1].attribute_value));
      } else {
        fprintf(stderr,"error: network not found\n");
        free((yyvsp[-2].string));
        attribute_value_free((yyvsp[-1].attribute_value));
      }
    }
#line 1914 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 537 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      node_t *const node = node_find((yyvsp[-2].string));
      if(node != NULL) {
        attribute_append(&node->attribute_list,(yyvsp[-4].string),(yyvsp[-1].attribute_value));
      } else {
        fprintf(stderr,"error: node %s not found\n", (yyvsp[-2].string));
        attribute_value_free((yyvsp[-1].attribute_value));
      }
      free((yyvsp[-2].string));
    }
#line 1929 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 548 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      message_t *const message = message_find((yyvsp[-2].number));
      if(message != NULL) {
        attribute_append(&message->attribute_list,(yyvsp[-4].string),(yyvsp[-1].attribute_value));
      } else {
        fprintf(stderr,"error: message %d not found\n", (int)(yyvsp[-2].number));
        attribute_value_free((yyvsp[-1].attribute_value));
        free((yyvsp[-4].string));
      }
    }
#line 1944 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 565 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      signal_t *const signal = signal_find((yyvsp[-3].number),(yyvsp[-2].string));

      if(signal != NULL) {
        attribute_append(&signal->attribute_list,(yyvsp[-5].string),(yyvsp[-1].attribute_value));
      } else {
        fprintf(stderr,"error: signal %d (%s) not found\n", (int)(yyvsp[-3].number), (yyvsp[-2].string));
        attribute_value_free((yyvsp[-1].attribute_value));
        free((yyvsp[-5].string));
      }
      free((yyvsp[-2].string));
    }
#line 1961 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 581 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      (yyval.attribute_rel_list) = NULL;
    }
#line 1969 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 585 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(attribute_rel_list_t,list);
      list->attribute_rel = (yyvsp[-1].attribute_rel);
      list->next          = (yyvsp[0].attribute_rel_list);
      (yyval.attribute_rel_list) = list;
    }
#line 1980 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 604 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      node_t *node = node_find((yyvsp[-5].string));
      message_t *message = message_find((yyvsp[-3].number));
      signal_t *signal = signal_find((yyvsp[-3].number),(yyvsp[-2].signal_name));

      if(   (node != NULL)
         && (message != NULL)
         && (signal != NULL)) {
        CREATE(attribute_rel_t,attribute_rel);
        attribute_rel->name             = (yyvsp[-7].string);
        attribute_rel->node             = node;
        attribute_rel->message          = message;
        attribute_rel->signal           = signal;
        attribute_rel->attribute_value  = (yyvsp[-1].attribute_value);
        (yyval.attribute_rel) = attribute_rel;
      } else {
        free((yyvsp[-7].string));
        attribute_value_free((yyvsp[-1].attribute_value));
        (yyval.attribute_rel) = NULL;
      }
      free((yyvsp[-5].string));
      free((yyvsp[-2].signal_name));
    }
#line 2008 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 637 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      attribute_definition_t *const ad = attribute_definition_find((yyvsp[-2].string), (yyvsp[-3].attribute_object_class));
      free((yyvsp[-2].string));
      if(ad != NULL) {
        switch(ad->value_type) {
        case vt_integer: ad->default_value.int_val = (yyvsp[-1].number); break;
        case vt_hex:     ad->default_value.hex_val = (uint32)(yyvsp[-1].number); break;
        case vt_float:   ad->default_value.double_val = (double)(yyvsp[-1].number); break;
        default:
          break;
        }
      }
    }
#line 2026 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 652 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      attribute_definition_t *const ad = attribute_definition_find((yyvsp[-2].string), (yyvsp[-3].attribute_object_class));
      free((yyvsp[-2].string));
      if(ad != NULL && ad->value_type == vt_float) {
        ad->default_value.double_val = (yyvsp[-1].double_val);
      }
    }
#line 2038 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 661 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      attribute_definition_t *const ad = attribute_definition_find((yyvsp[-2].string), (yyvsp[-3].attribute_object_class));
      if(ad != NULL) {
        switch(ad->value_type) {
        case vt_string:
          ad->default_value.string_val = (yyvsp[-1].string);
          break;
        case vt_enum:
          ad->default_value.enum_val = (yyvsp[-1].string);
          break;
        default:
          break;
        }
      } else {
        fprintf(stderr,"error: attribute %s not found\n", (yyvsp[-2].string));
        free((yyvsp[-1].string));
      }
      free((yyvsp[-2].string));
    }
#line 2062 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 683 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.attribute_object_class) = aoc_object; }
#line 2068 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 684 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.attribute_object_class) = aoc_relation; }
#line 2074 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 689 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      (yyval.attribute_definition_list) = NULL;
    }
#line 2082 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 693 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(attribute_definition_list_t,list);
      list->attribute_definition = (yyvsp[-1].attribute_definition);
      list->next                 = (yyvsp[0].attribute_definition_list);
      (yyval.attribute_definition_list) = list;
    }
#line 2093 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 704 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(attribute_definition_t,ad);
      ad->object_type           = (yyvsp[-5].object_type);
      ad->name                  = (yyvsp[-4].string);
      ad->value_type            = vt_integer;
      ad->range.int_range.min   = (sint32)(yyvsp[-2].number);
      ad->range.int_range.max   = (sint32)(yyvsp[-1].number);
      ad->default_value.int_val = 0;
      (yyval.attribute_definition) = ad;
    }
#line 2108 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 716 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(attribute_definition_t,ad);
      ad->object_type              = (yyvsp[-5].object_type);
      ad->name                     = (yyvsp[-4].string);
      ad->value_type               = vt_float;
      ad->range.double_range.min   = (yyvsp[-2].double_val);
      ad->range.double_range.max   = (yyvsp[-1].double_val);
      ad->default_value.double_val = 0;
      (yyval.attribute_definition) = ad;
    }
#line 2123 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 727 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(attribute_definition_t,ad);
      ad->object_type              = (yyvsp[-3].object_type);
      ad->name                     = (yyvsp[-2].string);
      ad->value_type               = vt_string;
      ad->default_value.string_val = NULL;
      (yyval.attribute_definition) = ad;
    }
#line 2136 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 736 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(attribute_definition_t,ad);
      ad->object_type            = (yyvsp[-4].object_type);
      ad->name                   = (yyvsp[-3].string);
      ad->value_type             = vt_enum;
      ad->range.enum_list        = (yyvsp[-1].string_list);
      ad->default_value.enum_val = NULL;
      (yyval.attribute_definition) = ad;
    }
#line 2150 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 746 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(attribute_definition_t,ad);
      ad->object_type           = (yyvsp[-5].object_type);
      ad->name                  = (yyvsp[-4].string);
      ad->value_type            = vt_hex;
      ad->range.hex_range.min   = (uint32)(yyvsp[-2].number);
      ad->range.hex_range.max   = (uint32)(yyvsp[-1].number);
      ad->default_value.hex_val = 0;
      (yyval.attribute_definition) = ad;
    }
#line 2165 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 759 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.object_type) = ot_network; }
#line 2171 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 760 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.object_type) = ot_node; }
#line 2177 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 761 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.object_type) = ot_message; }
#line 2183 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 762 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.object_type) = ot_signal; }
#line 2189 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 763 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.object_type) = ot_envvar; }
#line 2195 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 765 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.object_type) = ot_node_signal; }
#line 2201 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 767 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.object_type) = ot_node_message; }
#line 2207 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 780 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      signal_t *const signal = signal_find((yyvsp[-3].number),(yyvsp[-2].signal_name));

      if(signal != NULL) {
        if(signal->val_map == NULL) {
          signal->val_map = (yyvsp[-1].val_map);
        } else {
          fprintf(stderr,
                  "error: duplicate val_map for signal %d (%s)\n", (int)(yyvsp[-3].number), (yyvsp[-2].signal_name));
          val_map_free((yyvsp[-1].val_map));
        }
      } else {
        fprintf(stderr,"error: signal %d (%s) not found\n", (int)(yyvsp[-3].number), (yyvsp[-2].signal_name));
        val_map_free((yyvsp[-1].val_map));
      }
      free((yyvsp[-2].signal_name));
    }
#line 2229 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 799 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      envvar_t *const envvar = envvar_find((yyvsp[-2].string));

      if(envvar != NULL) {
        if(envvar->val_map == NULL) {
          envvar->val_map = (yyvsp[-1].val_map);
        } else {
          fprintf(stderr,
                  "error: duplicate val_map for environment variable %s\n", (yyvsp[-2].string));
          val_map_free((yyvsp[-1].val_map));
        }
      } else {
        fprintf(stderr,"error: environment variable %s not found\n", (yyvsp[-2].string));
        val_map_free((yyvsp[-1].val_map));
      }
      free((yyvsp[-2].string));
    }
#line 2251 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 820 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      (yyval.val_map) = NULL;
    }
#line 2259 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 824 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(val_map_t, val_map);
      val_map->val_map_entry = (yyvsp[-1].val_map_entry);
      val_map->next          = (yyvsp[0].val_map);
      (yyval.val_map) = val_map;
    }
#line 2270 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 834 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(val_map_entry_t, val_map_entry);
      val_map_entry->index = (yyvsp[-1].number);
      val_map_entry->value = (yyvsp[0].string);
      (yyval.val_map_entry) = val_map_entry;
    }
#line 2281 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 859 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      signal_t *const s = signal_find((yyvsp[-4].number),(yyvsp[-3].string));
      free((yyvsp[-3].string));
      if(s != NULL) {
        switch((yyvsp[-1].number)) {
        case 1: s->signal_val_type = svt_float; break;
        case 2: s->signal_val_type = svt_double; break;
        }
      }
    }
#line 2296 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 881 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      if(current_dbc->network != NULL) {
	current_dbc->network->comment =
	  string_merge(current_dbc->network->comment, (yyvsp[-1].string));
      } else {
	string_free((yyvsp[-1].string));
      }
    }
#line 2309 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 890 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      envvar_t *const envvar = envvar_find((yyvsp[-2].string));
      if(envvar != NULL) {
	envvar->comment = string_merge(envvar->comment, (yyvsp[-1].string));
      } else {
        fprintf(stderr,"error: environment variable %s not found\n", (yyvsp[-2].string));
	string_free((yyvsp[-1].string));
      }
      string_free((yyvsp[-2].string));
    }
#line 2324 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 901 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      node_t *const node = node_find((yyvsp[-2].string));
      if(node != NULL) {
	node->comment = string_merge(node->comment, (yyvsp[-1].string));
      } else {
        fprintf(stderr,"error: node %s not found\n", (yyvsp[-2].string));
        string_free((yyvsp[-1].string));
      }
      string_free((yyvsp[-2].string));
    }
#line 2339 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 912 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      message_t *const message = message_find((yyvsp[-2].number));
      if(message != NULL) {
	message->comment = string_merge(message->comment, (yyvsp[-1].string));
      } else {
        fprintf(stderr,"error: message %s not found\n", (yyvsp[-1].string));
        string_free((yyvsp[-1].string));
      }
    }
#line 2353 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 922 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      signal_t *const signal = signal_find((yyvsp[-3].number), (yyvsp[-2].string));
      if(signal != NULL) {
	signal->comment = string_merge(signal->comment, (yyvsp[-1].string));
      } else {
        fprintf(stderr,"error: signal %d (%s) not found\n", (int)(yyvsp[-3].number), (yyvsp[-2].string));
        string_free((yyvsp[-1].string));
      }
      string_free((yyvsp[-2].string));
    }
#line 2368 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 938 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      (yyval.message_list) = NULL;
    }
#line 2376 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 942 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(message_list_t,list);
      list->message = (yyvsp[-1].message);
      list->next    = (yyvsp[0].message_list);
      (yyval.message_list) = list;
    }
#line 2387 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 952 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(message_t, m);
      m->id               = (yyvsp[-5].number);
      m->name             = (yyvsp[-4].string);
      m->len              = (yyvsp[-2].number);
      m->sender           = (yyvsp[-1].string);
      m->signal_list      = (yyvsp[0].signal_list);
      m->comment          = NULL;
      m->attribute_list   = NULL;
      m->transmitter_list = NULL;
      (yyval.message) = m;
    }
#line 2404 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 970 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      (yyval.signal_list) = NULL;
    }
#line 2412 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 974 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(signal_list_t,list);
      list->signal = (yyvsp[-1].signal);
      list->next   = (yyvsp[0].signal_list);
      (yyval.signal_list) = list;
    }
#line 2423 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 988 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(signal_t, signal);
      signal->name       = (yyvsp[-20].signal_name);
      signal->mux_type   = (yyvsp[-19].mux_info).mux_type;
      signal->mux_value  = (yyvsp[-19].mux_info).mux_value;
      signal->bit_start  = (yyvsp[-17].number);
      signal->bit_len    = (yyvsp[-15].number);
      signal->endianess  = (yyvsp[-13].number);
      signal->signedness = (yyvsp[-12].number);
      signal->scale      = (yyvsp[-10].double_val);
      signal->offset     = (yyvsp[-8].double_val);
      signal->min        = (yyvsp[-5].double_val);
      signal->max        = (yyvsp[-3].double_val);
      signal->unit       = (yyvsp[-1].string);
      signal->signal_val_type = svt_integer;
      signal->receiver_list   = (yyvsp[0].string_list);
      signal->comment         = NULL;
      signal->attribute_list  = NULL;
      signal->val_map         = NULL;
      (yyval.signal) = signal;
    }
#line 2449 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1015 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      (yyval.mux_info).mux_type = m_signal;
      (yyval.mux_info).mux_value = 0;
    }
#line 2458 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1020 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      switch((yyvsp[0].string)[0]) {
      case 'M':
        (yyval.mux_info).mux_type  = m_multiplexor;
        (yyval.mux_info).mux_value = 0;
        break;
      case 'm':
        (yyval.mux_info).mux_type  = m_multiplexed;
        (yyval.mux_info).mux_value = strtoul((yyvsp[0].string)+1, NULL, 10);
        break;
      default:
        /* error: unknown mux type */
        break;
      }
      free((yyvsp[0].string));
    }
#line 2479 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1038 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.signal_name) = (string_t)(yyvsp[0].string); }
#line 2485 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1039 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.signal_name_list) = (string_list_t *)(yyvsp[0].string_list); }
#line 2491 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1043 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(string_list_t,list);
      list->string = (yyvsp[0].string);
      list->next   = NULL;
      (yyval.string_list) = list;
    }
#line 2502 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1050 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(string_list_t,list);
      list->string = (yyvsp[-1].string);
      list->next   = (yyvsp[0].string_list);
      (yyval.string_list) = list;
    }
#line 2513 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1060 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(string_list_t,list);
      list->string = (yyvsp[0].string);
      list->next   = NULL;
      (yyval.string_list) = list;
    }
#line 2524 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1067 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(string_list_t,list);
      list->string = (yyvsp[-2].string);
      list->next   = (yyvsp[0].string_list);
      (yyval.string_list) = list;
    }
#line 2535 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1077 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(string_list_t,list);
      list->string = (yyvsp[0].string);
      list->next   = NULL;
      (yyval.string_list) = list;
    }
#line 2546 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1084 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(string_list_t,list);
      list->string = (yyvsp[-2].string);
      list->next   = (yyvsp[0].string_list);
      (yyval.string_list) = list;
    }
#line 2557 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1094 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.double_val) = (yyvsp[0].double_val); }
#line 2563 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1095 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.double_val) = NAN; }
#line 2569 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1096 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.double_val) = (double)(yyvsp[0].number); }
#line 2575 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1099 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[0].number); }
#line 2581 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1100 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[0].number); }
#line 2587 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1102 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.double_val) = (yyvsp[0].double_val); }
#line 2593 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1103 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.double_val) = (yyvsp[0].double_val); }
#line 2599 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1104 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.double_val) = (yyvsp[0].double_val); }
#line 2605 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1105 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.double_val) = (yyvsp[0].double_val); }
#line 2611 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1107 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[0].number); }
#line 2617 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1110 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2623 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1111 "src/libcandbc/parser.y" /* yacc.c:1646  */
    { (yyval.number) = 1; }
#line 2629 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1118 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      (yyval.node_list) = NULL;
    }
#line 2637 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1122 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(node_list_t,list);
      CREATE(node_t,node);
      node->name = (yyvsp[-1].string);
      node->comment = NULL;
      node->attribute_list = NULL;
      list->node = node;
      list->next = (yyvsp[0].node_list);
      (yyval.node_list) = list;
    }
#line 2652 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1135 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      (yyval.node_list) = (yyvsp[0].node_list);
    }
#line 2660 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1142 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      (yyval.valtable_list) = NULL;
    }
#line 2668 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1146 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(valtable_list_t, valtable_list);
      valtable_list->next     = (yyvsp[0].valtable_list);
      valtable_list->valtable = (yyvsp[-1].valtable);
      (yyval.valtable_list) = valtable_list;
    }
#line 2679 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1156 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(valtable_t, valtable);
      valtable->name    = (yyvsp[-2].string);
      valtable->comment = NULL;
      valtable->val_map = (yyvsp[-1].val_map);
      (yyval.valtable) = valtable;
    }
#line 2691 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1173 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(signal_group_t,sg);
      sg->id   = (yyvsp[-5].number);
      sg->name = (yyvsp[-4].string);
      /* TODO: meaning of $4? */
      sg->signal_name_list = (yyvsp[-1].signal_name_list);
      (yyval.signal_group) = sg;
    }
#line 2704 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1186 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      (yyval.signal_group_list) = NULL;
    }
#line 2712 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1190 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      CREATE(signal_group_list_t,list);
      list->signal_group = (yyvsp[-1].signal_group);
      list->next         = (yyvsp[0].signal_group_list);
      (yyval.signal_group_list) = list;
    }
#line 2723 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1201 "src/libcandbc/parser.y" /* yacc.c:1646  */
    {
      message_t *const message = message_find((yyvsp[-3].number));
      if(message != NULL) {
	/* duplicate list: new one replaces old one */
	string_list_free(message->transmitter_list);
	message->transmitter_list = (yyvsp[-1].string_list);
      } else {
        fprintf(stderr,"error: message %d not found\n", (int)(yyvsp[-3].number));
	string_list_free((yyvsp[-1].string_list));
      }
    }
#line 2739 "src/libcandbc/parser.c" /* yacc.c:1646  */
    break;


#line 2743 "src/libcandbc/parser.c" /* yacc.c:1646  */
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
      yyerror (dbcptr, YY_("syntax error"));
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
        yyerror (dbcptr, yymsgp);
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
                      yytoken, &yylval, dbcptr);
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
                  yystos[yystate], yyvsp, dbcptr);
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
  yyerror (dbcptr, YY_("memory exhausted"));
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
                  yytoken, &yylval, dbcptr);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, dbcptr);
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
