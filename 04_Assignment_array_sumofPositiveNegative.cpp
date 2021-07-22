//Write a C Program to find the sum of +ve and –ve values and also
//find the difference in magnitudes.
#include<stdio.h>
#include<math.h>
int main()
{
int size,i,sum1=0,sum2=0,difference;
printf("the array size:\n");
scanf("%d",&size);
int arr[size];
printf("enter the array element:\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
if(arr[i]>=0)
{
sum1+=abs(arr[i]);
}
else if(arr[i]<0)
{
sum2+= abs(arr[i]);
}
}
difference=abs(sum1-sum2);
printf("the sum of the positive values are:%d\n",sum1);

printf("\nthe sum of the negative valuesare: %d\n",sum2);
printf("the difference of the two sumis:%d\n",difference);
}
