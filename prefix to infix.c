#include<stdio.h>
#include<string.h>
#include"mystack.h"
int prcd(char a ,char b)
{
    if(a=='^'||a=='*'||a=='%'||a=='/')
    {
        if(b=='^')
            return 0;
        else
            return 1;
    }
    else
    {
        if(b=='+'||b=='-')
            return 1;
        else
            return 0;
    }

}
int  prefixtopostfix( char infix[])
   {
       int i=0,j=0;
       char symb,x;
       strrev(infix);
       char prefix[100];
       struct Student s;
       Initialize();

       while(infix[i]!='\0')
       {
           symb=infix[i];
           i++;
           if(symb>='a'&& symb<='z')
           {
              prefix[j]=symb;
              j++;
           }
           else
           {
               while(s.Top!=-1&& !prcd(symb,Peep(s)))
               {
                   x=Pop();
                   prefix[j]=x;
                   j++;
               }
                  Push(symb);
           }

        }
        while(s.Top!=-1)
        {
            x=Pop();
            prefix[j]=x;
            j++;
        }
        prefix[j]='\0';
        strrev(prefix);
        printf("%s",prefix);
        return 0;
   }


     int main()
    {
        char exp[10];
        printf("enter the expression");
        scanf("%s",exp);
        prefixtopostfix(exp);
    }
