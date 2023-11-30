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
void InsEnd(int x){
    struct Node* P;
    P=START;
    while(P->Next!=NULL){
        P=P->Next;
    }
    struct Node* Q=GetNode();
    Q->info=x;
    Q->Next=NULL;
    P->Next=Q;
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
void EvenOdd(){
    struct Node*P=START;
    int c=0,d=0;
    while(P!=NULL){
        if(P->info%2==0){
            c+=1;
        }
        else{
            d+=1;
        }
        P=P->Next;
    }
    printf("\nTOTAL EVEN NODES ARE-- %d\n",c);
    printf("\nTOTAL ODD NODES ARE-- %d\n",d);
}
/***********************************************************************************************/
void PairSwapping(){
    struct Node*P=START;
    struct Node*P1;
    int m,t;
    while(P!=NULL){
        m=P->info;
        P1=P->Next;
        t=P1->info;
        P->info=t;
        P1->info=m;
        P=P->Next->Next;
    }
}
/***********************************************************************************************/
int LargestInfo(){
    struct Node*P=START;
    int x=P->info;
    while(P!=NULL){
        if(P->info>x){
            x=P->info;
        }
        P=P->Next;
    }
    return x;
}
/***********************************************************************************************/
void FreeNode(struct Node* P){
    free(P);
}

/****void InsAfter(int x){
    struct Node*P=START;
    int x=P->info;
    while(P<x){
        if(P->info>x){
            x=P->info;
        }
        P=P->Next;
    }
    Q=GetNode();
    Q->info=x
    Q->START=P->Next;
    P=Q;
}
*******/
/***********************************************************************************************/
int DelBegin(){
    struct Node*P=START;
    int x;
    if(P==NULL){
        printf("\nVoid Deletion\n");
        exit(1);
    }
    else{
    x=P->info;
    if(P->Next!=NULL){
        START=START->Next;
        FreeNode(P);
        return x;
    }
    }
}
/***********************************************************************************************/

int DelEnd(){
    int x;
    struct Node*P=START;
    struct Node*Q=NULL;
    while(P->Next!=NULL){
        Q=P;
        P=P->Next;
    }
    if(Q!=NULL){
        Q->Next=NULL;
    }
    else{
        START=NULL;
    }
    x=P->info;
    FreeNode(P);
    return x;
}

/***********************************************************************************************/

int MidPos(){
    struct Node*P=START;
    struct Node*R=START;
    struct Node*T=START;
    T=START;
    R=START->Next;
    while(R!=NULL && R->Next!=NULL){
        T=T->Next;
        R=R->Next;
        R=R->Next;
    }
    return T->info;
}

/***********************************************************************************************/

/*********InsAfter(){
    int x;
    struct Node*P=START;
    struct Node*Q=START;
    struct Node*R;
    R=GetNode();
    R->info=x;
    P->Next=R;
    R->Next=Q;
}***********/




/***********************************************************************************************/

/**********void InsAnyPos(int x){
    struct Node*P=START;

}*************************/

int CycleDetection(){
    struct Node* T=START;
    struct Node* R=START;

    T=START;
    R=START->Next;
    while(R!=NULL && R->Next!=NULL){
        T=T->Next;
        R=R->Next;
        R=R->Next;
        if(T==R){
            return TRUE;
        }
        else{
            return FALSE;
        }
    }
    return FALSE;
}
void FormCIrcularLinkedList(){
    struct Node* P=START;
    while(P!=NULL){
        P=P->Next;
    }
    P->Next=START;
}

void ReverseLinked(){
    struct Node*P=NULL;
    struct Node*C=START;
    struct Node* N;
    N=C->Next;
    while(C!=NULL){
        P=C;
        C=N;
        if(N!=NULL){
            N=N->Next;
        }
    }
    START=P;


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

/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
