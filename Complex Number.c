// 5. Write a program to add two complex numbers using structure. The values of the complex number is to be taken from the user.

#include<stdio.h>
struct Complex{
    int num_real;
    int num_imag;
    };


int main(){
struct Complex T1;
struct Complex T2;
int real,imag;
T1.num_real=10;
T2.num_real=7;
T1.num_imag=2;
T2.num_imag=4;
real=T1.num_real+T2.num_real;
imag=T1.num_imag+T2.num_imag;
printf("Addition is : %d+i%d",real,imag);
real=T1.num_real-T2.num_real;
imag=T1.num_imag-T2.num_imag;
printf("\nSubtraction is : %d%di",real,imag);
real=T1.num_real*T2.num_real;
imag=T1.num_imag*T2.num_imag;
printf("\nMultiplication is : %d+%di",real,imag);








return 0;
}
