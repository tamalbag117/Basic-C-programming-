//b) Write a C Program to calculate 
//the average of elements in an array.
#include<stdio.h>
int main(){
	int arr[200],size,i,sum=0;
	float avarage;
	printf("Size of the array :\t");
	scanf("%d",&size);
	arr[size];
	printf("Enter the array element:\t");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	avarage=sum/(float)size;
	printf("Avarage of the Array elemet is :\t%f",avarage);
}
