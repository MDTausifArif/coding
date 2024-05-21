#include <stdio.h>
int main() 
{
   // Ques; Print hello world 'n' times. Take 'n' as input from user.

   int n;
   printf("Enter a Number : ");
   scanf("%d",&n);

   for (int i=1;i<=n; i++)
   {
     printf("Hello World\n");
   }
   
    return 0;
}