//2. a) Write a C program to calculate the power of a number using a function.
#include<stdio.h>
int power(int number,int pow){
	if(pow==1){
		return number;
	}
	else{
		return number*power(number,pow-1);
	}
	return 0;
}
int main(){
int num,pow;
printf("Enter the number:\t");
scanf("%d",&num);
printf("\nEnter the power :\t");
scanf("%d",&pow);
printf("The power of the number is :\t%d",power(num,pow));	
}
