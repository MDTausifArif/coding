#include<stdio.h>

double average(int, int, int);

int main(){
    printf("The average of 1, 4 and 3 is %lf", average(1, 4, 3));
    return 0;
}

double average(int a, int b, int c){
    return (a + b + c)/3.0;
}