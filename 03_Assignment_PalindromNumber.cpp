/*Write a C Program to find where an integer palindrome
number or
not. problem definition: palindromic number is a number that
remains same when its digits are reversed*/
#include<stdio.h>
int main()
{
int number,temp=0,div,i,sum=0;
printf("the number is:\n");
scanf("%d",&number);
temp=number;
for(i=1;i<=number;)
{
div=number%10;
sum=10*sum+div;
number=number/10;
}
if (temp==sum)
{
printf("the number is palindrom number!\n%d==%d",temp,sum);
}
else
printf("the nuber is not a palindrom number \n %d!=%d",temp,sum);
return 0;
}

