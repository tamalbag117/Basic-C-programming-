/*Problem definition: we have to check whenever a
number is perfect number or not, a perfect number is a
positive divisor, excluding the number itself.
i b) formula: Sum=Sum+ i; where i is the increment
operator in c ; i <the number.*/
#include<stdio.h>
//perfect number//
int main()
{
int number,i,total=0;
printf("enter the number:\t");
scanf("%d",&number);
printf("The number divisible by:\t");
for(i=1;i<number;i++)
{
if(number%i==0)
{
printf("%d\t",i);
total=total+i;
}
}
if(number==total)
{
printf("\nthe number is perfect number\n the sum of the number is:\t %d",total);
}
else
{

printf("\nthe number is not a perfect number\n the sum of the number is:\t %d",total);
}
return 0;
}
