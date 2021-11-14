#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    char newstr[30];
    int n;
    scanf("%s",str);
    scanf("%d",&n);
    int len=strlen(str);
    int idx=0,p=0;
    while(n--)
    {
        char dir;
        int t;
        scanf("\n%c %d",&dir,&t);
        if(dir == 'L')
        {
            idx+=t;
        }
        else
        {
            idx-=t;
        }
        idx = idx % len;
        if(idx < 0)
        {
            idx = len + idx;
        }
        newstr[p]=str[idx];
        p++;
    }
    newstr[p]='\0';
    printf("%s",newstr);
}