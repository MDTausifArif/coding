#include<stdio.h>
#include<malloc.h>

int main(){
    float * ptr; 
    ptr = (float *) malloc(5 * sizeof(float)); 
    ptr[0] = 4.5;
    ptr[1] = 4.6;
    ptr[2] = 4.7;
    ptr[3] = 4.18;
    ptr[4] = 1.8;
    printf("%f ", ptr[2]);

    return 0;
}