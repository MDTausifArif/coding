#include <stdio.h>
int main()
{
   // Print the table of 'n'. Here 'n' is a integer which user will  input

   int n;
   printf("Enter a number : ");
   scanf("%d",&n);

   for (int i = n; i <= n *10; i = i+n)
   {
     printf("%d\n", i);
   }
 
    return 0;
}