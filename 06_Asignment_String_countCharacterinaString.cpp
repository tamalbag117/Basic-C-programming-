//Write a C Program to count a character in a String.//
#include<stdio.h>
int main()
{
	char name[100];
	printf("Enter string : ");
	scanf("%s",name);
	printf("\nLength: ");
	int i=0;
	while(name[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
	return 0;
}

