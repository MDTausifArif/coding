#include <stdio.h>

// ternary operations

int findMax(int x, int y)
{
  /*
  if (x > y)
  {
    return x;
  }
  else
  {
    return y;
  }
  */
  // instead of using big code we can use ternary operations
  // ternary operations
  return (x > y) ? x : y;
  
}
int main()
{
  // ternary operator = shortcut to if/else when assigning / returning a value 
  // (condition) ? value if true : value if false


  int max = findMax(23, 14);

 printf("%d", max);


  return 0;  
}