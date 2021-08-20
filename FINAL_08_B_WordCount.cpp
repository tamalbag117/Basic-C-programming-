//b) Write a C program to read a string and count the number of words.
#include<stdio.h>
int main(){
	char sentence[1000];
	int count=0,i;
	printf("enter the sentence:\n");
	gets(sentence);
	for(i=0;sentence[i]!='\0';i++)
	{
		if(sentence[i]==' '||sentence[i]=='\t'||sentence[i]=='\n')
		count++;
	}
	printf("Number of words in the sentence is:\t%d",count+1);
}
