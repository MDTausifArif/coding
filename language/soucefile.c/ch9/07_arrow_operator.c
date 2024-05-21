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
    struct employee *ptr = &harry;
    printf("The name of Harry is %s\n", harry.name);
    printf("The salary of Harry is %d\n", harry.salary);
    printf("The hike of Harry is %f\n", harry.hike);

    printf("The name of Harry is %s\n", (*ptr).name);
    printf("The salary of Harry is %d\n", (*ptr).salary);
    printf("The hike of Harry is %f\n", (*ptr).hike);

    printf("The name of Harry is %s\n", ptr->name);
    printf("The salary of Harry is %d\n", ptr->salary);
    printf("The hike of Harry is %f\n", ptr->hike);

    return 0;
}