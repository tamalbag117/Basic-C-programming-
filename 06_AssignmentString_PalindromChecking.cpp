//Write a C Program to check for palindrome String without using
//library function.
#include<stdio.h>
int main()
{
	char name[500];
	int i,len=0;
	printf("Enter the string: ");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;i<len/2;i++)
	{
		if(name[i]!=name[len-i-1])
		{
		printf("\n String is Not Palindrome ");
		break;
	    }
	}
	if(i==len/2)
	printf("\n String is Palindrome");
	return 0;
}

