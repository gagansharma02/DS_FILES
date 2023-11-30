// find the largest number among the three numbers entered by the user.
#include<stdio.h>
void main(){
int n1,n2,n3,max,max1;
scanf("%d%d%d",&n1,&n2,&n3);
max=(n1>n2)?n1:n2;
max1=(max>n3)?max:n3;
printf("The largest among Numbers is : %d",max1);






}
