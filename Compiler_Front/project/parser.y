//第三个版本
%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char*);
#define YYSTYPE char *

int ii = 0, itop = -1, istack[100];
int ww = 0, wtop = -1, wstack[100];

#define _BEG_IF     {istack[++itop] = ++ii;}
#define _END_IF     {itop--;}
#define _i          (istack[itop])      //指向栈顶

#define _BEG_WHILE  {wstack[++wtop] = ++ww;}
#define _END_WHILE  {wtop--;}
#define _w          (wstack[wtop])


%}

%token T_Int T_Void T_Return T_Print T_ReadInt T_While
%token T_If T_Else T_Break T_Continue T_Le T_Ge T_Eq T_Ne
%token T_And T_Or T_IntConstant T_StringConstant T_Identifier

%left '='
%left T_Or
%left T_And
%left T_Eq T_Ne
%left '<' '>' T_Le T_Ge
%left '+' '-'
%left '*' '/' '%'
%left '!'

%%

Program:
    /*empty*/                {/*empty*/}
|   Program FuncDecl         {/*empty*/}
;

//识别函数的产生式
FuncDecl:
    RetType FuncName '(' Args ')' '{' VarDecls Stmts '}'
                            {printf("ENDFUNC\n\n");}
;
//返回类型
RetType:
    T_Int                   {}
|   T_Void                  {}
;
//函数名称
FuncName:
    T_Identifier            {printf("FUNC @%s:\n",$1);}
;
//参数定义
Args:
    /*empty*/               {/*empty*/}
|   _Args                   {printf("\n\n");}
;

_Args:
    T_Int T_Identifier      {printf("arg %s", $2);}
|   _Args ',' T_Int T_Identifier    
                            {printf(", %s", $4); }
;
//变量申明
VarDecls:
    /*empty*/               {}
|   VarDecls VarDecl ';'    {printf("\n\n");}
;

VarDecl:
    T_Int T_Identifier          
                            { printf("var %s", $2); }
|   VarDecl ',' T_Identifier    
                            { printf(", %s", $3); }
;
//操作语句
Stmts:
    /*empty*/               {}
|   Stmts Stmt              {}
;

Stmt:
    AssignStmt              { /* empty */ }
|   PrintStmt               { /* empty */ }
|   CallStmt                { /* empty */ }
|   ReturnStmt              { /* empty */ }
|   IfStmt                  { /* empty */ }
|   WhileStmt               { /* empty */ }
|   BreakStmt               { /* empty */ }
|   ContinueStmt            { /* empty */ }
;

AssignStmt:
    T_Identifier '=' Expr  ';'     
                            {printf("pop %s\n\n",$1);}
;

PrintStmt:
    T_Print '(' T_StringConstant PActuals ')' ';'
                            { printf("print %s\n\n", $3); }
;

PActuals:
    /* empty */             { /* empty */ }
|   PActuals ',' Expr       { /* empty */ }
;

CallStmt:
    CallExpr ';'            { printf("pop CallExpr\n\n"); }
;

CallExpr:
    T_Identifier '(' Actuals ')'
                            { printf("$%s\n", $1); }
;

Actuals:
    /* empty */             { /* empty */ }
|   Expr PActuals           { /* empty */ }
;

ReturnStmt:
    T_Return Expr ';'       { printf("ret ~\n\n"); }
|   T_Return ';'            { printf("ret\n\n"); }
;

//if条件判断语句
IfStmt:
    If TestExpr Then StmtsBlock EndThen EndIf
                            { /* empty */ }
|   If TestExpr Then StmtsBlock EndThen Else StmtsBlock EndIf
                            { /* empty */ }
;
If:
    T_If            { _BEG_IF; printf("_begIf_%d:\n", _i); }
;
TestExpr:
    '(' Expr ')'            { /* empty */ }
;
Then:
    /* empty */     { printf("\tjz _elIf_%d\n", _i); }
;
StmtsBlock:
    '{' Stmts '}'           { /* empty */ }
;
EndThen:
    /* empty */     { printf("\tjmp _endIf_%d\n_elIf_%d:\n", _i, _i); }
;
Else:
    T_Else          { /* empty */ }
;
EndIf:
    /* empty */     { printf("_endIf_%d:\n\n", _i); _END_IF; }
;

//while循环语句 
WhileStmt:
    While TestExpr Do StmtsBlock EndWhile
                            {}
;
While:
    T_While                 { _BEG_WHILE; printf("_begWhile_%d:\n", _w); }
;
Do:
    /* empty */             { printf("\tjz _endWhile_%d\n", _w); }
;
EndWhile:
    /* empty */             { printf("\tjmp _begWhile_%d\n_endWhile_%d:\n\n", 
                                _w, _w); _END_WHILE; }
;
BreakStmt:
    T_Break ';'             { printf("\tjmp _endWhile_%d\n", _w); }
;
ContinueStmt:
    T_Continue ';'          { printf("\tjmp _begWhile_%d\n", _w); }
;


Expr:
    Expr '+' Expr           { printf("\tadd\n"); }
|   Expr '-' Expr           { printf("\tsub\n"); }
|   Expr '*' Expr           { printf("\tmul\n"); }
|   Expr '/' Expr           { printf("\tdiv\n"); }
|   Expr '%' Expr           { printf("\tmod\n"); }
|   Expr '>' Expr           { printf("\tcmpgt\n"); }
|   Expr '<' Expr           { printf("\tcmplt\n"); }
|   Expr T_Ge Expr          { printf("\tcmpge\n"); }
|   Expr T_Le Expr          { printf("\tcmple\n"); }
|   Expr T_Eq Expr          { printf("\tcmpeq\n"); }
|   Expr T_Ne Expr          { printf("\tcmpne\n"); }
|   Expr T_Or Expr          { printf("\tor\n"); }
|   Expr T_And Expr         { printf("\tand\n"); }
|   '-' Expr %prec '!'      { printf("\tneg\n"); }
|   '!' Expr                { printf("\tnot\n"); }
|   T_IntConstant           { printf("\tpush %s\n", $1); }
|   T_Identifier            { printf("\tpush %s\n", $1); }
|   ReadInt                 { /* empty */ }
|   CallExpr                { /* empty */ }
|   '(' Expr ')'            { /* empty */ }
;

ReadInt:
    T_ReadInt '(' T_StringConstant ')'
                            { printf("\treadint %s\n", $3); }
;

%%

int main(){
    return yyparse();
}