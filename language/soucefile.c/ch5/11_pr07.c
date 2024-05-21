#include<stdio.h>

void star(int);
int main(){
    star(4);
    return 0;
}

void star(int n){
    for (int i = 0; i < n; i++)
    {
        // Print 2i+1 stars. 2i+ 1 will yield 1, 3, 5, 7, 9... for i=0, 1, 2..
        for (int j = 0; j < (2*i + 1); j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}