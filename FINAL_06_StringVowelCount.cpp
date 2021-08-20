//6. a) Write a C Program to count
// the number of vowels in a string.
#include<stdio.h>
int main(){
	int i,count=0;
	char s[2000];
	printf("Enter the string:\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		++count;
	}
	printf("The number of Vowel in the string is:\t%d",count);
	return 0;
}
