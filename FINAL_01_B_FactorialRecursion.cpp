//1.b) Write a C program to find the factorial using recursion.
#include<stdio.h>
int factorial(int number){
	int fact=1;
	if(number==0||number==1){
		return 1;
	}
	else{
		return number*factorial(number-1);
	}
	return 0;
}
int main(){
	int num;
	printf("Please enter your number here:\t");
	scanf("%d",&num);
	printf("the factorial of the number %d is\t%d",num,factorial(num));
}
