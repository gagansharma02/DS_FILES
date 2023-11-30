// INFIX TO POSTFIX

#include<stdio.h>
#include"mystack.h"
#include<string.h>


InfixToPrefix(Infix){
    struct Student S;
    Initialize();
    int i=0;
    strrev(Infix);
    while(Infix[i]!='\0'){
        symb=Infix[i];
        i++;
    }
    if (symb>='a' && symb<='z'){

    }
    else{
        while(!IsEmpty() && prcd(symb,Peep()){
              x=Pop();

              }
              Push(symb);
    }
    while(!IsEmpty()){
        x=Pop();

    }
    return PrefixExp()

}

int main(){
    char s=[20];
    s="a*(b+c/d)";
    s=InfixToPrefix(s);
    printf("%s",s);
    return 0;
}
