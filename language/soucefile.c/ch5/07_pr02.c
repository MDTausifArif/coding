#include<stdio.h>

float c2f(float);
int main(){
    float c = 37;
    float f = c2f(c);
    printf("The value of %f degree Celsius in Fahrenheit is %f", c, f);

    return 0;
}

float c2f(float c){
    float f = (c * 9/5.0) + 32;
    return f;
}