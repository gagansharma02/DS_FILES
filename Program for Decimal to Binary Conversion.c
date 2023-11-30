#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0
#define MAXSIZE 10
struct Student{
int Top;
int item[MAXSIZE];
}S;

//typedef Struct Student S;

Initialize(){
S.Top=-1;
}


int IsEmpty(){
if (S.Top==-1){
    printf("\nStack Underflows");
    return True;
}
else{
    return False;
}

}
void Push(int x){
if (S.Top==10){
    printf("\nStack Overflow");
}
else{
    S.Top++;
    S.item[S.Top]=x;

}
}


void Pop(){
    int x;
    if(!IsEmpty()){
        x=S.item[S.Top];
        S.Top--;
        printf("\nPopped Item is %d",x);
    }
    else{
        printf("\nStack is Underflow");
    }

}


void Peek(){
    if(!IsEmpty()){
       printf("\nTop Element---->  %d",S.item[S.Top]);
       }
    else{
        printf("\nStack is Empty");
    }

}



int main(){

Initialize();
Pop();
Push(100);
Push(200);
Push(300);
Push(400);
Peek();
Push(500);
Push(600);
Pop();
Push(700);
Push(800);
Pop();
Push(900);
Peek();
return 0;}
