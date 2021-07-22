/*Write a C Program using pointer to copy a string to another string
variable*/
#include<stdio.h>
void copy_string(char*, char*);

void copy_string(char *arr,char *main)
{
    while(*main)
    {
        *arr=*main;        
        main++;        
        arr++;
    }    
    *arr='\0';
}

int main()
{
    char main[100],arr[100];    
    printf("Enter string: ");    
    gets(main);    
    copy_string(arr,main);    
    printf("After copying string is: %s",arr);    
    return 0;
}

