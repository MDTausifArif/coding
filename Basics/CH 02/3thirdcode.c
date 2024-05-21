#include <stdio.h>
int main()
{

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are now signed up!");
    }
    else if (age == 0)
    {
        printf("You cannot sign up! You were just born!");
    }
    else if (age < 0)
    {
        printf("You are not born yet!");
    }
    else
    {
        printf(" You are to young to sign up!");
    }

    return 0;
}