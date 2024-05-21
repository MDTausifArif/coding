#include<stdio.h>
#include<malloc.h>

int main(){
    int * ptr; 
    ptr = (int *) malloc(6 * sizeof(int)); 
    ptr[0] = 1;
    ptr[1] = 4;
    ptr[2] = 11;
    ptr[3] = 5;
    ptr[4] = 88;
    ptr[5] = 21;
    printf("The value at index %d is %d\n", 0, ptr[0]);
    printf("The value at index %d is %d\n", 1, ptr[1]);
    printf("The value at index %d is %d\n", 2, ptr[2]);
    printf("The value at index %d is %d\n", 3, ptr[3]);
    printf("The value at index %d is %d\n", 4, ptr[4]);
    printf("The value at index %d is %d\n", 5, ptr[5]);

    return 0;
}