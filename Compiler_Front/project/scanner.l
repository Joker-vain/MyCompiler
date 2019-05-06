%{
#include <stdio.h>
#include "treeNode.h"
#include "y.tab.h"
int cur_line = 1;
int yycolumn = 1;
void yyerror(const char *msg);
void unrecognized_char(char c);
void unterminate_string();
#define _DUPTEXT {yylval = strdup(yytext);}
#define YY_USER_ACTION \
yylloc.first_line = cur_line;
%}

/* note \042 is '"' */

OPERATOR            ([-/+*%=,;!<>(){}])
INTEGER             ([0-9]+)
IDENTIFIER          ([_a-zA-Z][_a-zA-Z0-9]*)
WHITESPACE          ([ \t\r\a]+)
UNTERM_STRING       (\042[^\042\n]*)
STRING              (\042[^\042\n]*\042)
INCLUDE_COMMENT     ("#"[^\n]*)
FLOAT               ([0-9]*\.[0-9]+)|([0-9]+\.)

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
LM              "["
RM              "]"
selfPLUS        "++"
selfMINUS       "--"

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
{SEMI} 			    { createTreeNode(&(yylval.type_treenode),0,cur_line,";",NULL);yycolumn = yycolumn+yyleng;return T_SEMI;}
{COMMA} 		    { createTreeNode(&(yylval.type_treenode),0,cur_line,",",NULL);yycolumn = yycolumn+yyleng;return T_COMMA;}
{ASSIGNOP} 		    { createTreeNode(&(yylval.type_treenode),0,cur_line,"=",NULL);yycolumn = yycolumn+yyleng;return T_ASSIGNOP;}
{PLUS} 			    { createTreeNode(&(yylval.type_treenode),0,cur_line,"+",NULL);yycolumn = yycolumn+yyleng;return T_PLUS;}
{MINUS} 		    { createTreeNode(&(yylval.type_treenode),0,cur_line,"-",NULL);yycolumn = yycolumn+yyleng;return T_MINUS;}
{DIV} 			    { createTreeNode(&(yylval.type_treenode),0,cur_line,"/",NULL);yycolumn = yycolumn+yyleng;return T_DIV;}
{STAR} 			    { createTreeNode(&(yylval.type_treenode),0,cur_line,"*",NULL);yycolumn = yycolumn+yyleng;return T_STAR;}
{LP} 			    { createTreeNode(&(yylval.type_treenode),0,cur_line,"(",NULL);yycolumn = yycolumn+yyleng;return T_LP;}
{RP} 			    { createTreeNode(&(yylval.type_treenode),0,cur_line,")",NULL);yycolumn = yycolumn+yyleng;return T_RP;}
{PER}               { createTreeNode(&(yylval.type_treenode),0,cur_line,"%",NULL);yycolumn = yycolumn+yyleng;return T_PER;}
{NOT}               { createTreeNode(&(yylval.type_treenode),0,cur_line,"!",NULL);yycolumn = yycolumn+yyleng;return T_NOT;}
{LC}                { createTreeNode(&(yylval.type_treenode),0,cur_line,"{",NULL);yycolumn = yycolumn+yyleng;return T_LC;}
{RC}                { createTreeNode(&(yylval.type_treenode),0,cur_line,"}",NULL);yycolumn = yycolumn+yyleng;return T_RC;}
{LB}                { createTreeNode(&(yylval.type_treenode),0,cur_line,"<",NULL);yycolumn = yycolumn+yyleng;return T_LB;}
{RB}                { createTreeNode(&(yylval.type_treenode),0,cur_line,">",NULL);yycolumn = yycolumn+yyleng;return T_RB;}
{LM}                { createTreeNode(&(yylval.type_treenode),0,cur_line,"[",NULL);yycolumn = yycolumn+yyleng;return T_LM;}
{RM}                { createTreeNode(&(yylval.type_treenode),0,cur_line,"]",NULL);yycolumn = yycolumn+yyleng;return T_RM;}

