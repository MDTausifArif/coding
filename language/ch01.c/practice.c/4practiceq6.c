#include <stdio.h>
int main()
{
    float principal, rate, SI;
    int time;

    printf("Enter the amount of principal:");
    scanf("%f", &principal);

    printf("Enter the interest rate:");
    scanf("%f", &rate);

    printf("Enter periods of time in yeras:");
    scanf("%d", &time);

    SI = (principal * rate * time)/100 ;

    printf("SI: %.2f\n", SI);

    return 0;
}