#include<stdio.h>

int main()
{
	int n;
	printf("Enter The Number : ");
    scanf("%d",&n);
    int sum=0;
    for (int i = 1; i < n; ++i)
    {
    	if(n%i==0)
    		sum+=i;
    }
    if(sum==n)
    	printf("\nThe Number is Perfect");
    else
    	printf("\nThe number is not Perfect");
    return 0;
}