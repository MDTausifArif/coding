#include <stdio.h>
int main()
{
   // print all odd numbers between 0 to 100

   for (int i = 0; i <= 100; i++)
   {
     if (i%2==1)
     {
        printf("%d ", i);
     }
     
   }
    // is code ko aise bhi likh sakte hai 

    for (int i = 1; i <= 100; i=i+2)
    {
        printf("%d ", i);
    }
    




    return 0;
}