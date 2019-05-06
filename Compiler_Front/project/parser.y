// 第五个版本
%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "treeNode.h"
#define YYDEBUG 1
void yyerror(const char*);
int yyerrornum = 0;
extern int cur_line;
%}

%union {
   struct treeNode* type_treenode;
}

%token <type_treenode> T_Type T_Return T_Print T_ReadInt T_While T_SelfPLUS T_SelfMINUS
%token <type_treenode> T_If T_Else T_Break T_Continue T_Le T_Ge T_Eq T_Ne T_LM T_RM
%token <type_treenode> T_And T_Or T_IntConstant T_StringConstant T_Identifier
%token <type_treenode> T_MINUS T_DIV T_PLUS T_STAR T_PER T_ASSIGNOP T_COMMA T_SEMI T_NOT
%token <type_treenode> T_LC T_RC T_LB T_RB T_LP T_RP T_FloatConstant T_For

%type <type_treenode> S Program FuncDecl RetType FuncName Args _Args VarDecls VarDecl
%type <type_treenode> Stmts Stmt AssignStmt PrintStmt PActuals CallStmt CallExpr
%type <type_treenode> Actuals ReturnStmt IfStmt If TestExpr   BreakStmt
%type <type_treenode> StmtsBlock Else  WhileStmt While ContinueStmt ArrayStmt
%type <type_treenode> Expr ReadInt BlockContent ForStmt For ForExpr AssignStmts

%left   T_ASSIGNOP 
%left   T_Or
%left   T_And
%left   T_Eq T_Ne
%left   T_LB T_RB T_Le T_Ge
%left   T_PLUS T_MINUS
%left   T_STAR T_DIV T_PER
%right  T_NOT

%left   T_SelfMINUS T_SelfPLUS

%%

S: Program {
if($1 == NULL)
    {	$$ = NULL;
        printf("not ok");
        root = NULL;
    }
    else 
    {	createTreeNode(&$$,1,@$.first_line,"S",NULL);
    	$$->children[0] = $1;
        root = $$;
    }
}
;

Program:          
    /*empty*/               {$$ = NULL;}
|   Program FuncDecl         
                            {createTreeNode(&$$,1,@$.first_line,"Program",NULL); $$->children[0] = $1;$$->children[1] = $2; }
;

