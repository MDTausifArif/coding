#include <stdio.h>
#include <math.h>
int main()
{
    // to find the hypotenuse of right angle triangle

    double A;
    double B;
    double C;

    printf("Enter the side A: ");
    scanf("%lf", &A);

    printf("Enter the side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %lf", C);

  return 0;  
}