#include<stdio.h>
int sum (int, int);

int main(){
    int x = 5;
    int y = 4;
    printf("The value of x + y is %d\n", sum(x, y));
    printf("The value of x and y is %d and %d", x, y);
    return 0;
}

int sum(int a, int b){
    a = 56;
    return a + b;
}