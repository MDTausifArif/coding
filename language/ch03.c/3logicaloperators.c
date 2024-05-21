#include <stdio.h>

int main(){
       int age;
      // int vip pass = 1;
    printf("Enter your age in years\n");
    scanf("%d", &age);
    
    if (age<=70 && age>=18) //|| vip pass==1)
    {
        printf("you are above 18 and below 70, you can drive\n");
    }
    else
    {
        printf("you cannot drive\n");
    }
    
    

   return 0;
}