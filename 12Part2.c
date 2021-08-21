#include <stdio.h>
#include <math.h>
int main()
{
	int n,m;
	printf("\nEnter The Number : ");
	scanf("%d",&n);
	int j=0;
	int dec=0;
	while(n!=0)
	{
       m=n%10;
       dec+=pow(2,j)*m;
       j++;
       n=n/10;
	}

	printf("\n%d",dec);
	return 0;
}