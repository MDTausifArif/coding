#include <stdio.h>
int main()
{
  //dont understand
  
  // while loop = checks a conditions, THEN executes a block of code if condition is true 
  // do while loop = always executes a block of code once, THEN checks a codition

  int number = 0;
  int sum = 0;

  do
  {
    printf("Enter a # above 0: ");
    scanf("%d", number);
    if (number > 0)
    {
      //sum = sum + number;
      sum += number;
    }    
  }
  while (number > 0);

  printf("sum: %d", sum);

  return 0;  
}