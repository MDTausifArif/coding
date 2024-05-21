#include <stdio.h>
int main()
{
    // swith = A more efficient alternatives to using mant "else if" statements
    //         allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade(use capital alphabet of grade): ");
    scanf("%c", &grade);

    /* if (grade == 'A')
     {
         printf("perfect!\n");
     }
     else if (grade == 'B')
     {
         printf("You did good!\n");
     }
     else if (grade == 'C')
     {
         printf("You did okay!\n");
     }
     else if (grade == 'D')
     {
         printf("At least it's not an F!\n");
     }

     else if (grade == 'F')
     {
         printf("YOU FAILED!\n");
     }
     else
     {
         printf("That's not a valid grade\n");
     }*/

    // ITNA LIKHNE SE ACCHA HAI KI HMLOG 'SWITCH' KA USE KARE

    switch (grade)
    {
    case 'A':
        printf("perfect!\n");
        break;            // Break use krne line sb alag alag print hoga nhi to sb ek saath print hojayega

    case 'B':
        printf("You did good!\n");
        break;

    case 'C':
        printf("You did okay!\n");
        break;

    case 'D':
        printf("At least it's not an F!\n");
        break;

    case 'F':
        printf("YOU FAILED!\n");
        break;

    default: // default ka use sbse last me karenge jb koi case nhi hoga 
        printf("Please Enter only valid grade!");
    }

    return 0;
}