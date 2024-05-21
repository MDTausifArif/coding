#include <stdio.h>
int main()
{

int E1;
int E2;
int E3;
int E4;
int E5;
int E6;
int E7;
int E8;
int E9;
int determinant;

printf("Enter the E11 of matrix: ");
scanf("\n%d", &E1);

printf("Enter the E12 of matrix: ");
scanf("\t%d", &E2);

printf("Enter the E13 of matrix: ");
scanf("\t%d", &E3);

printf("Enter the E21 of matrix: ");
scanf("\t%d", &E4);

printf("Enter the E22 of matrix: ");
scanf("\t%d", &E5);

printf("Enter the E23 of matrix: ");
scanf("\t%d", &E6);

printf("Enter the E31 of matrix: ");
scanf("\t%d", &E7);

printf("Enter the E32 of matrix: ");
scanf("\t%d", &E8);

printf("Enter the E33 of matrix: ");
scanf("\t%d", &E9);


determinant = E1*((E5 - E9)*(E6 - E8)) - E2*((E4 - E9)*(E6 - E7)) + E3*((E4 - E8)*(E5 - E7));

printf("Determinant : %d", determinant);

  return 0;  
}