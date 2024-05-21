#include <stdio.h>

int main(){
    
    //int a; b=a;
    // error dega bcz b define nhi hai 
    // if int a; int b=a  hoga tb answer aayega bcz b is defined as integers

    int v = 3 ^ 3 ;
    printf("The value of v is %d\n", 3 ^ 3);
    // valid hai but 3^3 9 nhi dega bcz ^ power ka kaam nhi karta hai
    // power k liye pow ka use krna hota hao

    // char dt = '21 Dec 2020'; invalid hai bcz ek baar me ek hi character dena hota hao

    char dt = '2';

    // question.2  what data type will 3.0/8 - 2 return.
    // answer : double or real no. hoga cusor ko kisi bhi decimal wale no. pe le jane k waqt double dekhyega.

   float d = (3.0/8-2);
   printf("the value of d is %f\n", 3.0/8-2);

    return 0;
}