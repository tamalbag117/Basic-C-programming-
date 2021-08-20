//2.b) Write a C program to print the prime numbers up to a given range
#include<stdio.h>
void primeNumber(int n1,int n2){
	int j=0,i=0,count=0;
	
	for(j=n1;j<=n2;j++){
            count=0;
	    for(i=2;i<=j/2;i++){
		if(j%i==0){
		count=1;
		break;
		}
	}
	if(count==0){
	printf("%d\t",j);
	}
    }
    //return 1;
}
int main()
{
	int r1,r2;
	printf("Enter the Range :\n");
	scanf("%d%d",&r1,&r2);
	printf("in the given Range of %dto%d\nprime numbers are:\n",r1,r2);
	primeNumber(r1,r2);
	return 0;
}

