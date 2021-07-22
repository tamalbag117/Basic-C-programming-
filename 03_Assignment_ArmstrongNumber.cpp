/*Write a C Program to find where an integer is Armstrong
number or not.
i a)problem definition: a narcissistic number in a given number
base b is a number that is the sum of its own digits each
raised to the power of the number of digits.*/
#include<math.h>
#include<stdio.h>
int main()
{
int number,divisible,i,total=0,temp=0;
printf("the number is :\n");
scanf("%d",&number);
temp=number;
for(i=1;i<=number;)
{
divisible=number%10;
total=total+pow(divisible,3);
number/=10;
}
if(temp==total)
{
printf("the number is a armstrog number\n%d==%d",temp,total);
}
else
{
printf("the number is not a armstrong number\n%d!=%d",temp,total);
}

return 0;
}
