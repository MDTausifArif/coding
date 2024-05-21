#include<stdio.h>

int main(){
    int a1=3331;
    int a2=1699;
    int a3=441;
    int a4=661;
    if(a1>a2 && a1>a3 && a1>a4){
        printf("a1 is the greatest");
    }
    else if(a2>a1 && a2>a3 && a2>a4){
        printf("a2 is the greatest");
    }
    else if(a3>a2 && a3>a1 && a3>a4){
        printf("a3 is the greatest");
    }
    else if(a4>a2 && a4>a3 && a4>a1){
        printf("a4 is the greatest");
    }
    return 0;
}