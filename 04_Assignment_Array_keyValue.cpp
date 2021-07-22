//Write a C Program to search the key value in a set of n
//values. Print
//the position of the key value if it is a successful search.
#include<stdio.h>
int main()
{
int size,i,key,key1=0,d=0;
printf("enter the array size:\n");
scanf("%d",&size);
int arr[size];
printf("enter array elements:\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("the key value is:");
scanf("%d",&key);
for(i=0;i<size;i++)
{
if(key==arr[i])
{
key1=arr[i];
d=i;
printf(" in the set of %d \n the keyvalue values is %d\n in the position of%d\n",size,key1,d+1);
}
}
if(d==0)
{
printf("there is no key value");

}
}
