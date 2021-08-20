/*3. 
b) Write a C program to print the following pattern. 
Accept number of rows as input from use
A
AB
ABC
ABCD
ABCDE*/
#include<stdio.h>
int main(){
	int rows,i,j;
	printf("Enter the number of rows:\t");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++){
		printf("\t%c",(j+64));	
		}
		printf("\n");
	}
}


