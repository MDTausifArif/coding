#include<stdio.h>

int main(){
    int i = 5;
    int* ptr = &i;
    printf("The value of i is %d\n", i);
    printf("The value of ptr is %u\n", ptr);
    printf("The address of i is %u\n", &i);
    ptr = ptr + 2;
    printf("The value of ptr after ptr is incremented is %u\n", ptr);  
    if(ptr>&i){
        printf("Ptr is greater");
    }
    else{
        printf("Ptr is not greater");
    }

    return 0;
}