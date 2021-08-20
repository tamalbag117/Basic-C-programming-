//b) Write a C Program to search the key value in a 
//set of n values. Print the position
// of the key value if it is a successful search.
#include<stdio.h>
int main(){
	int array[200],size,i,c=0,key,count=0;
	printf("total Number of elemet :\t");
	scanf("%d",&size);
	array[size];
	printf("Enter the elemets:\n");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	printf("Enter the key value:\t");
	scanf("%d",&key);
	for(i=0;i<size;i++){
		if(key==array[i]){
		c=i;
		count=1;	
		}
	}
	if(count==1){
		printf("Key value found in the position of %d",(c+1));
	}
	else{
		printf("Key value not found");
	}
	return 0;
}
