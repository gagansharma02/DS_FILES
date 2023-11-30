//Prefix Evaluation
#include<stdio.h>
#include<string.h>
#include"mystack.h"
int power(int a,int n)
{     int p;
    if(n==0)
    {
        return 1;
    }
    else
    {   p=power(a,n/2);
        if (n%2==0)
        return p*p;
        else
        return p*p*a;
    }
}
result(int a,int b,char symb)
{
    switch(symb)
    {
        case'+':return a+b;
        case'-':return a-b;
        case'*':return a*b;
        case'/':return a/b;
        case'%':return a%b;
        case'^':return power(a,b);
    }
}
int postfixevaluation(char postop[])
{    int i,symb,a,b,value,ans,l=strlen(postop);;
    struct stack S;
    intialization(&S);
    for(i=l-1;i>=0;i--)
    {
        symb=postop[i];
         if(symb>='0'&&symb<='9')
            push(&S,symb-'0');
         else
         {
             a=pop(&S);
             b =pop(&S);
             value=result(a,b,symb);
             push(&S,value);
         }


            }
            ans=stacktop(&S);
            return ans;


}
int main()
{    int ans,z;
    char postop[20];
    printf("Enter the expressions\n");
    scanf("%s",postop);

    z=postfixevaluation(postop);
    printf("%d",z);

}
