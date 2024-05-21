#include<stdio.h>

struct twoDimVector
{
    int x;
    int y;
};

int main(){
    struct twoDimVector v1 = {1, 4};
    struct twoDimVector v2 = {11, 54}; 
    printf("%di + %dj", v1.x, v1.y);
    return 0;
}