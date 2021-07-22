/*Problem definition: A year is leap year if the year is divided
by 4 or some cases like if the last two digits of the year is zero
so it should be divided by 400 to become leap year.
If the number is **** type of the last digit is zero or
non-zero, if it divided by 4 it’s a leap year. Of is the number is
**00 type so it’s must be divided by 400 to become leap year.
****%4==0;
**00%400==0;*/
#include<stdio.h>
int main()
{
int year;
printf("the year is :",year);
scanf("%d",&year);
if(year%4==0)
{if(year%100==0)

{if (year%400==0)
printf("the year is a leap year",year);
else
printf("the year is not a leap year",year);
}
else
printf("the year is a leap year",year);
}
else
printf("the year is not a leap year",year);
return 0;
}
