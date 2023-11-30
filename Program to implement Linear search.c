// LINKED LIST 1ST PROGRAM
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct Node{
    int info;
    struct Node* Next;
};
struct Node* START;
/***********************************************************************************************/
struct Node* GetNode(){
    struct Node* P;
    P=(struct Node*)malloc(sizeof(struct Node));
    return P;
};
/***********************************************************************************************/
void InsBegin(int x){
    struct Node*P;
    P=GetNode();
    P->info=x;
    P->Next=START;
    START=P;
}

/***********************************************************************************************/
void Traverse(){
    struct Node* P;
    P=START;
    while(P!=NULL){
        printf("%d\t",P->info);
        P=P->Next;
    }
    return;
}
/***********************************************************************************************/
void LinearSearch(int x){
    struct Node* P;
    P=START;
    while(P!=NULL){
        if(P->info==x){
            printf("%d is Found\n",P->info);
            return;
        }
        P=P->Next;
    }
    printf("Not Found\n");
}
/***********************************************************************************************/
int CountNodes(){
    int c=0;
    struct Node*P=START;
    while(P!=NULL){
        c+=1;
        P=P->Next;
    }
    return c;
}

/***********************************************************************************************/
int main(){
    struct Node* P;
    int x;
    START=NULL;
    InsBegin(100);
    InsBegin(200);
    InsBegin(300);
    InsBegin(400);
    InsBegin(700);
    InsBegin(800);
    Traverse();
    x=CountNodes();
    printf("\nTotal Nodes are ==>  %d\n",x);
    printf("Enter the Element To Search : ");
    scanf("%d",&x);
    LinearSearch(x);
    return 0;
}
