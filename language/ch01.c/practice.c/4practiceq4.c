# include <stdio.h>
# define PI 3.14
int main(){
    float radius, height;

    printf("Enter the radius of the cylinder:");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder:");
    scanf("%f", &height);

    float volume = PI*radius*radius*height;

    printf("Volume of the cylinder:%.2f\n", volume);

    return 0;
}