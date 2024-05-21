#include <stdio.h>

int main()
{
    // explain step by step evaluation of 3*x/y - z+k , where x=2 y=3 z=3 and k=1

    int x = 2, y = 3, z = 3, k = 1;

    int a = 3 * x / y - z + k;
    printf("the value of a is %d\n", 3 * x / y - z + k);

    // left to right associative 3*x = 3*2= 6
    // uske baad 6/y = 6/3= 2
    // then 2 - z = 2-3= -1
    // then -1 + k = -1 + 1 = 0
    // answer zero aayega  done.

    // ques.5.
    //3.0 + 1 will be 
    //ans. floating point number or float

    return 0;
}