//a) Write a C- program to reverse a number accepted from the user..
#include<stdio.h>  
 int main()    
{    
int number, reverse=0,e;    
printf("Enter a number: ");    
  scanf("%d", &number);    
  while(number!=0)    
  {    
     e=number%10;    
     reverse=reverse*10+e;    
     number/=10;    
  }    
  printf("Reversed Number:\t %d",reverse);    
return 0;  
}   
