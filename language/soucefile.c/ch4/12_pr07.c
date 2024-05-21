#include<stdio.h>

int main(){
    int sum = 0;
    for (int i = 1; i < 11; i++)
    {
        sum += (i*8);
    }
    printf("The value of sum is %d", sum);
    
    return 0;
}