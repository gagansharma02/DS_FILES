/* Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade
(an uppercase character), and depending upon which the total salary is calculated as -

 totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic, da = 50% of basic, allow = 1700 if grade = ‘A’,
 allow = 1500 if grade = ‘B’, allow = 1300 if grade = ‘C' or any other character, pf = 11% of basic.
 Round off the total salary and then print the integral part only.*/
 #include<stdio.h>
 void main(){
 int ts,bs,hra,da,allow;
 char grade;
 scanf("%d",&bs);
 scanf("%c",&grade);
 hra=0.2*bs;
 da=0.5*bs;
 if (grade=="A"){
    allow=1500;
 }
 if (grade=="B")
    allow=1500;
 if (grade=="C")
    allow=1300;
 else
    allow=0.11*bs;
 ts=bs+hra+da+allow;
 printf("Total Salary is : %d ");
 }

