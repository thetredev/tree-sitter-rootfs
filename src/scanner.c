#include "tree_sitter/parser.h"
#include <stdbool.h>

enum TokenType {
  BLOCK_CONTENT_LINE,
  BLOCK_END,
};

void *tree_sitter_rootfs_external_scanner_create() { return NULL; }
void tree_sitter_rootfs_external_scanner_destroy(void *payload) { (void)payload; }
unsigned tree_sitter_rootfs_external_scanner_serialize(void *payload, char *buffer) {
  (void)payload;
  (void)buffer;
  return 0;
}
void tree_sitter_rootfs_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  (void)payload;
  (void)buffer;
  (void)length;
}

static bool is_eol(TSLexer *lexer) {
  return lexer->lookahead == 0 || lexer->lookahead == '\n' || lexer->lookahead == '\r';
}

// Decide, for the current line, whether it is a lone block terminator
// ("}" for { ... } blocks, ")" for $( ... ) blocks) or arbitrary shell
// content. A line counts as a terminator only if, once leading/trailing
// whitespace is stripped, it is exactly that single character.
bool tree_sitter_rootfs_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  (void)payload;

  if (!valid_symbols[BLOCK_CONTENT_LINE] && !valid_symbols[BLOCK_END]) {
    return false;
  }

  // External scanners run before `extras` skipping, so this scanner must
  // consume leading whitespace/blank lines itself rather than relying on
  // the grammar's `extras` rule to have already done so.
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
         lexer->lookahead == '\r' || lexer->lookahead == '\n') {
    lexer->advance(lexer, true);
  }

  if (lexer->lookahead == 0) {
    return false;
  }

  if ((lexer->lookahead == '}' || lexer->lookahead == ')') && valid_symbols[BLOCK_END]) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);

    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      lexer->advance(lexer, false);
    }

    if (is_eol(lexer)) {
      lexer->result_symbol = BLOCK_END;
      return true;
    }
    // The delimiter wasn't alone on the line; fall through and treat the
    // whole line (including the character already consumed) as content.
  }

  if (!valid_symbols[BLOCK_CONTENT_LINE]) {
    return false;
  }

  while (!is_eol(lexer)) {
    lexer->advance(lexer, false);
  }
  lexer->mark_end(lexer);
  lexer->result_symbol = BLOCK_CONTENT_LINE;
  return true;
}
