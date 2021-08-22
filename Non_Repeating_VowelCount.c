//Write a C Program to counts vowels in a String.//
#include<stdio.h>
int main()
{
	int i,j,c1=0,c2=0,c3=0,c4=0,c5=0,count=0;
	char str[100];
	printf("Enter a string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='A')c1=1;
	  else if(str[i]=='e'||str[i]=='E')c2=1;
    else if(str[i]=='i'||str[i]=='I')c3=1;
    else if(str[i]=='o'||str[i]=='O')c4=1;
    else if(str[i]=='u'||str[i]=='U')c5=1; 
  }
  count=c1+c2+c3+c4+c5;
	printf("Total non repvowels in %s string is: %d",str,count);
	return 0;
}
