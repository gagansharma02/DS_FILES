// check whether the year entered by the user is a leap year or not.
#include<stdio.h>
void main(){
int year;
scanf("%d",&year);
if (year%4==0){
    if (year%100==0){
        if (year%400==0){
            printf("Leap Year");
        }
        else{
            printf("Not a Leap Year");
        }
    }
    else{
        printf("Leap Year");
    }
}
else{
    printf("Not a Leap Year");
}

}
