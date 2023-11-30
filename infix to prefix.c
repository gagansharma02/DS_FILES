#include<stdio.h>
#include<stdlib.h>
#include"mystack.h"

int prcd(char a,char b)
{
  if(a=='^'||a=='*'||a=='/'||a=='%')
   {
    if(b=='^')
    return False;
   else
   return True;
   }
   else
   {
   if(b=='+'||b=='-')
   return True;
   else
   return False;
   }
}

int main()
{
  int x;
   x=prcd());
 printf("%d",x);
}
