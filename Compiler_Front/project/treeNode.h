
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct treeNode
{   int type;	//ternimal symbol:type = 0	nonterminal symbol:type = 1
    int line;
    char name[20];
    char content[32];//ID,TYPE,INT,FLOAT    
    struct treeNode* children[7];  
} treeNode;

struct treeNode* root;

void createTreeNode(treeNode** p,int t,int l,char* n,char* text);

void printTreeNode(treeNode* r,int depth);
