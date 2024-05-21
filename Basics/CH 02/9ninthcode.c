#include <stdio.h>
#include <stdbool.h> //for bool operator

int main()
{
    // logical operator = ! (NOT) reserves the states of a condition

    bool sunny = true;

    if (!sunny) // we can also use sunny == true, sunny == 1 or sunnny only all means same
    { 
        printf("\nIt's cloudy outside!");
    }
    else
    {
        printf("\nIt's sunny outside!");
    }

    return 0;
}