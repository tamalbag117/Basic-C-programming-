#include<stdio.h>
#include <limits.h>
int main()
{
    int n,arr[100];
    int m=INT_MIN;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(m<arr[i])
            m=arr[i];
    }
    printf("\n%d",m);
    return 0;
}
