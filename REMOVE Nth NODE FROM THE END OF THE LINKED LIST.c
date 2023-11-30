// REMOVE Nth NODE FROM THE END OF THE LINKED LIST


/***********************************************************************************************

                                             METHOD 1

***********************************************************************************************/

#include"linkedlist.h"
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

int main()
{

    int x,i,n,q;
    struct Node* P;
    START=NULL;
    InsBegin(100);
    InsBegin(200);
    InsBegin(300);
    InsBegin(400);
    InsEnd(700);
    InsEnd(800);
    Traverse();
    x=CountNodes();
    printf("\nTotal Nodes are ==>  %d\n",x);
    printf("Enter the nth node value to be deleted from the end - : ");
    scanf("%d",&n);
    P=START;
    for(i=0;i<x-n;i++){
        P=P->Next;
    }
    if(P==NULL){
        printf("\nVoid Deletion\n");
        exit(1);
    }
    else{
        q=P->info;
        if(P->Next!=NULL){
            START=START->Next;
            FreeNode(P);
            printf("Value at the node is :=> %d ",q);
        }
    }
    Traverse();
}
