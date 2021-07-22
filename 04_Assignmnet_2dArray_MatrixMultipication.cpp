//Addition of two matrices.
#include<stdio.h>
int main(){
	int a[20][20],b[20][20],c[20][20],i,j,row,col;
	
	printf("Enter row and column size for matrices");
	scanf("%d%d",&row,&col);
	printf("Enter 1st matrix elements of size %dx%d",row,col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter 2nd matrix elements of size %dx%d",row,col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Resultant 2D array is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
