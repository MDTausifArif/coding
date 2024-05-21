#include <stdio.h> 

int main()
{
   // Display AP : 1,3,5,7.......n

   int n;
   printf("Enter a number : ");
   scanf("%d",&n);

   for (int i=1; i<= 2*n - 1; i = i+2)
   {
     printf("%d ",i);
   }
   



    return 0;
}