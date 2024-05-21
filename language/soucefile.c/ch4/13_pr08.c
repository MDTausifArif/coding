#include<stdio.h>

int main(){
    // What is a factorial?
    // n! = 1 * 2 * 3 * ... * n
    // 4! = 1 * 2 * 3 * 4 = 24
    // 0! = 1 
    int factorial = 1;
    int n = 0;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The value of factorial is %d", factorial);
    return 0;
}