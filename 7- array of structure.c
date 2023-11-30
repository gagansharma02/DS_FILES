// 7. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
#include<stdio.h>

struct Marks{
int roll,chem_marks,maths_marks,phy_marks;
char name[10];
}m1,m2,m3,m4,m5;

int main(){
printf("Enter marks of all Student in chemistry");
scanf("%d%d%d%d%d",&m1.chem_marks,&m2.chem_marks,&m3.chem_marks,&m4.chem_marks,&m5.chem_marks);
printf("Enter marks of all Student in Maths");
scanf("%d%d%d%d%d",&m1.maths_marks,&m2.maths_marks,&m3.maths_marks,&m4.maths_marks,&m5.maths_marks);
printf("Enter marks of all Student in Physics");
scanf("%d%d%d%d%d",&m1.phy_marks,&m2.phy_marks,&m3.phy_marks,&m4.phy_marks,&m5.phy_marks);
printf("Enter Roll Number of all Student : ");
scanf("%d%d%d%d%d",&m1.roll,&m2.roll,&m3.roll,&m4.roll,&m5.roll);

printf("Enter Roll Number of all Student : ");
scanf("%s%s%s%s%s",&m1.name,&m2.name,&m3.name,&m4.name,&m5.name);
/**************************************************************/
printf("\n\n\n%d\n",(m1.chem_marks+m1.phy_marks+m1.maths_marks)/3);
printf("%d\n",(m2.chem_marks+m2.phy_marks+m2.maths_marks)/3);
printf("%d\n",(m3.chem_marks+m3.phy_marks+m3.maths_marks)/3);
printf("%d\n",(m4.chem_marks+m4.phy_marks+m4.maths_marks)/3);
printf("%d\n",(m5.chem_marks+m5.phy_marks+m5.maths_marks)/3);

return 0;}
