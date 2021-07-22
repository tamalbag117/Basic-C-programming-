//Write a C Program to convert lower case text to upper case text
//without using library function
#include<stdio.h>
 int main()
 {
     char s[100];
     int i = 0;
     printf("Enter a string:\t "); 
     scanf("%[^\n]",s);
     
     while(s[i] != '\0') 
     {
        if(s[i]>='a' && s[i]<='z')
        {
           s[i]=s[i]-32;
        }
        i++;
     }
     
     printf("\nString in Upper Case is:\t "); 
     puts(s);

     return 0;
 }

