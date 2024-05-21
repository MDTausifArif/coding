#include<stdio.h>

void avgAndSum(float, float, float * , float * );
int main(){
    float a = 6;
    float b = 423;
    float sum, avg;
    avgAndSum(a, b, &sum, &avg);
    printf("The value of sum is %f and the value of average is %f", sum, avg);
    return 0;
}

void avgAndSum(float a, float b, float * ptr1, float * ptr2){
    *ptr1 = a + b;
    *ptr2 = (a + b)/2;
}