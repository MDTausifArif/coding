#include<stdio.h>
#include <string.h>

int main(){
    char source[] = "aa";
    char target[] = "aa";  

    printf("The strcmp returns %d", strcmp(source, target));
    return 0;
}