#include <stdio.h>
int main()
{
  
  //Display this AP : 4,7,10,13,16,......n
   int n;
   printf("Enter a number : ");
   scanf("%d",&n);

   // we are going to use extra variables
   int a= 4;
   for (int i = 1; i <= n; i++)
   {
     printf("%d ",a);
     a = a +2;
   }
   
    return 0;
}