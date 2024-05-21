#include<stdio.h>

int main(){
    // Store marks of 8 students
    int a1, a2, a3, a4, a5, a6, a7, a8;
    a1 = 45; 
    a2 = 85; 
    a3 = 25; 
    a4 = 49; 
    a5 = 95; 
    a6 = 87;
    a7 = 37;
    a8 = 67;

    // Better way: Store marks of 8 students
    int a[8];
    a[0] = 45; 
    a[1] = 85; 
    a[2] = 25; 
    a[3] = 49; 
    a[4] = 95; 
    a[5] = 87;
    a[6] = 37;
    a[7] = 67;

    printf("The value of student number 0 is %d\n", a[0]);
    printf("The value of student number 1 is %d\n", a[1]);
    printf("The value of student number 2 is %d\n", a[2]);
    printf("The value of student number 3 is %d\n", a[3]);
    printf("The value of student number 4 is %d\n", a[4]);
    printf("The value of student number 5 is %d\n", a[5]);
    printf("The value of student number 6 is %d\n", a[6]);
    printf("The value of student number 7 is %d\n", a[7]);

    return 0;
}