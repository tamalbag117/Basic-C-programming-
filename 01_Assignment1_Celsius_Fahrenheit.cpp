/*Temperatures of a city in Fahrenheit degree are input through a
keyboard. Write a program to convert the temperature into
centigrade degrees.*/
#include<stdio.h>
int main(){
	float fahrenheit,celsius;
	printf("Enter the temperature in Fahrenhite:\t");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*(5.0/9.0);
	printf("The temperature in celsius is:\t%f",celsius);
	return 0;
}
