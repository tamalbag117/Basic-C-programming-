#include<stdio.h>
int main()
{
    int n,arr[100];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);
    int ec=0;
    int oc=0;
    for(int i=0;i<n;i++)
    {
       if(*(arr+i)%2==0)
        ec++;
    else
        oc++;
    }

    printf("\n%d\n%d",ec,oc);
    return 0;
}

