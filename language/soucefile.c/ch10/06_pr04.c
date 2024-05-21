#include<stdio.h>

int main(){
    char name1[12];
    int salary1;
    char name2[12];
    int salary2;
    FILE *ptr;
    printf("Enter the value of salary 1\n");
    scanf("%d", &salary1);

    printf("Enter the value of name 1\n");
    scanf("%s", name1);

    printf("Enter the value of salary 2\n");
    scanf("%d", &salary2);

    printf("Enter the value of name 2\n");
    scanf("%s", name2);
 

    ptr = fopen("q6.txt", "w");  
    fprintf(ptr, "%s, %d\n", name1, salary1);  
    fprintf(ptr, "%s, %d", name2, salary2);  

    return 0;
}