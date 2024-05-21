#include <stdio.h>
#include <string.h>  // advance we will see in next class see line 12
int main()
{
char name [25]; //bytes
   int age;

   printf("\nWhat is your name!\n");
   //scanf("%s", &name);          // agr white space dete hain to age skip kr deta hai
   fgets(name, 25, stdin);        // name then size then stdin this is a format for fgets
                                  // fgets use krne se inline bhi print kr deta hai hai 
    name[strlen(name)-1] = '\0';  // (isse inline print nhi hota hai)advance we will see in upcoming class


   printf("How old are you!\n");
   scanf("%d", &age);

   printf("\nHello %s,how are you!", name);
   printf("\nyou are %d years old", age);


  return 0;  
}
