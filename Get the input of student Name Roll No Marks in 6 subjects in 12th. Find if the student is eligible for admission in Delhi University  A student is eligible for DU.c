// Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. Find if the student is eligible for admission in Delhi University.
// A student is eligible for DU if he has scored 95 % or more in Best 4.

#include<stdio.h>
#include<string.h>


struct Student{
    char name[20];
    int roll;
    int marks[6];
}S;
int main(){
    int i,j,minpos,s,c,temp;
    gets(S.name);
    scanf("%d",&S.roll);
    for(i=0;i<6;i++){
        scanf("%d",&S.marks[i]);
    }
    for(i=0;i<6;i++){
        minpos=i;
        for(j=i+1;j<6;j++){
            if(S.marks[j]<S.marks[minpos]){
            minpos=j;
            }
        }
        temp=S.marks[minpos];
        S.marks[minpos]=S.marks[i];
        S.marks[i]=temp;
    }
    for(i=0;i<6;i++){
        printf("\t%d\t",S.marks[i]);
    }
    s=0;
    for(i=2;i<6;i++){
        s+=S.marks[i];
    }
    c=(s/4.0);
    puts(S.name);
    if(c>95){
        printf("You are eligible for admission for DU and your percentage for top 4 subject is : %d",c);
    }
    else{
        printf("You are not eligible for admission for DU and your percentage for top 4 subject is : %d",c);
    }
    return 0;
}
