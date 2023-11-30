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

int StartingPos(){
    struct Node*R=START;
    struct Node*T=START;
    if(CycleDetection()){
        T=START;
    R=START;
    while(R!=NULL && R->Next!=NULL){
        T=T->Next;
        R=R->Next;
        R=R->Next;
        if(T==R){
            break;
        }
    }
    T=START;
    int c=1;
    while(T!=R){
        T=T->Next;
        R=R->Next;
    }
    return T->info;
    }
}


/***********************************************************************************************/
void ReverseLinked(){
    struct Node*P=GetNode();
    struct Node*C=GetNode();
    struct Node* N=GetNode();

    P=NULL;
    C=START;
    N=START->Next;
    while(C!=NULL){
        C->Next=P;
        P=C;
        C=N;
        if(N!=NULL){
            N=N->Next;
        }
    }
    START=P;


}

/***********************************************************************************************/

int lengthOfCycle(){
    struct Node*T;
    struct Node*R;
    T=START;
    R=START;
    while(R!=NULL && R->Next!=NULL){
        T=T->Next;
        R=R->Next;
        R=R->Next;
        if(T==R){
            break;
        }
    }
    T=T->Next;
    int c=1;
    while(T!=R){
        T=T->Next;
        c+=1;
    }
    return c;


}
/***********************************************************************************************/

struct Node* Search(int x){
    struct Node* P;
    P=START;
    while(P->info!=x){
        P=P->Next;
    }
    return P;
}
/***********************************************************************************************/
int CycleDetection(){

    struct Node*T;
    struct Node*R;

    T=START;
    R=START->Next;
    while(R!=NULL && R->Next!=NULL){
        T=T->Next;
        R=R->Next;
        R=R->Next;
        if(T==R){
            return TRUE;
        }
    }
    return FALSE;
}

/***********************************************************************************************/

/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
int main(){
    struct Node* P;
    struct Node* Q;
    int x;
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
    EvenOdd();
    PairSwapping();
    Traverse();
    x=LargestInfo();
    printf("\nLargest Element is  : %d\n",x);
    x=DelBegin();
    printf("\nDeleted element is : %d\n",x);
    Traverse();
    x=DelEnd();
    printf("\nDeleted element is : %d\n",x);
    Traverse();
    x=MidPos();
    printf("\nMiddle Element is : %d\n",x);
    ReverseLinked();
    Traverse();
    P=Search(400);
    Q=Search(200);
    P->Next=Q;
    if(CycleDetection()){
        printf("\nTrue");
    }
    else{
        printf("\nFalse");
    }
    x=lengthOfCycle();
    printf("\nLength of cycle is : %d",x);
    x=StartingPos();
    printf("\nStarting Position of cycle is : %d",x);
}
/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
