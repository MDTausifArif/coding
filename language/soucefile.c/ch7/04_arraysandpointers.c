#include<stdio.h>

int main(){
    int marks[3] = {1, 2, 4};
    // &marks[0] => marks -------------> [Important]
    // int* ptr = &marks[0];
    int* ptr = marks;
    *ptr = 89;
    ptr++;
    *ptr = 65;
    ptr++;
    *ptr = 82;

    printf("The marks scored by student 0 is %d \n", marks[0]);
    printf("The marks scored by student 1 is %d \n", marks[1]);
    printf("The marks scored by student 2 is %d \n", marks[2]);
    return 0;
}