#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};

int main(){
    int a = 45;
    struct employee harry, kishan, rohan;
    printf("Enter the details for Harry\n");
    printf("Enter name for Harry\n");
    scanf("%s", harry.name);
    printf("Enter salary for Harry\n");
    scanf("%d", &harry.salary);
    printf("Enter hike for Harry\n");
    scanf("%f", &harry.hike);


    printf("Enter the details for rohan\n");
    printf("Enter name for rohan\n");
    scanf("%s", rohan.name);
    printf("Enter salary for rohan\n");
    scanf("%d", &rohan.salary);
    printf("Enter hike for rohan\n");
    scanf("%f", &rohan.hike);


    printf("Enter the details for Kishan\n");
    printf("Enter name for Kishan\n");
    scanf("%s", kishan.name);
    printf("Enter salary for Kishan\n");
    scanf("%d", &kishan.salary);
    printf("Enter hike for Kishan\n");
    scanf("%f", &kishan.hike);

    
    printf("The name of Harry is %s\n", harry.name);
    printf("The salary of Harry is %d\n", harry.salary);
    printf("The hike of Harry is %f\n", harry.hike);

    printf("The name of Rohan is %s\n", rohan.name);
    printf("The salary of Rohan is %d\n", rohan.salary);
    printf("The hike of Rohan is %f\n", rohan.hike);

    printf("The name of Kishan is %s\n", kishan.name);
    printf("The salary of Kishan is %d\n", kishan.salary);
    printf("The hike of Kishan is %f\n", kishan.hike);



    return 0;
}