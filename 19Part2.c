#include <stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	/* code */
	FILE *f,*d;
	char ch;
	if(argc!=3)
	{
		printf("\nInvalid Argument");
		exit(1);
	}
	f=fopen(argv[1],"r");
	d=fopen(argv[2],"w");
	if(!f||!d)
	{
		printf("\nFile Not Found");
		exit(1);
	}
	ch=fgetc(f);
	while(ch!=EOF)
	{
		fputc(ch,d);
		ch=fgetc(f);
	}

	printf("\nFile Copied Successfully");
	fclose(f);
	fclose(d);
	return 0;
}