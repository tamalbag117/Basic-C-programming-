#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter The Number : ");
	scanf("%d",&n);
	int sum=0;
	int k=1;
	for(int i=1;i<=n;i++)
	{
		sum+=i*k;
		k*=-1;
	}

	printf("\n%d",sum);
	return 0;
}