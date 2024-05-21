# include <stdio.h>
int main()
{
    int length, width;
    printf("Enter the length of the rectangle:");
    scanf("%d", &length);
    printf("Enter the width of the rectangle:");
    scanf("%d", &width);

    int area = length*width;
    printf("Area of the rectangle:%d\n",area);
    
    return 0;

    
}