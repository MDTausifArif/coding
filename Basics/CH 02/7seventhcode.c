#include <stdio.h>

int main()
{

    // logical operator = || (OR) checks if at least one conditions is true

    float temp = 15;

    if (temp <= 0 || temp >= 30)
    {
        printf("\n The weather is bad!");
    }
    else
    {
        printf("\nThe weather is good!");
    }

    return 0;
}