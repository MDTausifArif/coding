#include <stdio.h>
#include <ctype.h>

// temperature converts from celcius to farenheit or vice-versa

int main()
{

    char unit;
    float temp;

    printf("\nIs the temperature is (F) or (C)?:");
    scanf("%c", &unit);

    unit = toupper(unit); // upper or lower case both accepted

    if (unit == 'C')
    {
        //printf("The temp is currently in C");
        printf("\nEnter the temp in celcius; ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in farenheit is %.1f", temp);

    }
    else if (unit == 'F')
    {
        //printf("The temp is currently in F");
        printf("\nEnter the temp in Farenheit; ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in celcius is %.1f", temp);
    }
    else
    {
        printf("\n%c is not a valid unit of measurement! please enter valid temp unit", unit);
    }

    return 0;
}