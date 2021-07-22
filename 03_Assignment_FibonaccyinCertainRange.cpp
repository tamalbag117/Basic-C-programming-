// Write a C Program to find Fibonacci series within a certain range.
#include<stdio.h>
long long int fibonacy(int n1,int n2)
{
	int term1=0,term2=1,sum=0;
	printf("The fibonacy series is:\n");
	for(int i=0;i<n2;i++)
	{
	if(sum>n1&&sum<n2){
	printf("%d\t",sum);	
    }
	term1=term2;
	term2=sum;
	sum=term1+term2;
	}
return sum;	
}
int main()
{
	int range,n1,n2;
	printf("The Range is:\n");
	scanf("%d%d",&n1,&n2);
	fibonacy(n1,n2);
	
}
