/*Write a C Program to sort a set of n number in ascending
order using
Modified Bubble sort.*/
#include<stdio.h>
int main()
{
int size,i,j;
printf("enter the size of the array:\n");
scanf("%d",&size);
int arr[size];
printf("enter the array elements:\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
int temp=0;
for(j=0;j<size-i;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(i=0;i<size;i++)
{

printf(" new array element is: %d\t",arr[i]);
}

}
