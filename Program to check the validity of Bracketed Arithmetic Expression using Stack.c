//Program to check the validity of Bracketed Arithmetic Expression using Stack

#include<stdio.h>
#include"mystack.h"
#include<stdlib.h>

int main(){
int i,res,a,b,n;
n=6;
char str[20];
scanf("%s",str);
for (i=0;i<n;i++){
    if(str[i]>='0' && str[i]<='9'){
        int digit = str[i] - '0';
        Push(digit);
    }

    else{
        if (str[i]=='+' || str[i]=='*' || str[i]=='-' || str[i]=='/' || str[i]=='%'){
            b=Pop();
            a=Pop();
            switch (str[i]) {
                case '+':
                    res = a + b;
                    Push(res);
                    break;
                case '*':
                    res = a * b;
                    Push(res);
                    break;
                case '-':
                    res = a - b;
                    Push(res);
                    break;
                case '/':
                    if (b == 0) {
                        printf("Division by zero\n");
                        return 1;

                    }
                    res = a / b;
                    Push(res);
                    break;
                case '%':
                    res = a % b;
                    Push(res);
                    break;
            }

        }

    }
}
int x=Peep();
printf("%d",x);




return 0;
}
