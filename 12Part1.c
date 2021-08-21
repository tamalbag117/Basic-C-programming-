#include <stdio.h>

int main()
{
	int n,x;
	printf("\nEnter The Value ox X : ");
	scanf("%d",&x);
	printf("\nEnter The Value ox N : ");
	scanf("%d",&n);
	int sum=0;
	for (int i = 1; i <=n; ++i)
	{
		sum+=x-(i-1);
	}

	printf("\n%d",sum);
}