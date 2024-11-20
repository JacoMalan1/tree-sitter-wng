(str_lit) @string

(func_decl "fn" @keyword.function)
(extern "fn" @keyword.function)
(struct_decl "struct" @keyword)
"return" @keyword.return
"for" @keyword.repeat
"while" @keyword.repeat
"if" @keyword.conditional
"else" @keyword.conditional
"print" @keyword
";" @punctuation.delimiter
"let" @keyword

(extern "extern" @keyword)

(stat "(" @punctuation.bracket)
(stat ")" @punctuation.bracket)
(struct_decl "{" @punctuation.bracket)
(struct_decl "}" @punctuation.bracket)
(struct_decl "struct" (ident) @type)
(fields "," @punctuation.delimiter)
(field (ident) @variable)
(field (type) @type)
(field ":" @punctuation)
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
(float_lit) @number
(func_decl (ident) @function "(" @punctuation.bracket ")" @punctuation.bracket (func_body "{" @punctuation.bracket (stats) "}" @punctuation.bracket))
(func_decl (func_body "{" @punctuation.bracket))
(func_decl (func_body "}" @punctuation.bracket))
(func_decl "(" @punctuation.bracket)
(func_decl ")" @punctuation.bracket)
(func_decl (ident) @function)
(func_decl "->" @punctuation)
(extern "->" @punctuation)
(extern (ident) @function)
(extern "(" @punctuation.bracket)
(extern ")" @punctuation.bracket)
(extern "->" @punctuation)
(param ":" @punctuation)
(param_list "," @punctuation.delimiter)
(param_list (param (ident) @variable.parameter))

(type) @type
