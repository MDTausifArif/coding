#include<stdio.h>

struct complex
{
    float r;
    float c;
};

int main(){
    struct complex v1 = {1.1, .4};
    struct complex v2 = {1.1, 5.4}; 
    printf("%fi + %fj\n", v1.r, v1.c);
    printf("%fi + %fj\n", v2.r, v2.c);
    return 0;
}