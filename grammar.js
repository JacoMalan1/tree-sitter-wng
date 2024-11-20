/**
 * @file The WING tree-sitter parser.
 * @author Jaco Malan <jacom@codelog.co.za>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "wng",

  word: $ => $.ident,

  rules: {
    prog: $ => optional($._items),

    _items: $ => choice(
      seq($._items, $.item),
      $.item
    ),

    item: $ => choice(
      prec.left(1, $.func_decl),
      $.extern,
      $.struct_decl
    ),

    func_decl: $ => choice(
      seq("fn", $.ident, "(", optional($.param_list), ")", $.func_body),
      seq("fn", $.ident, "(", optional($.param_list), ")", $._return_type, $.func_body),
    ),

    num_lit: $ => /(-[1-9][0-9]*|[0-9]+)/,
    float_lit: $ => /-?[0-9]+\.[0-9]+/,
    str_lit: $ => /"([a-z]|[A-Z]|\s|!|_|\\)*"/,
    ident: $ => /([a-z]|[A-Z]|_)+/,

    lit: $ => choice(
      $.num_lit,
      $.float_lit,
      prec(1, "true"),
      prec(1, "false"),
      $.str_lit,
      $.ident,
    ),

    call: $ => seq($.ident, "(", optional($._exprs), ")"),

    expr: $ => choice(
      prec(3, $.call),
      prec(1, $.lit),
      prec.left(1, seq($.expr, "+", $.expr)),
      prec.left(1, seq($.expr, "-", $.expr)),
      prec.left(2, seq($.expr, "/", $.expr)),
      prec.left(2, seq($.expr, "*", $.expr)),
    ),

    _exprs: $ => choice(
      seq($._exprs, ",", $.expr),
      $.expr
    ),

    cond: $ => choice(
      seq($.expr, "==", $.expr),
      seq($.expr, "!=", $.expr),
      seq($.expr, "<", $.expr),
      seq($.expr, "<=", $.expr),
      seq($.expr, ">", $.expr),
      seq($.expr, ">=", $.expr),
      seq("(", $.cond, ")", "||", "(", $.cond, ")"),
      seq("(", $.cond, ")", "&&", "(", $.cond, ")"),
    ),

    block: $ => seq("{", repeat($.stat), "}"),

    stat: $ => choice(
      seq("let", $.ident, optional($._type_specifier), "=", $.expr, ";"),
      seq($.ident, "=", $.expr, ";"),
      seq("if", $.cond, $.block),
      seq("if", $.cond, $.block, "else", $.block),
      seq("for", "(", $.stat, $.cond, ";", $.stat, ")", $.block),
      seq("while", "(", $.cond, ")", $.block),
      seq("print", $.expr, ";"),
      seq("return", $.expr, ";"),
      seq("none", ";")
    ),

    stats: $ => choice(
      seq($.stats, $.stat),
      $.stat
    ),

    type: $ => choice(
      "Int",
      "String",
      "Float",
      "()"
    ),

    extern: $ => choice(
      seq("extern", "fn", $.ident, "(", optional($.param_list), ")", optional($._return_type), ";"),
    ),

    _return_type: $ => seq("->", $.type),

    func_body: $ => prec(1, seq("{", optional($.stats), optional($.expr), "}")),
    _type_specifier: $ => seq(":", $.type),
    param: $ => seq($.ident, $._type_specifier),
    param_list: $ => choice(
      seq($.param_list, ",", $.param),
      $.param
    ),

    field: $ => seq($.ident, $._type_specifier),
    fields: $ => choice(
      seq($.fields, ",", $.field),
      $.field
    ),
    struct_decl: $ => seq("struct", $.ident, "{", optional($.fields), "}"),
  }
});
