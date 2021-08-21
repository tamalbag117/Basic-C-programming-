#include <stdio.h>

int fact(int n)
{
    int f=1;
    for(int i=2;i<=n;i++)
        f=f*i;
    return f;
}

int main() {
    int n;
    scanf("%d",&n);
    //int s=0;
    
    int k=n;
     int s=0;
    while(k!=0)
    {
        int m=k%10;
        s+=fact(m);
        k=k/10;

    }
    if(s==n)
      printf("%d is a Strong Number",n);
  else
    printf("\nNot a strong Number ");

    return 0;
}