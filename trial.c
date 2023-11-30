// LINKED LIST 1ST PROGRAM
#include<stdio.h>
#include<stdlib.h>
#include"mlinked.h"
#define TRUE 1
#define FALSE 0


void main()
{
   struct Node *START;/*
    struct Node* P;
    struct Node* Q;
    int x;*/
    START=NULL;
    InsBegin(&START,100);
    InsBegin(&START,200);
    InsBegin(&START,300);
    InsBegin(&START,400);

    Traverse(START);
    printf("\n");
    InsEnd(&START,20);
    Traverse(START);
    printf("\n");
    PairSwapping(START);
    printf("\n");
    ReverseLinked(&START);

}


