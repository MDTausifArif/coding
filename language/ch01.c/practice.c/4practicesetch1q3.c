#include <stdio.h>
#define PI 3.14
int main()
{
    float radius;
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);

    float area = PI * radius * radius;

    printf("Area of the circle:%.2f\n", area);

    return 0;
}