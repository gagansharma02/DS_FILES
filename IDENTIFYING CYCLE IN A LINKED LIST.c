// IDENTIFYING CYCLE IN A LINKED LIST

#include<stdio.h>
#define TRUE 1;
#define FALSE 0;
#include<stdlib.h>
#include"linkedlist.h"


int main(){
    int x;
    START='NULL';
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
    /*InsAfter(100);
    Traverse();**/
    FormCIrcularLinkedList();
    x=CycleDetection();
    if(x==0){
        printf("FALSE or NO Linked List Found");
    }
    else{
        printf("TRUE or Yes Linked List Found");
    }
}
/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/
