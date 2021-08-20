//8.b) Write a C program to accept a string 
//from the user and display it in upper-case.
#include <stdio.h>
int main() {
   char s[1000];
   int i;
   printf("\nEnter a string :\t ");
   gets(s);
   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i]-32;
      }
   }
   printf("\nString in Upper Case:\t %s", s);
   return 0;
}
