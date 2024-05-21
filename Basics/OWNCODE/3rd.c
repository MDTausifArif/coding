#include <stdio.h>

int main() {
    int n, i = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while (i <= n) {
        if (i % 2 == 0) {
            printf("\n%d", i);
        }
        i++;
    }
    return 0;
}