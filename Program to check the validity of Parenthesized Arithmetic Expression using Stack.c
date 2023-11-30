//Program to check the validity of Parenthesized Arithmetic Expression using Stack

#include<stdio.h>
#include<stdlib.h>
#include"mystack.h"


int main(){
int N,flag=1,i=0;
char str[10];
struct Student S;
scanf("%s",str);
Initialize();
while(str[i]!='\0'){
    if (str[i]=='('){
        Push(str[i]);
    }
    else if(str[i]==')'){
         if (!IsEmpty()) {
                flag=Pop();
        }
        else{
            flag=0;
            break;
        }

    }
    i++;
}
if(IsEmpty()){
    if(flag==1){
        printf("Valid expression");
    }
    else{
        printf("Invalid Expression");
    }
}
else{
    printf("Invalid Expression");
}
return 0;
}
