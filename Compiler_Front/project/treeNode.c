#include "treeNode.h"


void createTreeNode(treeNode** p,int t,int l,char* n,char* text)  
{   *p = (treeNode*)malloc(sizeof(treeNode));
    (*p)->type = t;  
    (*p)->line = l;  
    strcpy((*p)->name,n);  
    if(strcmp(n,"INTEGER") == 0 || strcmp(n,"STRING") == 0 || strcmp(n,"IDENTIFIER") == 0 || strcmp(n,"type") == 0 || strcmp(n,"FLOAT") == 0 )    
    strcpy((*p)->content,text);  
    int i;  
    for(i = 0;i < 7;i++)  
    (*p)->children[i] = NULL;        
}  

void printTreeNode(treeNode* r, int depth){
	if(r == NULL) return ;
	int i = 0;
	for(; i < depth; ++i) 
        printf("    ");
    if(strcmp(r->name,"INTEGER")==0||strcmp(r->name,"STRING")==0  || strcmp(r->name,"IDENTIFIER")==0 ||strcmp(r->name,"type")==0 || strcmp(r->name,"FLOAT")==0){
        printf("%s", r->name);
        printf("-----》%s\n",r->content);
    }
    else{
        printf("%s\n", r->name);
    }
    
	for(i = 0; i < 7; ++i){
		printTreeNode(r->children[i],depth+1);
	}
};

