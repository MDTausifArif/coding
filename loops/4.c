#include <stdio.h>
int main(){

 // Print all even number from 0 to 100

 for (int i = 2; i <=100; i =i+2)
 {
   printf("%d " , i);
 }

 // you can also write code like this

 for (int i = 1; i <=100; i++)
  {
     if (i%2 ==0)
     {
        printf("%d" , i);
     }
     else
     {
        printf(" ");
     }
  }

    return 0;
}