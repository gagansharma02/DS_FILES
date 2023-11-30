// FIND THE MINIMUM ELEMENT FROM THE STACK
#include<stdio.h>
#include"mystack.h"
int main(){
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Push(50);
    Push(60);
    Push(70);
    Push(80);
    Push(90);
    Push(100);
    Push(110);

    int minimum=Pop();
    int x;
    while(!IsEmpty()){
        x=Pop();
        if(minimum>x){
            minimum=x;
        }
    printf("%d",minimum);
    return 0;
}
