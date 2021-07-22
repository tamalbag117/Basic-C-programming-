//factorial of a number//
#include<stdio.h>
int main(){
	int i,number,fact=1;
	printf("enter the number:\t");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
	fact=fact*i;	
	}
	printf("The Factorial of the number is:\t%d",fact);
}
