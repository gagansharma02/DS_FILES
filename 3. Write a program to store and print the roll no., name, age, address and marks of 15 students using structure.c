// 3. Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.

#include<stdio.h>
#include"mystack.h"
#include<string.h>






int main(){
    struct Student{
    int roll;
    char name[20];
    int age;
    char address[30];
    int marks;
};
    struct Student s[15];
    for (int i=1;i<=15;i++){
        printf("Enter details of Student (%d) - \nEnter roll : ",i);
        scanf("%d",&s[i].roll);
        printf("Enter name");
        scanf("%s",&s[i].name);
        printf("Enter Age : ");
        scanf("%d",&s[i].age);
        printf("Enter Address : ");
        scanf("%s",&s[i].address);
        printf("Enter Marks : ");
        scanf("%d",&s[i].marks);
    }
    for (int i=0;i<15;i++){
        printf("-------------------------------------------------------------------------------");
        printf("Details of Student (%d) - \nEnter roll : %d ",s[i].roll);
        printf("name : %s",s[i].name);
        printf("Age : %d ",s[i].age);
        printf("Address : %s ",s[i].address);
        printf("Marks : %d ",s[i].marks);
    }


}
