//Write a C program to find the frequency of all odd
//and even elements in an array.
#include<stdio.h>
int main()
{
int array[50];
int index,number,even=0,odd=0;
printf("enter the size of the array:");
scanf("%d",&number);
printf("the elements of the array are:");
for(index=0;index<number;index++)
{
scanf("%d",&array[index]);
}
for(index=0;index<number;index++)
{
if(array[index]%2==0)
{
even++;
}
else
{
odd++;
}
}
printf("even number in the array:%d\n",even);
printf("odd number in the array :%d",odd);
return 0;
}
