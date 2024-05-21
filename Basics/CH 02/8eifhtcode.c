#include <stdio.h>
#include <stdbool.h> //for bool operator

int main()
{
    // logical operator = && (AND) checks if two conditions are true

    float temp = 5;
    bool sunny = true;

    if (temp >= 0 && temp <= 30 && sunny)
    { // here sunny shows true we can also write sunny = true
        printf("\n The weather is good!");
    }
    else
    {
        printf("\nThe weather is bad!");
    }

    return 0;
}