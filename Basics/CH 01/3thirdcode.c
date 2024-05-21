#include <stdio.h>
int main()
{
 /* variables = Allocated space in memory to store a valur.
                we refer to a variables name to access the stored value.
                That variable now behaves as if it was the value it contains.
                BUT we need to declare what type of data we are storing.
 */

  int x; //declaration
  x = 123; // initialization 
  int y = 23; // declaration + initialization

  int age = 10; // integer
  float percentage = 2.33; // decimal or floating point numbers
  char grade = 'C'; // single character
  char name []= "Bro"; // array of characters

  printf("Hello %s\n", name);
  printf("you are %d years old\n", age);
  printf("Your average grade is %c\n", grade);
  printf("Your percentage is %f\n", percentage);

  // here you can also use %.2f that gives two digit after decimal
  printf("Your percentage is %.2f\n", percentage);
  




  return 0;

}