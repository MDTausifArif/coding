#include <stdio.h>
#include <math.h>
int main()
{
    // check the types of triangle

    double A;
    double B;
    double C;

    printf("Enter the side A: ");
    scanf("%lf", &A);

    printf("Enter the side B: ");
    scanf("%lf", &B);

    printf("Enter the side C: ");
    scanf("%lf", &C);

    if (A == B || A == C || B == C)
    {
        printf("This is Isosceles Triangle!\n");
    }
    else if (A == B == C) 
    {
        printf("This is Equilateral Triangle!\n");
    }
    else
    {
        printf("This is Scalene triangle");
    }

    return 0;
}