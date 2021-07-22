#include<stdio.h>

int main(){
	int i,j,n,sumMajor=0,sumMinor=0;
	printf("Entersize for matrices");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter 1st array elements of size %dx%d",n,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		sumMajor = sumMajor + a[i][i];  
		sumMinor= sumMinor + a[i][n-1-i]; 
	}
	
	printf("Sum Major=%d\nSumMinor=%d",sumMajor,sumMinor);
	return 0;
}
