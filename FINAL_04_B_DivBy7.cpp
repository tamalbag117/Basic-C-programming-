//b) Write a C program to print all numbers 
//within a given range such that they 
//are divisible by 7 but not divisible by 3.
#include<stdio.h>
int main(){
int n1,n2,i;
printf("Enter the Range;");
scanf("%d%d",&n1,&n2);
printf("The Numbers are:\n");
for(i=n1;i<=n2;i++){
	if(i%7==0&&i%3!=0){
	printf("%d\t",i);	
	}
	}	
}	

