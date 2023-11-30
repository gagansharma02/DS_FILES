#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0
#define MAXSIZE 20
struct Student{
int Top;
char item[MAXSIZE];
}S;

//typedef Struct Student S;

void Initialize(){
S.Top=-1;
}


int IsEmpty(){
if (S.Top==-1){
    return True;
}
else{
    return False;
}

}
void Push(char x){
if (S.Top==MAXSIZE){
    printf("\nStack Overflow");
}
else{
    S.Top++;
    S.item[S.Top]=x;

}
}


int Pop(){
    int x;
    if(!IsEmpty()){
        x=S.item[S.Top];
        S.Top--;
        return x;
    }
    else{
        return 0;
    }

}


int Peep(){
    if(!IsEmpty()){
       return S.item[S.Top];
       }
    else{
        return 0;
    }

}
