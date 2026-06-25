module.exports = grammar({
  name: "rootfs",

  extras: ($) => [/[ \t\r\n]/, $.comment],

  externals: ($) => [$.block_content_line, $._block_end],

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) => choice($.imports_stmt, $.assignment, $.block_def),

    comment: ($) => /#[^\n]*/,

    // imports = [ path... ]
    imports_stmt: ($) =>
      seq("imports", "=", "[", repeat($.import_path), "]"),

    import_path: ($) =>
      /[a-zA-Z0-9_.][a-zA-Z0-9_.\/-]*(?:\/\*|\*)?(?:[ \t]*![ \t]*[a-zA-Z0-9_.,-]+)?/,

    // name = scalar | [ list ]
    assignment: ($) => seq(field("name", $.identifier), "=", $._value),

    _value: ($) => choice($.scalar, $.list),

    scalar: ($) => choice($.string, $.bare_string),

    string: ($) => /"[^"\\]*(?:\\.[^"\\]*)*"/,

    bare_string: ($) => /(?:\$\{[^}\s]*\}|[^\s\[\]={}#"])+/,

    list: ($) => seq("[", repeat($.bare_string), "]"),

    // name = { ...lines... } | name = $( ...shell lines... )
    block_def: ($) =>
      seq(
        field("name", $.identifier),
        "=",
        choice("{", "$("),
        repeat($.block_content_line),
        $._block_end,
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
  },
});
