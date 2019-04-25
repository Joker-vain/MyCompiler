%{
#include <stdio.h>
#include "treeNode.h"
#include "y.tab.h"
int cur_line = 1;
void yyerror(const char *msg);
void unrecognized_char(char c);
void unterminate_string();
#define _DUPTEXT {yylval = strdup(yytext);}
%}

/* note \042 is '"' */

OPERATOR            ([-/+*%=,;!<>(){}])
INTEGER             ([0-9]+)
IDENTIFIER          ([_a-zA-Z][_a-zA-Z0-9]*)
WHITESPACE          ([ \t\r\a]+)
UNTERM_STRING       (\042[^\042\n]*)
STRING              (\042[^\042\n]*\042)
INCLUDE_COMMENT     ("#"[^\n]*)

MINUS           "-"
DIV             "/"
PLUS            "+"
STAR            "*"
PER             "%"
ASSIGNOP        "="
COMMA           ","
SEMI            ";"
NOT             "!"
LC              "{"
RC              "}"
LB              "<"
RB              ">"
LP              "("
RP              ")"

%%
"//" {
	char c = input();
	while(c!='\n')
		c=input();
    cur_line++;
}

"/*" {
	char c1 = input();
	char c2 = input();
	while(c1!='*' || c2 != '/'){
        if(c1=='\n')
            cur_line++;
		c1 = c2;
		c2 = input();
	}
}

{INCLUDE_COMMENT}   {}
{SEMI} 			    { createTreeNode(&(yylval.type_treenode),0,";",NULL);return T_SEMI;}
{COMMA} 		    { createTreeNode(&(yylval.type_treenode),0,",",NULL);return T_COMMA;}
{ASSIGNOP} 		    { createTreeNode(&(yylval.type_treenode),0,"=",NULL);return T_ASSIGNOP;}
{PLUS} 			    { createTreeNode(&(yylval.type_treenode),0,"+",NULL);return T_PLUS;}
{MINUS} 		    { createTreeNode(&(yylval.type_treenode),0,"-",NULL);return T_MINUS;}
{DIV} 			    { createTreeNode(&(yylval.type_treenode),0,"/",NULL);return T_DIV;}
{STAR} 			    { createTreeNode(&(yylval.type_treenode),0,"*",NULL);return T_STAR;}
{LP} 			    { createTreeNode(&(yylval.type_treenode),0,"(",NULL);return T_LP;}
{RP} 			    { createTreeNode(&(yylval.type_treenode),0,")",NULL);return T_RP;}
{PER}               { createTreeNode(&(yylval.type_treenode),0,"%",NULL);return T_PER;}
{NOT}               { createTreeNode(&(yylval.type_treenode),0,"!",NULL);return T_NOT;}
{LC}                { createTreeNode(&(yylval.type_treenode),0,"{",NULL);return T_LC;}
{RC}                { createTreeNode(&(yylval.type_treenode),0,"}",NULL);return T_RC;}
{LB}                { createTreeNode(&(yylval.type_treenode),0,"{",NULL);return T_LB;}
{RB}                { createTreeNode(&(yylval.type_treenode),0,"}",NULL);return T_RB;}
"int"               { createTreeNode(&(yylval.type_treenode),0,"int",NULL);return T_Int;     }
"void"              { createTreeNode(&(yylval.type_treenode),0,"void",NULL);return T_Void;    }
"print"             { createTreeNode(&(yylval.type_treenode),0,"print",NULL);return T_Print;   }
"return"            { createTreeNode(&(yylval.type_treenode),0,"return",NULL);return T_Return;  }
"readint"           { createTreeNode(&(yylval.type_treenode),0,"readint",NULL);return T_ReadInt; }
"while"             { createTreeNode(&(yylval.type_treenode),0,"while",NULL);return T_While; }
"if"                { createTreeNode(&(yylval.type_treenode),0,"if",NULL);return T_If; }
"else"              { createTreeNode(&(yylval.type_treenode),0,"else",NULL);return T_Else; }
"break"             { createTreeNode(&(yylval.type_treenode),0,"break",NULL);return T_Break; }
"continue"          { createTreeNode(&(yylval.type_treenode),0,"continue",NULL);return T_Continue; }
"<="                { createTreeNode(&(yylval.type_treenode),0,"<=",NULL);return T_Le; }
">="                { createTreeNode(&(yylval.type_treenode),0,">=",NULL);return T_Ge; }
"=="                { createTreeNode(&(yylval.type_treenode),0,"==",NULL);return T_Eq; }
"!="                { createTreeNode(&(yylval.type_treenode),0,"!=",NULL);return T_Ne; }
"&&"                { createTreeNode(&(yylval.type_treenode),0,"&&",NULL);return T_And; }
"||"                { createTreeNode(&(yylval.type_treenode),0,"||",NULL);return T_Or; }
{INTEGER}           { createTreeNode(&(yylval.type_treenode),0,"INTEGER",NULL);; return T_IntConstant; }
{STRING}            { createTreeNode(&(yylval.type_treenode),0,"STRING",NULL);; return T_StringConstant; }
{IDENTIFIER}        { createTreeNode(&(yylval.type_treenode),0,"IDENTIFIER",NULL);; return T_Identifier; }
{WHITESPACE}        { /* ignore every whitespace */ }
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