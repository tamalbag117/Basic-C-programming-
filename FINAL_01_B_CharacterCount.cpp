//7.b) Write a C Program to count words and characters in a sentence.
#include<stdio.h>
int main(){
	char sentence[1000];
	int count=0,i,flag1=0;
	printf("enter the sentence:\n");
	gets(sentence);
	for(i=0;sentence[i]!='\0';i++)
	{
		if(sentence[i]==' '||sentence[i]=='\t'||sentence[i]=='\n'){
		++count;
	}
	++flag1;
	}

	printf("\nNumber of words in the sentence is:%d",count+1);
	printf("\nNumber of character in the sentence is:\t%d",flag1);
}
