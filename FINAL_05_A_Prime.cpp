//a) Write a C program to check whether a number is prime or not.
#include<stdio.h>
int main(){
	int number,i,count=0;
	printf("Enter the number:\t");
	scanf("%d",&number);
	for(i=2;i<=number/2;i++){
		if(number%i==0)
		{
			printf("The number is not prime");
			count=1;
			break;
		}
	}
	if(count==0){
		printf("The number is prime");
	}
    return 0;	
}

