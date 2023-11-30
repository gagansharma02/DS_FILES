#include<stdio.h>
#include"mystack.h"





int main(){
char exp[20];
i=0,a,b;
int PostEvaluation(PostfixExp[]){
Stack S;
Initialize(S);

while PostfixExp[i]!=0{
    symb=PostfixExp[i];
    i=i+1;
    if (symb>48 &&symb<57){
        Push(&S,symb);
    }
    else{
        b=Pop(&S);
        a=Pop(&S);
        value=Evaluation(a,b,symb);
        Push(&S,value);

    }

}

}





return 0;
}
