#include<stdio.h>  
int main()   
    { 
        float f, c;  
        printf("\nEnter the Temparature : ");
        scanf("%f",&c);  
        f=((9*c)/5)+32;  
        printf("\nTemperature in Celsius is : %.2f",f);  
        return 0;  
    }  