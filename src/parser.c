#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_ident = 1,
  anon_sym_fn = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_DASH_GT = 5,
  sym_num_lit = 6,
  sym_str_lit = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_SLASH = 12,
  anon_sym_STAR = 13,
  anon_sym_COMMA = 14,
  anon_sym_EQ_EQ = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_LT = 17,
  anon_sym_LT_EQ = 18,
  anon_sym_GT = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_PIPE_PIPE = 21,
  anon_sym_AMP_AMP = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_EQ = 25,
  anon_sym_SEMI = 26,
  anon_sym_if = 27,
  anon_sym_else = 28,
  anon_sym_for = 29,
  anon_sym_print = 30,
  anon_sym_return = 31,
  anon_sym_none = 32,
  anon_sym_Number = 33,
  anon_sym_String = 34,
  anon_sym_LPAREN_RPAREN = 35,
  anon_sym_COLON = 36,
  sym_prog = 37,
  sym_func_decl = 38,
  sym_lit = 39,
  sym_call = 40,
  sym_expr = 41,
  sym_exprs = 42,
  sym_cond = 43,
  sym_block = 44,
  sym_stat = 45,
  sym_stats = 46,
  sym_type = 47,
  sym_func_body = 48,
  sym_param = 49,
  sym_param_list = 50,
  aux_sym_prog_repeat1 = 51,
  aux_sym_block_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [sym_num_lit] = "num_lit",
  [sym_str_lit] = "str_lit",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_print] = "print",
  [anon_sym_return] = "return",
  [anon_sym_none] = "none",
  [anon_sym_Number] = "Number",
  [anon_sym_String] = "String",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_COLON] = ":",
  [sym_prog] = "prog",
  [sym_func_decl] = "func_decl",
  [sym_lit] = "lit",
  [sym_call] = "call",
  [sym_expr] = "expr",
  [sym_exprs] = "exprs",
  [sym_cond] = "cond",
  [sym_block] = "block",
  [sym_stat] = "stat",
  [sym_stats] = "stats",
  [sym_type] = "type",
  [sym_func_body] = "func_body",
  [sym_param] = "param",
  [sym_param_list] = "param_list",
  [aux_sym_prog_repeat1] = "prog_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_num_lit] = sym_num_lit,
  [sym_str_lit] = sym_str_lit,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_Number] = anon_sym_Number,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_prog] = sym_prog,
  [sym_func_decl] = sym_func_decl,
  [sym_lit] = sym_lit,
  [sym_call] = sym_call,
  [sym_expr] = sym_expr,
  [sym_exprs] = sym_exprs,
  [sym_cond] = sym_cond,
  [sym_block] = sym_block,
  [sym_stat] = sym_stat,
  [sym_stats] = sym_stats,
  [sym_type] = sym_type,
  [sym_func_body] = sym_func_body,
  [sym_param] = sym_param,
  [sym_param_list] = sym_param_list,
  [aux_sym_prog_repeat1] = aux_sym_prog_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_num_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_str_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_prog] = {
    .visible = true,
    .named = true,
  },
  [sym_func_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_exprs] = {
    .visible = true,
    .named = true,
  },
  [sym_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_stats] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_func_body] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_prog_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '!', 7,
        '"', 11,
        '&', 3,
        '(', 13,
        ')', 14,
        '*', 23,
        '+', 19,
        ',', 24,
        '-', 21,
        '/', 22,
        ':', 39,
        ';', 37,
        '<', 27,
        '=', 36,
        '>', 29,
        '{', 33,
        '|', 10,
        '}', 34,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 7,
        '(', 13,
        ')', 14,
        '*', 23,
        '+', 19,
        ',', 24,
        '-', 20,
        '/', 22,
        ';', 37,
        '<', 27,
        '=', 8,
        '>', 29,
        '{', 33,
        '}', 34,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '}') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '{') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '|') ADVANCE(31);
      END_STATE();
    case 11:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_num_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_ident);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(15);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'N', 1,
        'S', 2,
        'e', 3,
        'f', 4,
        'i', 5,
        'n', 6,
        'p', 7,
        'r', 8,
        't', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Number);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_num_lit] = ACTIONS(1),
    [sym_str_lit] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_Number] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_prog] = STATE(87),
    [sym_func_decl] = STATE(47),
    [aux_sym_prog_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 13,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [23] = 13,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_none,
    STATE(5), 1,
      sym_stats,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    STATE(21), 1,
      sym_stat,
    STATE(44), 1,
      sym_expr,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_print,
      anon_sym_return,
  [66] = 3,
    ACTIONS(31), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 11,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [88] = 12,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_none,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    STATE(20), 1,
      sym_stat,
    STATE(45), 1,
      sym_expr,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_print,
      anon_sym_return,
  [128] = 2,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 13,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [148] = 2,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 13,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [168] = 2,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 13,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [188] = 2,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 13,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [208] = 2,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 13,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [228] = 2,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 13,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [248] = 2,
    ACTIONS(47), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_num_lit,
      sym_str_lit,
      anon_sym_RBRACE,
    ACTIONS(45), 9,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_print,
      anon_sym_return,
      anon_sym_none,
  [267] = 3,
    ACTIONS(53), 1,
      anon_sym_else,
    ACTIONS(51), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_num_lit,
      sym_str_lit,
      anon_sym_RBRACE,
    ACTIONS(49), 8,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_if,
      anon_sym_for,
      anon_sym_print,
      anon_sym_return,
      anon_sym_none,
  [288] = 2,
    ACTIONS(57), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_num_lit,
      sym_str_lit,
      anon_sym_RBRACE,
    ACTIONS(55), 9,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_print,
      anon_sym_return,
      anon_sym_none,
  [307] = 2,
    ACTIONS(61), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_num_lit,
      sym_str_lit,
      anon_sym_RBRACE,
    ACTIONS(59), 8,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_if,
      anon_sym_for,
      anon_sym_print,
      anon_sym_return,
      anon_sym_none,
  [325] = 2,
    ACTIONS(65), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_num_lit,
      sym_str_lit,
      anon_sym_RBRACE,
    ACTIONS(63), 8,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_if,
      anon_sym_for,
      anon_sym_print,
      anon_sym_return,
      anon_sym_none,
  [343] = 2,
    ACTIONS(51), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_num_lit,
      sym_str_lit,
      anon_sym_RBRACE,
    ACTIONS(49), 8,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_if,
      anon_sym_for,
      anon_sym_print,
      anon_sym_return,
      anon_sym_none,
  [361] = 2,
    ACTIONS(69), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_num_lit,
      sym_str_lit,
      anon_sym_RBRACE,
    ACTIONS(67), 8,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_if,
      anon_sym_for,
      anon_sym_print,
      anon_sym_return,
      anon_sym_none,
  [379] = 2,
    ACTIONS(73), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_num_lit,
      sym_str_lit,
      anon_sym_RBRACE,
    ACTIONS(71), 8,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_if,
      anon_sym_for,
      anon_sym_print,
      anon_sym_return,
      anon_sym_none,
  [397] = 2,
    ACTIONS(77), 3,
      sym_num_lit,
      sym_str_lit,
      anon_sym_RBRACE,
    ACTIONS(75), 8,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_if,
      anon_sym_for,
      anon_sym_print,
      anon_sym_return,
      anon_sym_none,
  [413] = 2,
    ACTIONS(81), 3,
      sym_num_lit,
      sym_str_lit,
      anon_sym_RBRACE,
    ACTIONS(79), 8,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_if,
      anon_sym_for,
      anon_sym_print,
      anon_sym_return,
      anon_sym_none,
  [429] = 4,
    ACTIONS(31), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [448] = 8,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    STATE(22), 1,
      sym_expr,
    STATE(84), 1,
      sym_cond,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
  [475] = 8,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    STATE(22), 1,
      sym_expr,
    STATE(79), 1,
      sym_cond,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
  [502] = 8,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    STATE(22), 1,
      sym_expr,
    STATE(78), 1,
      sym_cond,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
  [529] = 8,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    STATE(22), 1,
      sym_expr,
    STATE(66), 1,
      sym_cond,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
  [556] = 7,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_none,
    ACTIONS(93), 1,
      sym_ident,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 2,
      anon_sym_print,
      anon_sym_return,
    STATE(30), 2,
      sym_stat,
      aux_sym_block_repeat1,
  [580] = 7,
    ACTIONS(89), 1,
      sym_ident,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    STATE(41), 1,
      sym_expr,
    STATE(68), 1,
      sym_exprs,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
  [604] = 7,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_none,
    ACTIONS(93), 1,
      sym_ident,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 2,
      anon_sym_print,
      anon_sym_return,
    STATE(27), 2,
      sym_stat,
      aux_sym_block_repeat1,
  [628] = 7,
    ACTIONS(99), 1,
      sym_ident,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      anon_sym_if,
    ACTIONS(107), 1,
      anon_sym_for,
    ACTIONS(113), 1,
      anon_sym_none,
    ACTIONS(110), 2,
      anon_sym_print,
      anon_sym_return,
    STATE(30), 2,
      sym_stat,
      aux_sym_block_repeat1,
  [652] = 6,
    ACTIONS(89), 1,
      sym_ident,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    STATE(40), 1,
      sym_expr,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
  [673] = 6,
    ACTIONS(89), 1,
      sym_ident,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    STATE(11), 1,
      sym_expr,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
  [694] = 6,
    ACTIONS(89), 1,
      sym_ident,
    STATE(4), 1,
      sym_expr,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
  [715] = 6,
    ACTIONS(89), 1,
      sym_ident,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    STATE(43), 1,
      sym_expr,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
  [736] = 6,
    ACTIONS(89), 1,
      sym_ident,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    STATE(46), 1,
      sym_expr,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
  [757] = 6,
    ACTIONS(89), 1,
      sym_ident,
    STATE(6), 1,
      sym_call,
    STATE(7), 1,
      sym_lit,
    STATE(42), 1,
      sym_expr,
    ACTIONS(15), 2,
      sym_num_lit,
      sym_str_lit,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
  [778] = 6,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_none,
    ACTIONS(93), 1,
      sym_ident,
    STATE(25), 1,
      sym_stat,
    ACTIONS(25), 2,
      anon_sym_print,
      anon_sym_return,
  [798] = 6,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_none,
    ACTIONS(93), 1,
      sym_ident,
    STATE(83), 1,
      sym_stat,
    ACTIONS(25), 2,
      anon_sym_print,
      anon_sym_return,
  [818] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_EQ,
    ACTIONS(9), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [832] = 3,
    ACTIONS(31), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(118), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [846] = 3,
    ACTIONS(31), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(120), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [859] = 3,
    ACTIONS(31), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(122), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [872] = 3,
    ACTIONS(124), 1,
      anon_sym_SEMI,
    ACTIONS(31), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [884] = 3,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [896] = 3,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [908] = 3,
    ACTIONS(128), 1,
      anon_sym_SEMI,
    ACTIONS(31), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [920] = 3,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(48), 2,
      sym_func_decl,
      aux_sym_prog_repeat1,
  [931] = 3,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_fn,
    STATE(48), 2,
      sym_func_decl,
      aux_sym_prog_repeat1,
  [942] = 4,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_param_list,
    STATE(73), 1,
      sym_param,
  [955] = 2,
    STATE(75), 1,
      sym_type,
    ACTIONS(141), 3,
      anon_sym_Number,
      anon_sym_String,
      anon_sym_LPAREN_RPAREN,
  [964] = 2,
    STATE(63), 1,
      sym_type,
    ACTIONS(141), 3,
      anon_sym_Number,
      anon_sym_String,
      anon_sym_LPAREN_RPAREN,
  [973] = 2,
    STATE(71), 1,
      sym_type,
    ACTIONS(141), 3,
      anon_sym_Number,
      anon_sym_String,
      anon_sym_LPAREN_RPAREN,
  [982] = 1,
    ACTIONS(143), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [988] = 3,
    ACTIONS(145), 1,
      anon_sym_DASH_GT,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_func_body,
  [998] = 3,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      anon_sym_DASH_GT,
    STATE(67), 1,
      sym_func_body,
  [1008] = 1,
    ACTIONS(151), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1014] = 1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1019] = 2,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      anon_sym_COMMA,
  [1026] = 1,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1031] = 2,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
  [1038] = 1,
    ACTIONS(163), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1043] = 1,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1048] = 2,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_func_body,
  [1055] = 2,
    ACTIONS(137), 1,
      sym_ident,
    STATE(61), 1,
      sym_param,
  [1062] = 1,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1067] = 2,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
  [1074] = 1,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1079] = 2,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(173), 1,
      anon_sym_COMMA,
  [1086] = 1,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1091] = 1,
    ACTIONS(177), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1096] = 1,
    ACTIONS(179), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1101] = 1,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1106] = 1,
    ACTIONS(183), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1111] = 2,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [1118] = 2,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_func_body,
  [1125] = 1,
    ACTIONS(185), 1,
      anon_sym_COLON,
  [1129] = 1,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
  [1133] = 1,
    ACTIONS(189), 1,
      anon_sym_SEMI,
  [1137] = 1,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
  [1141] = 1,
    ACTIONS(193), 1,
      sym_ident,
  [1145] = 1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
  [1149] = 1,
    ACTIONS(116), 1,
      anon_sym_EQ,
  [1153] = 1,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
  [1157] = 1,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
  [1161] = 1,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
  [1165] = 1,
    ACTIONS(203), 1,
      anon_sym_SEMI,
  [1169] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 228,
  [SMALL_STATE(12)] = 248,
  [SMALL_STATE(13)] = 267,
  [SMALL_STATE(14)] = 288,
  [SMALL_STATE(15)] = 307,
  [SMALL_STATE(16)] = 325,
  [SMALL_STATE(17)] = 343,
  [SMALL_STATE(18)] = 361,
  [SMALL_STATE(19)] = 379,
  [SMALL_STATE(20)] = 397,
  [SMALL_STATE(21)] = 413,
  [SMALL_STATE(22)] = 429,
  [SMALL_STATE(23)] = 448,
  [SMALL_STATE(24)] = 475,
  [SMALL_STATE(25)] = 502,
  [SMALL_STATE(26)] = 529,
  [SMALL_STATE(27)] = 556,
  [SMALL_STATE(28)] = 580,
  [SMALL_STATE(29)] = 604,
  [SMALL_STATE(30)] = 628,
  [SMALL_STATE(31)] = 652,
  [SMALL_STATE(32)] = 673,
  [SMALL_STATE(33)] = 694,
  [SMALL_STATE(34)] = 715,
  [SMALL_STATE(35)] = 736,
  [SMALL_STATE(36)] = 757,
  [SMALL_STATE(37)] = 778,
  [SMALL_STATE(38)] = 798,
  [SMALL_STATE(39)] = 818,
  [SMALL_STATE(40)] = 832,
  [SMALL_STATE(41)] = 846,
  [SMALL_STATE(42)] = 859,
  [SMALL_STATE(43)] = 872,
  [SMALL_STATE(44)] = 884,
  [SMALL_STATE(45)] = 896,
  [SMALL_STATE(46)] = 908,
  [SMALL_STATE(47)] = 920,
  [SMALL_STATE(48)] = 931,
  [SMALL_STATE(49)] = 942,
  [SMALL_STATE(50)] = 955,
  [SMALL_STATE(51)] = 964,
  [SMALL_STATE(52)] = 973,
  [SMALL_STATE(53)] = 982,
  [SMALL_STATE(54)] = 988,
  [SMALL_STATE(55)] = 998,
  [SMALL_STATE(56)] = 1008,
  [SMALL_STATE(57)] = 1014,
  [SMALL_STATE(58)] = 1019,
  [SMALL_STATE(59)] = 1026,
  [SMALL_STATE(60)] = 1031,
  [SMALL_STATE(61)] = 1038,
  [SMALL_STATE(62)] = 1043,
  [SMALL_STATE(63)] = 1048,
  [SMALL_STATE(64)] = 1055,
  [SMALL_STATE(65)] = 1062,
  [SMALL_STATE(66)] = 1067,
  [SMALL_STATE(67)] = 1074,
  [SMALL_STATE(68)] = 1079,
  [SMALL_STATE(69)] = 1086,
  [SMALL_STATE(70)] = 1091,
  [SMALL_STATE(71)] = 1096,
  [SMALL_STATE(72)] = 1101,
  [SMALL_STATE(73)] = 1106,
  [SMALL_STATE(74)] = 1111,
  [SMALL_STATE(75)] = 1118,
  [SMALL_STATE(76)] = 1125,
  [SMALL_STATE(77)] = 1129,
  [SMALL_STATE(78)] = 1133,
  [SMALL_STATE(79)] = 1137,
  [SMALL_STATE(80)] = 1141,
  [SMALL_STATE(81)] = 1145,
  [SMALL_STATE(82)] = 1149,
  [SMALL_STATE(83)] = 1153,
  [SMALL_STATE(84)] = 1157,
  [SMALL_STATE(85)] = 1161,
  [SMALL_STATE(86)] = 1165,
  [SMALL_STATE(87)] = 1169,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lit, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stat, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stat, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stat, 5, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stat, 5, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stat, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stat, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stat, 8, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stat, 8, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stat, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stat, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stats, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stats, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stats, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stats, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exprs, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exprs, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 7, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_decl, 8, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_decl, 7, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_body, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_body, 4, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_decl, 6, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_decl, 5, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_body, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_wng(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_ident,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
