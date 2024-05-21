#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};

int main(){
    int a = 45;
    struct employee facebook[3];
    printf("Enter the details for Harry\n");
    printf("Enter name for Harry\n");
    scanf("%s", facebook[0].name);
    printf("Enter salary for Harry\n");
    scanf("%d", &facebook[0].salary);
    printf("Enter hike for Harry\n");
    scanf("%f", &facebook[0].hike);


    printf("Enter the details for rohan\n");
    printf("Enter name for rohan\n");
    scanf("%s", facebook[2].name);
    printf("Enter salary for rohan\n");
    scanf("%d", &facebook[2].salary);
    printf("Enter hike for rohan\n");
    scanf("%f", &facebook[2].hike);


    printf("Enter the details for Kishan\n");
    printf("Enter name for Kishan\n");
    scanf("%s", facebook[1].name);
    printf("Enter salary for Kishan\n");
    scanf("%d", &facebook[1].salary);
    printf("Enter hike for Kishan\n");
    scanf("%f", &facebook[1].hike);

    
    printf("The name of Harry is %s\n", facebook[0].name);
    printf("The salary of Harry is %d\n", facebook[0].salary);
    printf("The hike of Harry is %f\n", facebook[0].hike);

    printf("The name of Rohan is %s\n", facebook[2].name);
    printf("The salary of Rohan is %d\n", facebook[2].salary);
    printf("The hike of Rohan is %f\n", facebook[2].hike);

    printf("The name of Kishan is %s\n", facebook[1].name);
    printf("The salary of Kishan is %d\n", facebook[1].salary);
    printf("The hike of Kishan is %f\n", facebook[1].hike);



    return 0;
}