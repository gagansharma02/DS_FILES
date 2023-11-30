//Program for Decimal to Octal Conversion




#include<stdio.h>
#include<stdlib.h>
#include"mystack.h"


int main(){
int N,x=0;
struct Student S;
scanf("%d",&N);
Initialize();
while(N>0){
    x=N%8;
    Push(x);
    N=N/8;
}
while(!IsEmpty()){
    Pop();
}
return 0;

}
