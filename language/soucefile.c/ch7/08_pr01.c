#include<stdio.h>

int main(){
    int arr[10];
    arr[0] = 7;
    arr[1] = 5;
    arr[2] = 8;
    int * ptr = arr; // int * ptr = &arr[0];
    printf("The value at ptr is %d\n", *ptr);
    ptr = ptr + 2;
    printf("The value at ptr is %d\n", *ptr);


    return 0;
}