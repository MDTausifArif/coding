#include<stdio.h>

int main(){
    float marks[3] = {3.4, 23.7, 5.3};
    for(int i = 0; i < 3; i++){
        printf("The marks scored by student %d is %f \n", i+1, marks[i]);
    }
    return 0;
}