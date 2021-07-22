//Write a C Program to print integers from 1 to n omitting the integers
//is divisible by 7.
#include<stdio.h>
int main(){
	int i,range;
	printf("Enter the Range:\t");
	scanf("%d",&range);
	printf("\n\nlet's print\n");
	for(i=1;i<=range;i++)
	{
		if(i!=7)
		{
			printf("%d\t",i);
		}
	}
}
