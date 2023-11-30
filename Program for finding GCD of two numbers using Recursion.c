// Program for finding GCD of two numbers using Recursion
#include<stdio.h>
GCD(int a,int b){
int x=0;
while(a==0 && b==0){
if(a>b){
    a=a%b;
}
else {
    if(a%b==0){
        return a;
    }
    else{
        b=b%a;
    }
}
}
return 1;
}



int main(){
int n1=12,n2=6,x;
x=GCD(n1,n2);
printf("%d",x);
return 0;
}
