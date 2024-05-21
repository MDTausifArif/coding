#include<stdio.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};

void show(struct employee e){
    e.name[0] = 'P';
    printf("The name of Employee is %s\n", e.name);
    printf("The salary of Employee is %d\n", e.salary);
    printf("The hike of Employee is %f\n", e.hike);
    e.hike = 4.55;
}

void showRef(struct employee *e){
    (*e).name[0] = 'P';
    printf("The name of Employee is %s\n", e->name);
    printf("The salary of Employee is %d\n", e->salary);
    printf("The hike of Employee is %f\n", e->hike);
    (*e).hike = 4.55;
}

int main(){
    struct employee harry = {34, 5.2, "Harry"};
    showRef(&harry);
    printf("The name of Employee is %s\n", harry.name);
    printf("The salary of Employee is %d\n", harry.salary);
    printf("The hike of Employee is %f\n", harry.hike);
    return 0;
}