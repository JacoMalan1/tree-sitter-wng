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
    prog: $ => repeat($.func_decl),

    func_decl: $ => choice(
      prec(1, seq("fn", $.ident, "(", optional($.param_list), ")", $.func_body)),
      prec(1, seq("fn", $.ident, "(", optional($.param_list), ")", "->", $.type, $.func_body)),
    ),

    num_lit: $ => /[0-9]+/,
    str_lit: $ => /"([a-z]|[A-Z]|\s|!|_|\\)+"/,
    ident: $ => /([a-z]|[A-Z]|_)+/,

    lit: $ => choice(
      $.num_lit,
      prec(1, "true"),
      prec(1, "false"),
      $.str_lit,
      $.ident,
    ),

    call: $ => seq($.ident, "(", optional($.exprs), ")"),

    expr: $ => choice(
      prec(3, $.call),
      prec(1, $.lit),
      prec.left(1, seq($.expr, "+", $.expr)),
      prec.left(1, seq($.expr, "-", $.expr)),
      prec.left(2, seq($.expr, "/", $.expr)),
      prec.left(2, seq($.expr, "*", $.expr)),
    ),

    exprs: $ => choice(
      seq($.exprs, ",", $.expr),
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
      seq($.ident, "=", $.expr, ";"),
      seq("if", $.cond, $.block),
      seq("if", $.cond, $.block, "else", $.block),
      seq("for", "(", $.stat, $.cond, ";", $.stat, ")", $.block),
      seq("print", $.expr, ";"),
      seq("return", $.expr, ";"),
      seq("none", ";")
    ),

    stats: $ => choice(
      seq($.stats, $.stat),
      $.stat
    ),

    type: $ => choice(
      "Number",
      "String",
      "()"
    ),

    func_body: $ => prec(1, seq("{", optional($.stats), optional($.expr), "}")),
    param: $ => seq($.ident, ":", $.type),
    param_list: $ => choice(
      seq($.param_list, ",", $.param),
      $.param
    ),
  }
});