"int"               { createTreeNode(&(yylval.type_treenode),0,cur_line,"type",yytext);yycolumn = yycolumn+yyleng;return T_Type;     }
"float"             { createTreeNode(&(yylval.type_treenode),0,cur_line,"type",yytext);yycolumn = yycolumn+yyleng;return T_Type;}
"void"              { createTreeNode(&(yylval.type_treenode),0,cur_line,"type",yytext);yycolumn = yycolumn+yyleng;return T_Type;    }
"print"             { createTreeNode(&(yylval.type_treenode),0,cur_line,"print",NULL);yycolumn = yycolumn+yyleng;return T_Print;   }
"return"            { createTreeNode(&(yylval.type_treenode),0,cur_line,"return",NULL);yycolumn = yycolumn+yyleng;return T_Return;  }
"readint"           { createTreeNode(&(yylval.type_treenode),0,cur_line,"readint",NULL);yycolumn = yycolumn+yyleng;return T_ReadInt; }
"while"             { createTreeNode(&(yylval.type_treenode),0,cur_line,"while",NULL);yycolumn = yycolumn+yyleng;return T_While; }
"for"               { createTreeNode(&(yylval.type_treenode),0,cur_line,"for",NULL);yycolumn = yycolumn+yyleng;return T_For;}
"if"                { createTreeNode(&(yylval.type_treenode),0,cur_line,"if",NULL);yycolumn = yycolumn+yyleng;return T_If; }
"else"              { createTreeNode(&(yylval.type_treenode),0,cur_line,"else",NULL);yycolumn = yycolumn+yyleng;return T_Else; }
"break"             { createTreeNode(&(yylval.type_treenode),0,cur_line,"break",NULL);yycolumn = yycolumn+yyleng;return T_Break; }
"continue"          { createTreeNode(&(yylval.type_treenode),0,cur_line,"continue",NULL);yycolumn = yycolumn+yyleng;return T_Continue; }
"<="                { createTreeNode(&(yylval.type_treenode),0,cur_line,"<=",NULL);yycolumn = yycolumn+yyleng;return T_Le; }
">="                { createTreeNode(&(yylval.type_treenode),0,cur_line,">=",NULL);yycolumn = yycolumn+yyleng;return T_Ge; }
"=="                { createTreeNode(&(yylval.type_treenode),0,cur_line,"==",NULL);yycolumn = yycolumn+yyleng;return T_Eq; }
"!="                { createTreeNode(&(yylval.type_treenode),0,cur_line,"!=",NULL);yycolumn = yycolumn+yyleng;return T_Ne; }
"&&"                { createTreeNode(&(yylval.type_treenode),0,cur_line,"&&",NULL);yycolumn = yycolumn+yyleng;return T_And; }
"||"                { createTreeNode(&(yylval.type_treenode),0,cur_line,"||",NULL);yycolumn = yycolumn+yyleng;return T_Or; }
"++"                { createTreeNode(&(yylval.type_treenode),0,cur_line,"++",NULL);yycolumn = yycolumn+yyleng;return T_SelfPLUS;}
"--"                { createTreeNode(&(yylval.type_treenode),0,cur_line,"--",NULL);yycolumn = yycolumn+yyleng;return T_SelfMINUS;}
{INTEGER}           { createTreeNode(&(yylval.type_treenode),0,cur_line,"INTEGER",yytext); yycolumn = yycolumn+yyleng;return T_IntConstant; }
{FLOAT}             {createTreeNode(&(yylval.type_treenode),0,cur_line,"FLOAT",yytext); yycolumn = yycolumn+yyleng;return T_FloatConstant;}
{STRING}            { createTreeNode(&(yylval.type_treenode),0,cur_line,"STRING",yytext); yycolumn = yycolumn+yyleng;return T_StringConstant; }
{IDENTIFIER}        { createTreeNode(&(yylval.type_treenode),0,cur_line,"IDENTIFIER",yytext); yycolumn = yycolumn+yyleng;return T_Identifier; }
{WHITESPACE}        { /* ignore every whitespace */ }
[\r\n]              { cur_line++;yycolumn = 0; }

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
    printf("\nError at line %d:  %s\n\t %s\n", cur_line, yytext,msg);
}