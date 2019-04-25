// 第四个版本
%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "treeNode.h"
void yyerror(const char*);

%}

%union {
   struct treeNode* type_treenode;
}


%token <type_treenode> T_Int T_Void T_Return T_Print T_ReadInt T_While
%token <type_treenode> T_If T_Else T_Break T_Continue T_Le T_Ge T_Eq T_Ne
%token <type_treenode> T_And T_Or T_IntConstant T_StringConstant T_Identifier
%token <type_treenode> T_MINUS T_DIV T_PLUS T_STAR T_PER T_ASSIGNOP T_COMMA T_SEMI T_NOT
%token <type_treenode> T_LC T_RC T_LB T_RB T_LP T_RP

%type <type_treenode> S Program FuncDecl RetType FuncName Args _Args VarDecls VarDecl
%type <type_treenode> Stmts Stmt AssignStmt PrintStmt PActuals CallStmt CallExpr
%type <type_treenode> Actuals ReturnStmt IfStmt If TestExpr   BreakStmt
%type <type_treenode> StmtsBlock  Else  WhileStmt While ContinueStmt
%type <type_treenode> Expr ReadInt

%left   T_ASSIGNOP
%left   T_Or
%left   T_And
%left   T_Eq T_Ne
%left   T_LB T_RB T_Le T_Ge
%left   T_PLUS T_MINUS
%left   T_STAR T_DIV T_PER
%right  T_NOT

%%

S: Program {
if($1 == NULL)
    {	$$ = NULL;
        printf("not ok");
        root = NULL;
    }
    else 
    {	createTreeNode(&$$,1,"S",NULL);
    	$$->children[0] = $1;
        root = $$;
    }
    

}

Program:          
    /*empty*/               {$$ = NULL;}
|   Program FuncDecl         
                            {createTreeNode(&$$,1,"Program",NULL); $$->children[0] = $1;$$->children[1] = $2; }
;

