#include<stdio.h>

int main(){
    int age = 45;
    int placeCode = 12;

    // Scenario 1
    if(age>48){
        printf("You are eligible to drive");
    }
    else if(age>15){
        printf("You are not eligible to drive but we will check for a toy vehicle for you!");
    }
    else{
        printf("Sorry you are a kid and cannot drive");
    }

    // Scenario 2
    // if(age>18){
    //     printf("You are eligible to drive\n");
    // }
    // if(age>15){
    //     printf("You are not eligible to drive but we will check for a toy vehicle for you!\n");
    // }
    // if(age<=15){
    //     printf("Sorry you are a kid and cannot drive\n");
    // }
    return 0;
}