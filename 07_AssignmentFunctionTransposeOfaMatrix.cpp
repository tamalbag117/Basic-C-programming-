//Transpose of a matrix function//
#include<stdio.h>
int transpose(int a[][78] ,int row,int col)
{
	int i,j;
printf("INPUT MATRIX IS==\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("now the transpose is==\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d\t",a[j][i]);
		}
		printf("\n");
	}	
}
int main()
{
	int a[45][78],i=0,j=0,row,col;
	printf("enter the row of the matrix = ");
	scanf("%d",&row);
	printf("enter the col of the matrix = ");
	scanf("%d",&col);
	printf("ENTER THE  NUMBER FOR FIRST MATRIX=\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	transpose( a,row,col);
}
	



