#include <stdio.h>
int main()
{
  // nested loop = a loop inside of another loop
  
  int rows;
  int columns;
  char symbols;

  printf("Enter no. of rows: ");
  scanf("%d", &rows);

  printf("Enter no. of columns: ");
  scanf("%d", &columns);

  scanf("%c"); // error show kr rha tha isliye iska use kiya gya hai \n k tarah behave krta hai

  printf("Enter a symbol to use: ");
  scanf("%c", &symbols);

  for (int i = 1; i <= rows; i++)
  {
    for(int j = 1; j <= columns; j++)
    {
      printf("%c", symbols);
    }
    printf("\n");
  }


  return 0;  
}