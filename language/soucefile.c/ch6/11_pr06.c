#include<stdio.h>
void change(int);

int main(){
    int i = 30;
    printf("The value of i before change ran is %d\n", i);
    change(i); 
    printf("The value of i after change ran is %d\n", i);
    return 0;
}

void change(int i){
    i = i * 10;
}