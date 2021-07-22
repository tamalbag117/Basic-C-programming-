//Write a C Program to read an array of names and to set them in
//alphabetical order.
#include<stdio.h>
#include<string.h>
main()
{
int i,j,n,r;
char str[100][100],s[100];
printf("Enter number of names:\t");
scanf("%d",&n);
printf("Enter names in any order:\n");
for(i=0;i<n;i++)
{
 scanf("%s",str[i]);
}


for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
   r=strcmp(str[i],str[j]);
   if(r>0)
   {
    strcpy(s,str[i]);
    strcpy(str[i],str[j]);
    strcpy(str[j],s);
   }
  
 }

}
printf("\nThe alphabetical ordar is:\n");
for(i=0;i<n;i++)
{
 printf("%s\n",str[i]);
}
return 0;
}
