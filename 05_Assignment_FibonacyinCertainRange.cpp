//Fibonact Series Function//

#include<stdio.h>
long long int fibonacy(int n)
{
	int term1=0,term2=1,sum=0;
	printf("The fibonacy series is:\n");
	for(int i=0;i<n;i++)
	{
	printf("%d\t",sum);	
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
	scanf("%d",&range);
	fibonacy(range);
	
}
