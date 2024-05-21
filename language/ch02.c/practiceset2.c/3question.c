#include <stdio.h>

int main(){
    
    // question. write a program to check whether a number is divisible by 97 or not.
      int num;
      printf("Enter the number\n");
      scanf("%d", &num);

      printf("DIVISIBILITY test returns: %d\n", num%97);

      // agar zero aayega iska mtlb divisible hai or nhi aayega tb wo nhi hai.
    return 0;
}