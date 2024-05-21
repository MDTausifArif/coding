#include <stdio.h>

int main()
{
    //int a = 4;       // type decelaration instruction
    int a = 4, b, c; // type decelaration instruction
    b = c = a;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %d\n", c);

    // float b = a + 8.9; // error hoga kyunki a define ni hai a agar upar hota tb code run karta
    // float a = 1.1;

    // printf("The value of c is %f\n", b);

    return 0;
}
