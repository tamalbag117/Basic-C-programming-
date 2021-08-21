#include <stdio.h>

int main()
{
    int n,arr[100];
    printf("Enter any number to print in words: ");
    scanf("%d",&n);
    int c=0,j=0;
    while(n!=0)
    {
        //c++;
        arr[j]=n%10;
        j++;
        n=n/10;
    }
    
   j--;

    
    while(j>=0)
    {
        switch(arr[j])
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
       j--;
    }

   return 0;
}