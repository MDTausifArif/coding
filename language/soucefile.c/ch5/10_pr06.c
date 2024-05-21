#include<stdio.h>

// sum(n) = 1 + 2 + .... (n-1) + n
// sum(n) = sum(n-1) + n
int sum(int);

int main(){
    printf("Sum of first 3 natural numbers is %d", sum(3));
    return 0;
}

int sum(int n){
    if(n ==1){
        return 1;
    }
    return sum(n-1) + n;
}