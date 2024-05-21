#include <stdio.h>

int main()
{
    int a = 4;
    int b = 8;
    int z = b * a;
    // b * a = z illegal
    // z = b * a or a * b dono legal hai as shown above
    printf("The value of a + b is: %d\n", a + b);
    printf("The value of a - b is: %d\n", a - b);
    printf("The value of a * b is: %d\n", a * b);
    printf("The value of a / b is: %d\n", a / b);
    printf("The value of z is: %d\n", z);

    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5 % -2);

    // no operator is assumed to be present like 4.5 or (4)(5), etc.
    // int i = ab -----> invalid wo ab variable ko khojne lgega
    // int i = a * b ------> valid multiplication ho jayega

    // there is no operator to perform exponentiation in c
    // printf("The value of 4 ^ 3 is %d\n", 4^5); error show  nhi karega bcz ^ c me ^ matlab kuch or hota hai.
    // ^ logica operator hai

    printf("The value of 4 to the power 3 is %f\n", pow(4, 5));
    // pow ka value real number output dega

    printf("The value of 6 + 5 is %d\n", 6 + 5);
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
    printf("The value of 6.4 + 5.6 is %f\n", 6.4 + 5.6);

    // int and int ---> int
    // int and float ---> float
    // float and float ---> float

    // TYPE CONVERSION

    printf("The value of 5/2 is %d\n", 5 / 2);
    // answer two dega bcz int and int k beech ka operation hai
    printf("The value of 2/5 is %d\n", 2 / 5);
    // answer 0 dega bcz int and int k beech ka operation hai
    printf("The value of 5.0/2 is %f\n", 5.0 / 2);
    // iska value 2.5 dega

    //QUIZ:

    printf("The value of k 3.0/9 is %f\n", 3.0/9);
    // solution 0.333333 aa rha hai i have checked it before
    

    return 0;
}