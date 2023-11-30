//Program for Decimal to Binary Conversion

#include<stdio.h>
#include<stdlib.h>
#include"mystack.h"


int main(){
int N,x=0;
struct Student S;
scanf("%d",&N);
Initialize();
while(N>0){
    x=N%2;
    Push(x);
    N=N/2;
}
while(!IsEmpty()){
    Pop();
}
return 0;

}
