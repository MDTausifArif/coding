#include <stdio.h>
        
// Return statement

double square(double x)
{
  //double result = x * x;
  //return result;
  return x * x;
  // yahn pe hm dono use kr sakte hain direct result or alag alag
}
int main()
{
  double x = square(3.14);
  printf("%lf", x);

  return 0;  
}