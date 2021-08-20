//1. a) Write a C Program to find the sum of all elements of a matrix.
#include<stdio.h>
int main(){
	int matrix[200][200],c1,r1,sum=0,i,j;
	printf("Enter the row of the matrix:\t");
	scanf("%d",&r1);
	printf("Enter the column of the matrix:\t");
	scanf("%d",&c1);
	matrix[r1][c1];
	printf("\n Enter the matrix element:\n");
	for(i=0;i<c1;i++){
		for(j=0;j<r1;j++){
			scanf("%d",&matrix[i][j]);
			sum+=matrix[i][j];
		}
	}
	printf("so the matrix is :\n");
	for(i=0;i<c1;i++){
		for(j=0;j<r1;j++){
			printf("\t%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n\nThe sum of the all elements in a matrix is:\nsum=\t%d",sum);
}
