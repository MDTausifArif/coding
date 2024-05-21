#include<stdio.h>

int main(){
    int i;
    FILE *ptr;
    ptr = fopen("q1.txt", "r");
    fscanf(ptr, "%d", &i);
    printf("The value of i is %d\n", i);
    fscanf(ptr, "%d", &i);
    printf("The value of i is %d\n", i);
    fscanf(ptr, "%d", &i);
    printf("The value of i is %d\n", i);
    return 0;
}