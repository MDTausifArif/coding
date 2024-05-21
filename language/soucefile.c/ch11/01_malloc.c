#include<stdio.h>
#include<malloc.h>

int main(){
    int * ptr;
    int n;
    scanf("%d", &n);
    ptr = (int *) malloc(n * sizeof(int));
    ptr[0] = 45;
    ptr[1] = 46;
    ptr[2] = 47;
    ptr[3] = 48;
    printf("%d ", ptr[2]);

    return 0;
}