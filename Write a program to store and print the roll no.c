// Write a program to store and print the roll no., name, age and marks of a student using structures.
// Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 1.

#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    int age;
    int marks[5];
    char name[20];
}S[5];

int main(){
    int i,j;
    for(i=0;i<5;i++){
        printf("Enter The Details of Student : %d : \n1.Roll Number\n2.Age\n3.Marks of 5 Subjects\n4.Name",i);
        scanf("%d",&S[i].roll);
        scanf("%d",&S[i].age);
        for(j=0;j<5;j++){
            scanf("%d",&S[i].marks[j]);
        }
        gets(S[i].name);
    }
    for(i=0;i<5;i++){
        printf("Enter The Details of Student : %d : \n1.Roll Number\n2.Age\n3.Marks of 5 Subjects\n4.Name",i);
        scanf("%d",&S[i].roll);
        scanf("%d",&S[i].age);
        for(j=0;j<5;j++){
            scanf("%d",&S[i].marks[j]);
        }
        gets(S[i].name);
    }
}
