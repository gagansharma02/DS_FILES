/* Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
For example, if we conisder 98, we get 9+8 = 17 after first addition. Then we get 1+7 = 8.
We stop at this point because we are left with one digit.    */


#include<stdio.h>

int DivideConqer(int n){
    int c=0;
    while(n!=0){
        c+=n%10;
        n=n/10;
    }
    return c;
}


int main(){
    int num;
    scanf("%d",&num);
    while(num>=10){
        num=DivideConqer(num);
    }
    if(num<10){
        printf("%d",num);
    }
    return 0;
}
