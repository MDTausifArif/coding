#include <stdio.h>
int main()
{
   // calculating circumference and area of a circle

   const double PI = 3.14159;
   double radius;
   double circumference;
   double area;

   printf("\nEnter radius the of a circle;");
   scanf("%lf", &radius);

   circumference = 2 * PI * radius;
   area = PI * radius * radius;

   printf("\ncircumference: %lf", circumference);
   printf("\narea: %lf", area);

  return 0;  
}