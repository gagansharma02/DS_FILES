// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<stdio.h>
void main(){
int a,b,c;
printf("Enter Sides of a Triangle : ");
scanf('%d%d%d',&a,&b,&c);
if (a==b || b==c || c==a)
    printf("Equilateral Triangle");
else{
    if (a!=b && b!=c && c!=a){
        printf("Scalene Triangle");
    }
    else{
        printf("Isosceles Triangle");
    }
}
}
