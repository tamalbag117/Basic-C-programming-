/*Mr. Sayan Ghosh is an employee of a Private Firm. His Basic is
Rs. 5500/-. Now the dearness allowance is 74% of his basic salary
and house rent allowance is 15% of basic salary. Write a program
to calculate his gross salary. [Though his basic salary is given, do
this program where basic is taken through keyboard].*/
#include<stdio.h>
int main(){
	float basicSalary;
	printf("Mr.Sayan Ghosh's Basic Salary is:\t");
	scanf("%f",&basicSalary);
	printf("\nMr.Ghosh's Gross Salary is:%f",(basicSalary)*(1.0+0.74+0.15));
}