//识别函数的产生式
FuncDecl:
    RetType FuncName T_LP Args T_RP T_LC BlockContent T_RC
                            {createTreeNode(&$$,1,@$.first_line,"FuncDecl",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $4;$$->children[3] = $7;}
|   RetType FuncName error  Args T_RP T_LC BlockContent T_RC 
                            {yyerrok;yyerrornum = yyerrornum + 1;printf("Error type B at line %d: Expected type '('\n",@$.first_line);createTreeNode(&$$,1,@$.first_line,"FuncDecl",NULL);$$->children[0] = $1;$$->children[1] = $2;}
|   RetType FuncName T_LP Args error  T_LC BlockContent T_RC 
                            {yyerrok;yyerrornum = yyerrornum + 1;printf("Error type B at Line %d: Expected type ')'\n",@$.first_line);createTreeNode(&$$,1,@$.first_line,"FuncDecl",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $4;}
|   RetType FuncName T_LP Args T_RP  error  BlockContent T_RC 
                            {yyerrok;yyerrornum = yyerrornum + 1;printf("Error type B at Line %d: Expected type '{'\n",@$.first_line);createTreeNode(&$$,1,@$.first_line,"FuncDecl",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $4;}   
|   RetType FuncName T_LP Args T_RP T_LC BlockContent error 
                            {yyerrok;yyerrornum = yyerrornum + 1;printf("Error type B at Line %d: Expected type '}'\n",@$.first_line);createTreeNode(&$$,1,@$.first_line,"FuncDecl",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $4;$$->children[3] = $7;}                                                           
;

//返回类型
RetType:
    T_Type                   {createTreeNode(&$$,1,@$.first_line,"RetType",NULL);$$->children[0] = $1;}
;
//函数名称
FuncName:
    T_Identifier            {createTreeNode(&$$,1,@$.first_line,"FuncName",NULL);$$->children[0] = $1;}
;

//参数定义
Args:
    /*empty*/               {createTreeNode(&$$,1,@$.first_line,"Args",NULL);}
|   _Args                   {createTreeNode(&$$,1,@$.first_line,"Args",NULL);$$->children[0] = $1;}
;

_Args:
    T_Type T_Identifier      {createTreeNode(&$$,1,@$.first_line,"_Args",NULL);$$->children[0] = $1;$$->children[1] = $2;}
|   _Args T_COMMA T_Type T_Identifier    
                            {createTreeNode(&$$,1,@$.first_line,"_Args",NULL);$$->children[0] = $1;$$->children[1] = $3;$$->children[2] = $4;}
;

//函数主体
BlockContent:
    /*empty*/               {createTreeNode(&$$,1,@$.first_line,"BlockContent",NULL);}
|   VarDecls  BlockContent     {createTreeNode(&$$,1,@$.first_line,"BlockContent",NULL);$$->children[0] = $1;$$->children[1] = $2;}
|    Stmts BlockContent        {createTreeNode(&$$,1,@$.first_line,"BlockContent",NULL);$$->children[0] = $1;$$->children[1] = $2;}
;

//变量申明
VarDecls:
    VarDecl T_SEMI  {createTreeNode(&$$,1,@$.first_line,"VarDecls",NULL);$$->children[0] = $1;$$->children[1] = $2;}
|   VarDecl error T_SEMI  {createTreeNode(&$$,1,@$.first_line,"VarDecls",NULL);$$->children[0] = $1;yyerrornum = yyerrornum + 1;printf("Error type B at Line %d: Expected type ';'\n",@$.first_line);yyerrok;}    
;

VarDecl:
    T_Type T_Identifier          
                            { createTreeNode(&$$,1,@$.first_line,"VarDecl",NULL);$$->children[0] = $1;$$->children[1] = $2; }
|   T_Type  ArrayStmt       
                            { createTreeNode(&$$,1,@$.first_line,"VarDecl",NULL);$$->children[0] = $1;$$->children[1] = $2;}    
|   VarDecl T_COMMA T_Identifier    
                            { createTreeNode(&$$,1,@$.first_line,"VarDecl",NULL);$$->children[0] = $1;$$->children[1] = $3; }
;

//操作语句
Stmts:
    Stmt                    {createTreeNode(&$$,1,@$.first_line,"Stmts",NULL);$$->children[0] = $1; }
;

Stmt:
    AssignStmts              {createTreeNode(&$$,1,@$.first_line,"Stmt",NULL);$$->children[0] = $1; }
|   PrintStmt               {createTreeNode(&$$,1,@$.first_line,"Stmt",NULL);$$->children[0] = $1; }
|   CallStmt                {createTreeNode(&$$,1,@$.first_line,"Stmt",NULL);$$->children[0] = $1; }
|   ReturnStmt              {createTreeNode(&$$,1,@$.first_line,"Stmt",NULL);$$->children[0] = $1; }
|   IfStmt                  {createTreeNode(&$$,1,@$.first_line,"Stmt",NULL);$$->children[0] = $1; }
|   WhileStmt               {createTreeNode(&$$,1,@$.first_line,"Stmt",NULL);$$->children[0] = $1; }
|   BreakStmt               {createTreeNode(&$$,1,@$.first_line,"Stmt",NULL);$$->children[0] = $1; }
|   ContinueStmt            {createTreeNode(&$$,1,@$.first_line,"Stmt",NULL);$$->children[0] = $1; }
|   ForStmt                 {createTreeNode(&$$,1,@$.first_line,"Stmt",NULL);$$->children[0] = $1;}

;

AssignStmts:
    AssignStmt  T_SEMI     
                            {createTreeNode(&$$,1,@$.first_line,"AssignStmts",NULL);$$->children[0] = $1;}
;

AssignStmt:
    T_Identifier T_ASSIGNOP Expr
                            {createTreeNode(&$$,1,@$.first_line,"AssignStmt",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3;}
|   ArrayStmt T_ASSIGNOP Expr
                            {createTreeNode(&$$,1,@$.first_line,"AssignStmt",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3;}
;                    

PrintStmt:
    T_Print T_LP T_StringConstant PActuals T_RP T_SEMI
                            { createTreeNode(&$$,1,@$.first_line,"PrintStmt",NULL);$$->children[0] = $1;$$->children[1] = $3;$$->children[2] = $4; }
;

PActuals:
    /* empty */             { createTreeNode(&$$,1,@$.first_line,"PActuals",NULL); }
|   PActuals T_COMMA Expr       { createTreeNode(&$$,1,@$.first_line,"PActuals",NULL);$$->children[0] = $1;$$->children[1] = $3; }
;

CallStmt:
    CallExpr T_SEMI            { createTreeNode(&$$,1,@$.first_line,"CallStmt",NULL);$$->children[0] = $1; }
;

CallExpr:
    T_Identifier T_LP Actuals T_RP
                            { createTreeNode(&$$,1,@$.first_line,"CallExpr",NULL);$$->children[0] = $1;$$->children[1] = $3; }
;

Actuals:
    /* empty */             { createTreeNode(&$$,1,@$.first_line,"Actuals",NULL); }
|   Expr PActuals           { createTreeNode(&$$,1,@$.first_line,"Actuals",NULL);$$->children[0] = $1;$$->children[1] = $2; }
;

ReturnStmt:
    T_Return Expr T_SEMI       { createTreeNode(&$$,1,@$.first_line,"ReturnStmt",NULL);$$->children[0] = $1;$$->children[1] = $2; }
|   T_Return T_SEMI            { createTreeNode(&$$,1,@$.first_line,"ReturnStmt",NULL);$$->children[0] = $1; }
;

//if条件判断语句
IfStmt:
    If TestExpr  StmtsBlock
                            { createTreeNode(&$$,1,@$.first_line,"IfStmt",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   If TestExpr  StmtsBlock  Else StmtsBlock
                            { createTreeNode(&$$,1,@$.first_line,"IfStmt",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3;$$->children[3] = $4;$$->children[4] = $5; }
;
If:
    T_If            { createTreeNode(&$$,1,@$.first_line,"If",NULL);$$->children[0] = $1; }
;
TestExpr:
    T_LP Expr T_RP            { createTreeNode(&$$,1,@$.first_line,"TestExpr",NULL);$$->children[0] = $2; }
;

StmtsBlock:
    T_LC BlockContent T_RC           { createTreeNode(&$$,1,@$.first_line,"StmtsBlock",NULL);$$->children[0] = $2; }
;

Else:
    T_Else          { createTreeNode(&$$,1,@$.first_line,"Else",NULL);$$->children[0] = $1; }
;


//while循环语句 
WhileStmt:
    While TestExpr StmtsBlock
                                { createTreeNode(&$$,1,@$.first_line,"WhileStmt",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3;}
;
While:
    T_While                     { createTreeNode(&$$,1,@$.first_line,"While",NULL);$$->children[0] = $1; }
;

BreakStmt:
    T_Break T_SEMI              { createTreeNode(&$$,1,@$.first_line,"BreakStmt",NULL);$$->children[0] = $1; }
;
ContinueStmt:
    T_Continue T_SEMI           { createTreeNode(&$$,1,@$.first_line,"ContinueStmt",NULL);$$->children[0] = $1; }
;

//for循环
ForStmt:
    For ForExpr StmtsBlock      { createTreeNode(&$$,1,@$.first_line,"ForStmt",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
;

For:
    T_For                       { createTreeNode(&$$,1,@$.first_line,"For",NULL);$$->children[0] = $1; }
;

ForExpr:
    T_LP AssignStmt T_SEMI  Expr T_SEMI Expr  T_RP
                                { createTreeNode(&$$,1,@$.first_line,"ForExpr",NULL);$$->children[0] = $2;$$->children[1] = $4;$$->children[2] = $6;  } 
;

//数组表达式
ArrayStmt:
    T_Identifier T_LM Expr T_RM 
                                {createTreeNode(&$$,1,@$.first_line,"ArrayStmt",NULL);$$->children[0] = $1; $$->children[1] = $3;}                         
;

Expr:
    Expr T_PLUS Expr            { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_MINUS Expr           { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_STAR Expr            { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_DIV Expr             { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_PER Expr             { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_RB Expr              { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_LB Expr              { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_Ge Expr              { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_Le Expr              { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_Eq Expr              { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_Ne Expr              { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_Or Expr              { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   Expr T_And Expr             { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;$$->children[2] = $3; }
|   T_NOT Expr                  { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2; }
|   T_IntConstant               { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1; }
|   T_FloatConstant             { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1; }
|   T_Identifier                { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;  }
|   ReadInt                     { /* empty */ }
|   CallExpr                    { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;  }
|   T_LP Expr T_RP              { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $2;  }
|   Expr T_SelfPLUS             { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;}
|   Expr T_SelfMINUS            { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;$$->children[1] = $2;}
|   ArrayStmt                   { createTreeNode(&$$,1,@$.first_line,"Expr",NULL);$$->children[0] = $1;}
;

ReadInt:
    T_ReadInt T_LP T_StringConstant T_RP
                            { printf("\treadint %s\n", $3); }
;


%%

int main(){
    yyparse();
    printf("\n\n");
    printTreeNode(root,0);
    printf("\n\n\n *************************************************************************** \n");
    if(yyerrornum>0){
        printf("\n\tthere are %d errors!!! \n\n",yyerrornum);
    }
    else{
        printf("\n\t accept!!!\n\n");
    }
    
    return 1;
}
