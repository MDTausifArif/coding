#include<stdio.h>
#include <string.h>

int main(){
    char source[56] = "Harryy";
    char target[] = " is a nice boy";
    strcat(source, target);
    // source = source + target // Roughly

    printf("The source string is %s", source);
    return 0;
}