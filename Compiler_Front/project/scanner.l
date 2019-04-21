%{
#define YYSTYPE char *
#include "y.tab.h"
int cur_line = 1;
void yyerror(const char *msg);
void unrecognized_char(char c);
void unterminate_string();
#define _DUPTEXT {yylval = strdup(yytext);}
%}

/* note \042 is '"' */

OPERATOR        ([-/+*()=,;!<>(){}])
INTEGER         ([0-9]+)
IDENTIFIER      ([_a-zA-Z][_a-zA-Z0-9]*)
WHITESPACE      ([ \t\r\a]+)
UNTERM_STRING   (\042[^\042\n]*)
STRING          (\042[^\042\n]*\042)

%%
"//" {
	char c = input();
	while(c!='\n')
		c=input();
}

"/*" {
	char c1 = input();
	char c2 = input();
	while(c1!='*' || c2 != '/'){
		c1 = c2;
		c2 = input();
	}
}

{OPERATOR}      { return yytext[0]; }
"int"           { return T_Int;     }
"void"          { return T_Void;    }
"print"         { return T_Print;   }
"return"        { return T_Return;  }

{INTEGER}       { _DUPTEXT; return T_IntConstant; }
{STRING}        { _DUPTEXT; return T_StringConstant; }
{IDENTIFIER}    { _DUPTEXT; return T_Identifier; }
{WHITESPACE}    { /* ignore every whitespace */ }
[\r\n]              { cur_line++; }
{UNTERM_STRING}     { unterminate_string(); }
.                   { unrecognized_char(yytext[0]); }
%%

int yywrap(void) { 
    return 1;
}

void unrecognized_char(char c) {
    char buf[32] = "Unrecognized character: ?";
    buf[24] = c;
    yyerror(buf);
}

void unterminate_string() {
    yyerror("Unterminate string constant");
}

void yyerror(const char *msg) {
    printf("Error at line %d:\n\t%s\n", cur_line, msg);
    exit(-1);
}