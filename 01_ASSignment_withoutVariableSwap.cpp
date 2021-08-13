/*Write a C program to swap two numbers without exta
variable.*/
#include<stdio.h>
int main()
{
int a,b;
printf("before swap (a,b) is \n");
scanf("%d%d",&a,&b);
a=a ^ b;
b=a ^ b;
a=a ^ b;
printf("swap(%d,%d)\nafter swap a=%d b=%d",b,a,a,b);
return 0;
}

