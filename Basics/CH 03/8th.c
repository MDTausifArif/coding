#include <stdio.h>
#include <string.h>
int main()
{
  // while loop = repeats a section of code possibly unlimited times.
  // WHILE some conditions remains true
  // a while loop might not execute at all

  char name[25];

  printf("\nWhat is your name?");
  fgets(name, 25, stdin);        // fgets is use in the place of scanf
  name[strlen(name)- 1] = '\0';   // ch 01 lesson 9
  
  while (strlen(name) == 0)
  {
    printf("\nYou did not enter your name ");
    printf("\nWhat is your name?");
    fgets(name, 25, stdin); 
    name[strlen(name)- 1] = '\0';

  }
  

  printf("Hello %s", name);


  return 0;  
}