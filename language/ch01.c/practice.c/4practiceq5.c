#include <stdio.h>
int main(){
    float celcius, fahrenheit;

    printf("Enter temperature in celcius:");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9 / 5) + 32;

    printf("%.2f celcius is equal to %.2f fahrenheit.\n", celcius, fahrenheit);

    return 0;
}