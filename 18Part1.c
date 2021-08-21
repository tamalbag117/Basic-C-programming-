#include <stdio.h>

int sum(int n)
{
	if(n==0)
		return 0;
	else
		return n+sum(n-1);
}

int main()
{
	int n;

	printf("Enter The N th Term Of the series : ");

	scanf("%d",&n);

	printf("The sum of %d terms is %d ",n,sum(n));

	return 0;
}