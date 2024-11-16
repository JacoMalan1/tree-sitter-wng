(func_decl "fn" @keyword.function)
"return" @keyword.return
"for" @keyword.repeat
"if" @keyword.conditional
"else" @keyword.conditional
"print" @keyword
";" @punctuation.delimiter

(stat "(" @punctuation.bracket)
(stat ")" @punctuation.bracket)
(expr "+" @operator)
(expr "-" @operator)
(expr "*" @operator)
(expr "/" @operator)
(expr (call (ident) @function.call))
(call "(" @punctuation.bracket)
(call ")" @punctuation.bracket)
(stat "=" @operator)

(stat (expr (call (ident) @function.call "(" @punctuation.bracket ")" @punctuation.bracket)))

(stat (ident) @variable "=" (expr) ";" @punctuation.delimiter)

(lit (ident) @variable)

(cond "==" @operator)
(cond "!=" @operator)
(cond "<" @operator)
(cond "<=" @operator)
(cond ">" @operator)
(cond ">=" @operator)
(cond "||" @operator)
(cond "&&" @operator)
(cond "(" @punctuation.bracket)
(cond ")" @punctuation.bracket)

(block "{" @punctuation.bracket)
(block "}" @punctuation.bracket)

(stat (ident) @variable)

(num_lit) @number
(str_lit) @string
(func_decl (ident) @function "(" @punctuation.bracket ")" @punctuation.bracket (func_body "{" @punctuation.bracket (stats) "}" @punctuation.bracket))
(func_decl "->" @punctuation)
(param ":" @punctuation)
(param_list "," @punctuation.delimiter)
(param_list (param (ident) @variable.parameter))

(type) @type
