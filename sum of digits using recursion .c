//  sum of digits using recursion

#include<stdio.h>
int sum(int n){
    if(n>9){

        return (n%10+sum(n/10));
    }
    else{
        return n%10;
    }
}
int main(){
int n=9023,x;
x=sum(n);
printf("%d",x);
}
