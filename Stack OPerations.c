//  6. Write a program to add two time in hour, minute and second using structure. The values of the time is to be taken from the user.

#include<stdio.h>
struct Time
{
    int hour;
    int minute;
    int second;
};
int main(){
    struct Time T1={1,59,40};
    struct Time T2={10,35,29};
    struct Time T3;
    int x,y,z,carry=0;
    printf("%d::%d::%d",T1.hour,T1.minute,T1.second);
    printf("\t+\t%d::%d::%d",T2.hour,T2.minute,T2.second);
    x=(T1.second+T2.second);
    carry=x/60;
    x=x%60;
    T3.second=x;
    y=(T1.minute+T2.minute+carry);
    carry=y/60;
    y=y%60;
    T3.minute=y;
    z=(T1.hour+T2.hour+carry);
    carry=z/60;
    z=z%60;
    T3.hour=z;
    printf("\t=\t%d::%d::%d",T3.hour,T1.minute,T1.second);
    return 0;
}
