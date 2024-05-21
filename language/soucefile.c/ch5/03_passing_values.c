#include<stdio.h>

int sum(int, int, int);

int main(){
    int a = 5;
    int b = 7;
    int c = 88;
    printf("The value of 5 + 7 is %d\n", sum(a, b, c));
    printf("The value of c is %d", c);
    return 0;
}

int sum(int a, int b, int c ){
    c = 9;
    return a + b;
}