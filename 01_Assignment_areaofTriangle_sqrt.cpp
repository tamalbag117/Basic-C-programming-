/*Write a C Program to find area of a triangle Area of triangle=(s(sa)(
s-b)(s-c))½.Where a, b and c are three sides of the triangle
and s=(a+b+c)/2.*/
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,area,s;
printf("enter the value of a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
d=sqrt(s*(s-a)*(s-b)*(s-c));
if(d>0)
{
area=sqrt(d);
printf("the triangle is formable \n the Area of triangle is %f",area);
}
else
printf("the triangle is not formable");
return 0;
}
