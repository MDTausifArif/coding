#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};

int main(){
    int a = 45;
    struct employee harry = {34, 5.2, "Harry"};

    printf("The name of Harry is %s\n", harry.name);
    printf("The salary of Harry is %d\n", harry.salary);
    printf("The hike of Harry is %f\n", harry.hike);

    return 0;
}