//识别函数的产生式
FuncDecl:
    RetType FuncName T_LP Args T_RP T_LC VarDecls Stmts T_RC
                            {createTreeNode(&$$,1,"FuncDecl",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $4;$$->children[3] = $7;$$->children[4] = $8;}
;
//返回类型
RetType:
    T_Int                   {createTreeNode(&$$,1,"RetType",NULL);$$->children[0] = $1;}
|   T_Void                  {createTreeNode(&$$,1,"RetType",NULL);$$->children[0] = $1;}
;
//函数名称
FuncName:
    T_Identifier            {createTreeNode(&$$,1,"FuncName",NULL);$$->children[0] = $1;}
;
//参数定义
Args:
    /*empty*/               {createTreeNode(&$$,1,"Args",NULL);}
|   _Args                   {createTreeNode(&$$,1,"Args",NULL);$$->children[0] = $1;}
;

_Args:
    T_Int T_Identifier      {createTreeNode(&$$,1,"_Args",NULL);$$->children[0] = $1;$$->children[1] = $2;}
|   _Args T_COMMA T_Int T_Identifier    
                            {createTreeNode(&$$,1,"_Args",NULL);$$->children[0] = $1;$$->children[1] = $3;$$->children[2] = $4;}
;
//变量申明
VarDecls:
    /*empty*/               {createTreeNode(&$$,1,"VarDecls",NULL);}
|   VarDecls VarDecl T_SEMI    {createTreeNode(&$$,1,"VarDecls",NULL);$$->children[0] = $1;$$->children[1] = $2;}
;

VarDecl:
    T_Int T_Identifier          
                            { createTreeNode(&$$,1,"VarDecl",NULL);$$->children[0] = $1;$$->children[1] = $2; }
|   VarDecl T_COMMA T_Identifier    
                            { createTreeNode(&$$,1,"VarDecl",NULL);$$->children[0] = $1;$$->children[1] = $3; }
;
//操作语句
Stmts:
    /*empty*/               {createTreeNode(&$$,1,"Stmts",NULL);}
|   Stmts Stmt              {createTreeNode(&$$,1,"Stmts",NULL);$$->children[0] = $1;$$->children[1] = $2;}
;

Stmt:
    AssignStmt              {createTreeNode(&$$,1,"Stmt",NULL);$$->children[0] = $1; }
|   PrintStmt               {createTreeNode(&$$,1,"Stmt",NULL);$$->children[0] = $1; }
|   CallStmt                {createTreeNode(&$$,1,"Stmt",NULL);$$->children[0] = $1; }
|   ReturnStmt              {createTreeNode(&$$,1,"Stmt",NULL);$$->children[0] = $1; }
|   IfStmt                  {createTreeNode(&$$,1,"Stmt",NULL);$$->children[0] = $1; }
|   WhileStmt               {createTreeNode(&$$,1,"Stmt",NULL);$$->children[0] = $1; }
|   BreakStmt               {createTreeNode(&$$,1,"Stmt",NULL);$$->children[0] = $1; }
|   ContinueStmt            {createTreeNode(&$$,1,"Stmt",NULL);$$->children[0] = $1; }
;

AssignStmt:
    T_Identifier T_ASSIGNOP Expr  T_SEMI     
                            {createTreeNode(&$$,1,"Stmt",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3;}
;

PrintStmt:
    T_Print T_LP T_StringConstant PActuals T_RP T_SEMI
                            { createTreeNode(&$$,1,"PrintStmt",NULL);$$->children[0] = $1;$$->children[1] = $3;$$->children[2] = $4; }
;

PActuals:
    /* empty */             { createTreeNode(&$$,1,"PActuals",NULL); }
|   PActuals T_COMMA Expr       { createTreeNode(&$$,1,"PActuals",NULL);$$->children[0] = $1;$$->children[1] = $3; }
;

CallStmt:
    CallExpr T_SEMI            { createTreeNode(&$$,1,"CallStmt",NULL);$$->children[0] = $1; }
;

CallExpr:
    T_Identifier T_LP Actuals T_RP
                            { createTreeNode(&$$,1,"CallExpr",NULL);$$->children[0] = $1;$$->children[1] = $3; }
;

Actuals:
    /* empty */             { createTreeNode(&$$,1,"Actuals",NULL); }
|   Expr PActuals           { createTreeNode(&$$,1,"Actuals",NULL);$$->children[0] = $1;$$->children[1] = $2; }
;

ReturnStmt:
    T_Return Expr T_SEMI       { createTreeNode(&$$,1,"ReturnStmt",NULL);$$->children[0] = $1;$$->children[1] = $2; }
|   T_Return T_SEMI            { createTreeNode(&$$,1,"ReturnStmt",NULL);$$->children[0] = $1; }
;

//if条件判断语句
IfStmt:
    If TestExpr  StmtsBlock
                            { createTreeNode(&$$,1,"IfStmt",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   If TestExpr  StmtsBlock  Else StmtsBlock
                            { createTreeNode(&$$,1,"IfStmt",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3;$$->children[3] = $4;$$->children[4] = $5; }
;
If:
    T_If            { createTreeNode(&$$,1,"If",NULL);$$->children[0] = $1; }
;
TestExpr:
    T_LP Expr T_RP            { createTreeNode(&$$,1,"TestExpr",NULL);$$->children[0] = $2; }
;

StmtsBlock:
    T_LC Stmts T_RC           { createTreeNode(&$$,1,"StmtsBlock",NULL);$$->children[0] = $2; }
;

Else:
    T_Else          { createTreeNode(&$$,1,"Else",NULL);$$->children[0] = $1; }
;


//while循环语句 
WhileStmt:
    While TestExpr StmtsBlock
                            {createTreeNode(&$$,1,"WhileStmt",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3;}
;
While:
    T_While                 { createTreeNode(&$$,1,"While",NULL);$$->children[0] = $1; }
;

BreakStmt:
    T_Break T_SEMI             { createTreeNode(&$$,1,"BreakStmt",NULL);$$->children[0] = $1; }
;
ContinueStmt:
    T_Continue T_SEMI          { createTreeNode(&$$,1,"ContinueStmt",NULL);$$->children[0] = $1; }
;


Expr:
    Expr T_PLUS Expr            { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_MINUS Expr           { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_STAR Expr            { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_DIV Expr             { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_PER Expr             { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_RB Expr              { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_LB Expr              { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_Ge Expr              { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_Le Expr              { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_Eq Expr              { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_Ne Expr              { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_Or Expr              { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_And Expr             { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   T_NOT Expr                  { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2; }
|   T_IntConstant               { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1; }
|   T_Identifier                { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;  }
|   ReadInt                     { /* empty */ }
|   CallExpr                    { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $1;  }
|   T_LP Expr T_RP              { createTreeNode(&$$,1,"Expr",NULL);$$->children[0] = $2;  }
;

ReadInt:
    T_ReadInt T_LP T_StringConstant T_RP
                            { printf("\treadint %s\n", $3); }
;

%%

int main(){
    yyparse();
    printTreeNode(root, 0);
    printf("%s",root->name);
    printf("ok");
    return 1;
}