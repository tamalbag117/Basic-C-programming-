#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	char ch;
	fptr=fopen("Exam.txt","w");
	if(fptr==NULL)
	{
		printf("\nFile does not exist : ");
	}
    while((ch=getchar())!='.')
    	fputc(ch,fptr);
    fclose(fptr);
    return 0;
}