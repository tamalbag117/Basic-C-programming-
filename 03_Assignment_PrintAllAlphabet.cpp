//printallalphabet//
#include<stdio.h>
int main()
{
	int X;
	printf("\n small Alphabets:\n");
	for(X=97;X<=122;X++)
	printf("%c\t ",(char)X);
	printf("\n Capital Alphabets:\n");
	for(X=65;X<=90;X++)
	printf("%c\t ",(char)X);
}
