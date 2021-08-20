//selection short
#include<stdio.h>
int main(){
	int a[200],n,minIndex,i,j,t;
	printf("size of the array:\t");
	scanf("%d",&n);
	a[n];
	printf("Enter array elemet:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-2;i++){ 
		minIndex=i;
		for(j=i+1;j<n;j++)
		{
			if(a[minIndex] > a[j])
			   minIndex=j;
		}
		t=a[i];
		a[i]=a[minIndex];
		a[minIndex]=t;
	}
	printf("After Ascending sort: ");
	for(i=0;i<n;i++)
	  printf("%d ",a[i]);
	  
	return 0;
}
