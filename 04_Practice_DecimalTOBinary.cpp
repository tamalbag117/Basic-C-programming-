//write a program to convert a decimal number to binary number.
#include<stdio.h>
int main()
{
int a[10],number,i;
printf("Enter the decimal number to convert:\n ");
scanf("%d",&number);
for(i=0;number>0;i++)
{

a[i]=number%2;
number=number/2;
}
printf("the converted binary number is:");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}
