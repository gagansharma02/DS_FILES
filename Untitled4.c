// LINEAR SEARCH
#include<stdio.h>
#include"linkedlist.h"

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
    /*P=Search(400);
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
    printf("\nStarting Position of cycle is : %d",x);*/
    printf("\nEnter the Element To Search : ");
    scanf("%d",&x);
    LinearSearch(x);
    return 0;
}
