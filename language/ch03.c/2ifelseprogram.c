#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age in years\n");
    scanf("%d", &age);

    if (age >= 70)
    // if(age!=70){
    {
        printf("you are above 70, you cannot drive");
    }
    else
    {
        printf("you can drive\n");
    }

    if(age == 50){
        // if(age=50 error to nhi aagyrga but program break ho jayega bcz ek = ka funtion kuch or hota hai)
        printf("Half century\n");
    }
    return 0;
}