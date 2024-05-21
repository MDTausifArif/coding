#include<stdio.h>

int main(){
    char name[] = "Harry";
    for (int i = 0; i < 5; i++)
    {
        name[i] ++;
    }
    printf("The string is %s", name);
    
    return 0;
}