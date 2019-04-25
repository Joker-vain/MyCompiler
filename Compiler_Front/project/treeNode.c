#include "treeNode.h"


void createTreeNode(treeNode** p,int t,char* n,char* text)  
{   *p = (treeNode*)malloc(sizeof(treeNode));
    (*p)->type = t;  
    strcpy((*p)->name,n);  
    if(strcmp(n,"ID") == 0 || strcmp(n,"INT") == 0 || strcmp(n,"FLOAT") == 0 || strcmp(n,"TYPE") == 0)    
    strcpy((*p)->content,text);  
    int i;  
    for(i = 0;i < 7;i++)  
    (*p)->children[i] = NULL;        
}  

void printTreeNode(treeNode* r, int depth){
	if(r == NULL) return ;
	int i = 0;
	for(; i < depth; ++i) printf("   ");
	printf("%s\n", r->name);
	for(i = 0; i < 7; ++i){
		printTreeNode(r->children[i],depth+1);
	}
};