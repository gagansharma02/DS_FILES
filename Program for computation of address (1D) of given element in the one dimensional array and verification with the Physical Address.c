// Program for computation of address of gven element in the one dimensional array and verification with the Physical Address

#include<stdio.h>

int main(){
    int i,x,j;
    int A[]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter Value of 'i' : ");
    scanf("%d",&i);
    x=&A[0];
    j=x+i*4;
    printf("\nAddress of A[ %d ] using formula is %u\n",i,j);
    printf("Address of A[ %d ] using Address Operator is %u\n",i,&A[i]);







return 0;
}
