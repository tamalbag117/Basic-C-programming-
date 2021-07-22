/*Write a C Program to add and multiply three numbers.*/
#include<stdio.h>
int main(){
	float num1,num2,num3;
	printf("Enter the three number:\n");
	scanf("%f%f%f",&num1,&num2,&num3);
	printf("\nThe addition of the three number is:\t%f\nThe multiplication of three number is:\t%f",(num1+num2+num3),(num1*num2*num3));
}
