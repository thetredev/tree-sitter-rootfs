#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_imports = 2,
  anon_sym_EQ = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  sym_import_path = 6,
  sym_string = 7,
  sym_bare_string = 8,
  anon_sym_LBRACE = 9,
  anon_sym_DOLLAR_LPAREN = 10,
  sym_identifier = 11,
  sym_block_content_line = 12,
  sym__block_end = 13,
  sym_source_file = 14,
  sym__statement = 15,
  sym_imports_stmt = 16,
  sym_assignment = 17,
  sym__value = 18,
  sym_scalar = 19,
  sym_list = 20,
  sym_block_def = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_imports_stmt_repeat1 = 23,
  aux_sym_list_repeat1 = 24,
  aux_sym_block_def_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_imports] = "imports",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_import_path] = "import_path",
  [sym_string] = "string",
  [sym_bare_string] = "bare_string",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [sym_identifier] = "identifier",
  [sym_block_content_line] = "block_content_line",
  [sym__block_end] = "_block_end",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_imports_stmt] = "imports_stmt",
  [sym_assignment] = "assignment",
  [sym__value] = "_value",
  [sym_scalar] = "scalar",
  [sym_list] = "list",
  [sym_block_def] = "block_def",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_imports_stmt_repeat1] = "imports_stmt_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_block_def_repeat1] = "block_def_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_imports] = anon_sym_imports,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_import_path] = sym_import_path,
  [sym_string] = sym_string,
  [sym_bare_string] = sym_bare_string,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [sym_identifier] = sym_identifier,
  [sym_block_content_line] = sym_block_content_line,
  [sym__block_end] = sym__block_end,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_imports_stmt] = sym_imports_stmt,
  [sym_assignment] = sym_assignment,
  [sym__value] = sym__value,
  [sym_scalar] = sym_scalar,
  [sym_list] = sym_list,
  [sym_block_def] = sym_block_def,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_imports_stmt_repeat1] = aux_sym_imports_stmt_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_block_def_repeat1] = aux_sym_block_def_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_imports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_import_path] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bare_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_block_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym__block_end] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_imports_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_scalar] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block_def] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_imports_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_def_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
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
};

static TSCharacterRange sym_bare_string_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '<'}, {'>', 'Z'}, {'\\', '\\'}, {'^', 'z'}, {'|', '|'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '"', 3,
        '#', 11,
        '$', 6,
        '=', 13,
        '[', 14,
        ']', 15,
        'i', 26,
        '{', 23,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if ((',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_imports);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_import_path);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_import_path);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_import_path);
      if ((',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_bare_string);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '{') ADVANCE(7);
      if ((!eof && set_contains(sym_bare_string_character_set_1, 9, lookahead))) ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_bare_string);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '{') ADVANCE(7);
      if ((!eof && set_contains(sym_bare_string_character_set_1, 9, lookahead))) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_bare_string);
      if (lookahead == '$') ADVANCE(21);
      if ((!eof && set_contains(sym_bare_string_character_set_1, 9, lookahead))) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead == '$') ADVANCE(21);
      if ((!eof && set_contains(sym_bare_string_character_set_1, 9, lookahead))) ADVANCE(22);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_imports] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_block_content_line] = ACTIONS(1),
    [sym__block_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym__statement] = STATE(4),
    [sym_imports_stmt] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_block_def] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_imports] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_string,
    ACTIONS(15), 1,
      sym_bare_string,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(9), 3,
      sym__value,
      sym_scalar,
      sym_list,
  [24] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_imports,
    ACTIONS(26), 1,
      sym_identifier,
    STATE(3), 5,
      sym__statement,
      sym_imports_stmt,
      sym_assignment,
      sym_block_def,
      aux_sym_source_file_repeat1,
  [44] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_imports,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(3), 5,
      sym__statement,
      sym_imports_stmt,
      sym_assignment,
      sym_block_def,
      aux_sym_source_file_repeat1,
  [64] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 2,
      anon_sym_imports,
      sym_identifier,
  [75] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(37), 1,
      sym_import_path,
    STATE(11), 1,
      aux_sym_imports_stmt_repeat1,
  [88] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    ACTIONS(41), 1,
      sym_bare_string,
    STATE(13), 1,
      aux_sym_list_repeat1,
  [101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_block_content_line,
    ACTIONS(45), 1,
      sym__block_end,
    STATE(15), 1,
      aux_sym_block_def_repeat1,
  [114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      anon_sym_imports,
      sym_identifier,
  [125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 2,
      anon_sym_imports,
      sym_identifier,
  [136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(57), 1,
      sym_import_path,
    STATE(17), 1,
      aux_sym_imports_stmt_repeat1,
  [149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 2,
      anon_sym_imports,
      sym_identifier,
  [160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    ACTIONS(65), 1,
      sym_bare_string,
    STATE(19), 1,
      aux_sym_list_repeat1,
  [173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 2,
      anon_sym_imports,
      sym_identifier,
  [184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_block_content_line,
    ACTIONS(73), 1,
      sym__block_end,
    STATE(21), 1,
      aux_sym_block_def_repeat1,
  [197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 2,
      anon_sym_imports,
      sym_identifier,
  [208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_import_path,
    STATE(17), 1,
      aux_sym_imports_stmt_repeat1,
  [221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 2,
      anon_sym_imports,
      sym_identifier,
  [232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(90), 1,
      sym_bare_string,
    STATE(19), 1,
      aux_sym_list_repeat1,
  [245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 2,
      anon_sym_imports,
      sym_identifier,
  [256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_block_content_line,
    ACTIONS(100), 1,
      sym__block_end,
    STATE(21), 1,
      aux_sym_block_def_repeat1,
  [269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_EQ,
  [276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
  [283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_EQ,
  [290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 75,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 114,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 160,
  [SMALL_STATE(14)] = 173,
  [SMALL_STATE(15)] = 184,
  [SMALL_STATE(16)] = 197,
  [SMALL_STATE(17)] = 208,
  [SMALL_STATE(18)] = 221,
  [SMALL_STATE(19)] = 232,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 256,
  [SMALL_STATE(22)] = 269,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 283,
  [SMALL_STATE(25)] = 290,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports_stmt, 4, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imports_stmt, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_def, 4, 0, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_def, 4, 0, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports_stmt, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imports_stmt, 5, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imports_stmt_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_imports_stmt_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_def, 5, 0, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_def, 5, 0, 1),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_def_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_def_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_block_content_line = 0,
  ts_external_token__block_end = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_block_content_line] = sym_block_content_line,
  [ts_external_token__block_end] = sym__block_end,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_block_content_line] = true,
    [ts_external_token__block_end] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_rootfs_external_scanner_create(void);
void tree_sitter_rootfs_external_scanner_destroy(void *);
bool tree_sitter_rootfs_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_rootfs_external_scanner_serialize(void *, char *);
void tree_sitter_rootfs_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_rootfs(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_rootfs_external_scanner_create,
      tree_sitter_rootfs_external_scanner_destroy,
      tree_sitter_rootfs_external_scanner_scan,
      tree_sitter_rootfs_external_scanner_serialize,
      tree_sitter_rootfs_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
