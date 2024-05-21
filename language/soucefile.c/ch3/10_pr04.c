#include <stdio.h>

int main()
{
    int year = 3444;
    if (year % 4 != 0)
    {
        printf("It is a common year");
    }
    else if (year % 100 != 0)
    {
        printf("it is a leap year");
    }
    else if (year % 400 != 0)
    {
        printf("it is a common year");
    }
    else
    {
        printf("It is a leap year");
    }
    return 0;
}