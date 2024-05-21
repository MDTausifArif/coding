#include<stdio.h>
#include<string.h>

typedef struct employee {
    int salary;
    float hike;
    char name[10];
} emp;

int main(){
    int a = 45;
    emp harry = {34, 5.2, "Harry"};
    emp *ptr = &harry;
    printf("The name of Harry is %s\n", harry.name);
    printf("The salary of Harry is %d\n", harry.salary);
    printf("The hike of Harry is %f\n", harry.hike);

    printf("The name of Harry is %s\n", (*ptr).name);
    printf("The salary of Harry is %d\n", (*ptr).salary);
    printf("The hike of Harry is %f\n", (*ptr).hike);

    return 0;
}