#include <stdio.h>

// arguments and parameters 

void birthday(char name[], int age) // always remember data types of arguments
{
    printf("\nHappy birthday to dear %s!", name);
    printf("\nYou are %d years old!", age);
}
int main()     // sahi se ..
{
    char name[] = "Bro";
    int age = 21;
    birthday(name, age); // here name and age are arguments


    return 0;
}