%option nounput
%option noyywrap

%{
#include "token.h"
std::string string_content;
int start_line;
int retcon = 0;
int bracket_start;
%}

FOLLOW [[:space:]]*[A-Za-z][A-Za-z0-9_]*|[[:space:]]*\[\]
DBLLITERAL [0-9]+\.[0-9]*([E|e][\+]?[0-9]+)?
INTLITERAL [0-9]*|0[xX][a-fA-F0-9]+
IDENTIFIER [A-Za-z][A-Za-z0-9_]*

%x COMMENT
%x MULTILINECOMMENT
%x STRING
%x ARRAY

%%
void {return make_token(T_VOID, current_line);}
int {return make_token(T_INT, current_line);}
double {return make_token(T_DOUBLE, current_line);}
bool {return make_token(T_BOOL, current_line);}
string {return make_token(T_STRING, current_line);}
class {return make_token(T_CLASS, current_line);}
interface {return make_token(T_INTERFACE, current_line);}
null {return make_token(T_NULL, current_line);}
this {return make_token(T_THIS, current_line);}
extends {return make_token(T_EXTENDS, current_line);}
implements {return make_token(T_IMPLEMENTS, current_line);}
for {return make_token(T_FOR, current_line);}
while {return make_token(T_WHILE, current_line);}
if {return make_token(T_IF, current_line);}
else {return make_token(T_ELSE, current_line);}
return {return make_token(T_RETURN, current_line);}
break {return make_token(T_BREAK, current_line);}
New {return make_token(T_NEW, current_line);}
NewArray {return make_token(T_NEWARRAY, current_line);}
Print {return make_token(T_PRINT, current_line);}
ReadInteger {return make_token(T_READINTEGER, current_line);}
ReadLine {return make_token(T_READLINE, current_line);}

== { return make_token(T_EQ, current_line); }
\<= { return make_token(T_LE, current_line); }
>= { return make_token(T_GE, current_line); }
!= { return make_token(T_NEQ, current_line); }
&& { return make_token(T_AND, current_line); }
\|\| { return make_token(T_OR, current_line); }

\[ {BEGIN(ARRAY); start_line = current_line;}
<ARRAY>\n {current_line++;}
<ARRAY>[[:space:]] {}
<ARRAY>. {BEGIN(INITIAL); yyless(0); return make_token('[', start_line); }
<ARRAY>\] {BEGIN(INITIAL); return make_token(T_ARRAY, start_line);}

[\+\-\*\/\%\<\>\=\!\;\,\.\[\]\(\)\{\}\\] { return make_token(yytext[0], current_line); }

true {return make_token(T_BOOLLITERAL, current_line, yytext); }
false {return make_token(T_BOOLLITERAL, current_line, yytext); }
{IDENTIFIER} { string_content = yytext;
              if (string_content.length() > 31)
                  lex_error("Identifier %s too long", yytext);
              else
                  return make_token(T_IDENTIFIER, current_line, yytext);}
{IDENTIFIER}/{FOLLOW} { string_content = yytext;
                        if (string_content == "void")
                            return make_token(T_VOID, current_line);
                        if (string_content == "int")
                            return make_token(T_INT, current_line);
                        if (string_content == "true" || string_content == "false")
                            return make_token(T_BOOLLITERAL, current_line, yytext);
                        if (string_content == "double")
                            return make_token(T_DOUBLE, current_line);
                        if (string_content == "bool")
                            return make_token(T_BOOL, current_line);
                        if (string_content == "string")
                            return make_token(T_STRING, current_line, yytext);
                        if (string_content == "class")
                            return make_token(T_CLASS, current_line);
                        if (string_content == "interface")
                            return make_token(T_INTERFACE, current_line);
                        if (string_content == "null")
                            return make_token(T_NULL, current_line);
                        if (string_content == "this")
                            return make_token(T_THIS, current_line);
                        if (string_content == "extends")
                            return make_token(T_EXTENDS, current_line);
                        if (string_content == "implements")
                            return make_token(T_IMPLEMENTS, current_line);
                        if (string_content == "for")
                            return make_token(T_FOR, current_line);
                        if (string_content == "while")
                            return make_token(T_WHILE, current_line);
                        if (string_content == "if")
                            return make_token(T_IF, current_line);
                        if (string_content == "else")
                            return make_token(T_ELSE, current_line);
                        if (string_content == "return")
                            return make_token(T_RETURN, current_line);
                        if (string_content == "break")
                            return make_token(T_BREAK, current_line);
                        if (string_content == "New")
                            return make_token(T_NEW, current_line);
                        if (string_content == "NewArray")
                            return make_token(T_NEWARRAY, current_line);
                        if (string_content == "Print")
                            return make_token(T_PRINT, current_line);
                        if (string_content == "ReadInteger")
                            return make_token(T_READINTEGER, current_line);
                        if (string_content == "ReadLine")
                            return make_token(T_READLINE, current_line);
                        else
                          return make_token(T_TYPEIDENTIFIER, current_line, yytext);}
{DBLLITERAL} { return make_token(T_DBLLITERAL, current_line, yytext); }
{INTLITERAL} { return make_token(T_INTLITERAL, current_line, yytext); }

\/\/ {BEGIN(COMMENT);}
<COMMENT>\n {BEGIN(INITIAL); current_line += 1; }
<COMMENT>. {}

\/\* { BEGIN(MULTILINECOMMENT);
       start_line = current_line;}
<MULTILINECOMMENT>\*\/ { BEGIN(INITIAL); }
<MULTILINECOMMENT>\n {current_line++;}
<MULTILINECOMMENT>. {}
<MULTILINECOMMENT><<EOF>>  {lex_error("Unenclosed block comment on line %d", start_line);}

\" { BEGIN(STRING); }
<STRING>\n { lex_error("Missing \" at the end of string literal"); }
<STRING>\" { BEGIN(INITIAL);
             return make_token(T_STRINGLITERAL, current_line, string_content); }
<STRING>[^\n"]* { string_content = yytext; }

[\n] {current_line++;}
[[:space:]] {}

. {lex_error("Unrecognized character");}
%%
