#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int l=0,ml=0,c=0,st;
    int arr2[n];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            l++;
            if(l>=ml)
            {
               ml=l;
               st=(i+1)-l;   
            }
        }

        else
        {
            if(l==ml)
            {
               arr2[c]=st;
               c++;
            }
            l=0;
        }

    }

    for(int i=0;i<c;i++)
    {
        printf("%d ",arr[st+i]);
    }

    return 0;
}