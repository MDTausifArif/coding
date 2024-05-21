#include <stdio.h>
/*This is our first program which is awesome!*/
int main()
{
    int a = 4;
    // int b= 8.5; //not recommended because 8.5 is not a integer
    float b = 8.5; // float is used for point values ;
    char c = 'u';
    int d = 45;
    int e = 45 + 4;
    printf("the value of a is %d \n", a);
    printf("the value of b is %f \n", b);
    printf("the value of c is %c \n", c);
    printf("sum of a and d is %d \n", a + d);
    printf("sum of a and d is %d \n", e);
    printf("sum of a and d is %d \n", d - a);

    return 0;
}