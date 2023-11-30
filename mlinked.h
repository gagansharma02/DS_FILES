// MULTIPLE LINKED LIST HEADER FILE
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct Node{
    int info;
    struct Node* Next;
};
/***********************************************************************************************/
struct Node* GetNode(){
    struct Node* P;
    P=(struct Node*)malloc(sizeof(struct Node));
    return P;
};
/***********************************************************************************************/
void Traverse(struct Node *list){
    struct Node*P;
    P=list;
    while(P!=NULL){
        printf("%d\t",P->info);
        P=P->Next;
    }
}
/***********************************************************************************************/

void InsBegin(struct Node **list,int x){
    struct Node*P;
    P=GetNode();
    P->info=x;
    P->Next=*list;
    *list=P;
}

/***********************************************************************************************/
void InsEnd(struct Node **list,int x){
    struct Node* P;
    P=*list;
    while(P->Next!=NULL){
        P=P->Next;
    }
    struct Node* Q=GetNode();
    Q->info=x;
    Q->Next=NULL;
    P->Next=Q;
}

/***********************************************************************************************/
void InsAfter(struct Node **list,int x,int y){
    struct Node *P,*Q;
    P=*list;
    while(P!=NULL){
        if(P->info==y){
            break;
        }
        P=P->Next;
    }
    Q=GetNode();
    Q->info=x;
    Q->Next=P->Next;
    P->Next=Q;
}

/***********************************************************************************************/

int DelBegin(struct Node **list){
    struct Node*P=*list;
    int x;
    if(P==NULL){
        printf("\nVoid Deletion\n");
        exit(1);
    }
    else{
    x=P->info;
    if(P->Next!=NULL){
        (*list)=(*list)->Next;
        free(P);
        return x;
    }
    }
}
/***********************************************************************************************/

int DelEnd(struct Node **list){
    int x;
    struct Node*P=*list;
    struct Node*Q=NULL;
    while(P->Next!=NULL){
        Q=P;
        P=P->Next;
    }
    if(Q!=NULL){
        Q->Next=NULL;
    }
    else{
        *list=NULL;
    }
    x=P->info;
    free(P);
    return x;
}



void ReverseLinked(struct Node **list){
    struct Node*P=NULL;
    struct Node*C=*list;
    struct Node* N;

    while(C!=NULL){
        N=C->Next;
        C->Next=P;
        P=C;
        C=N;
        if(N!=NULL){
            N=N->Next;
        }
    }
    *list=P;
    Traverse(*list);

}


void PairSwapping(struct Node **list){
    struct Node*P;
    struct Node*P1;
    P=list;
    P1=list;
    P1=P1->Next;
    int m;
    while(P!=NULL &&P1!=NULL){
        m=P->info;
        P1=P->Next;
        P->info=P1->info;
        P1->info=m;
        P=P->Next->Next;
        P1=P1->Next;
        if(P1!=NULL){
            P1=P1->Next;
        }
    }
    printf("\n");
    Traverse(list);
}
/***********************************************************************************************/



/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
