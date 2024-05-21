#include<stdio.h>
#include<string.h>

int main(){
    char st[6];
    printf("Enter the string of length 5 you want to input using percent c");
    for (int i = 0; i < 5; i++)    {
        scanf("%c", &st[i]); 
        fflush(stdin);
    }
    st[5] = '\0';
    printf("Comparing this string harry gives %d", strcmp("harry", st));
    return 0;
}