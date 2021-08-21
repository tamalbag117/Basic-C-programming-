#include<stdio.h>

int pro(int n)
{
	if(n==0)
		return 1;
	else
		return n*pro(n-1);
}

int main()
{
	printf("\nThe product of First 10 Natural Numbers : %d",pro(10));
	return 0;
}