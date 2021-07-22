//bubble short//
#include<stdio.h>
int main(){
	int a[6]={8,6,30,4,1,9},n=6,i,j,t;
	
	for(i=0;i<=n-2;i++){ 
		
		for(j=0;j<n-1-i;j++)
		{
			if(a[j] < a[j+1]){ 
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("After sort: ");
	for(i=0;i<n;i++)
	  printf("%d ",a[i]);
	return 0;
}
