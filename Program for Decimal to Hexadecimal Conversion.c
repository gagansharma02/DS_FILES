//Program for Decimal to Hexadecimal Conversion
#include<stdio.h>
#include"mystack.h"

int main(){

int N,x=0;
struct Student S;
scanf("%d",&N);
Initialize();
while(N>0){
    x=N%16;
    Push(x);
    N=N/16;
}
while(!IsEmpty()){
    int y;
    y=Pop();
    switch(y){
        case 10:printf('A');
        case 11:printf('B');
        case 12:printf('C');
        case 13:printf('D');
        case 14:printf('E');
        case 15:printf('F');
        Pop();
    }
}




return 0;
}
