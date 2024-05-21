#include <stdio.h>

int main()
{
    int i = 0;
    while (i <= 8)
    {
        if(i==5){
            break;
        }
        printf("The value of i is %d\n", i);
        i++; 
    }
    printf("We are outside the loop now");
    return 0;
}