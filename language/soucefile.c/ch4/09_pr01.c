#include<stdio.h>

int main(){
    // int n = 3;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
    return 0;
}