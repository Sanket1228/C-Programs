#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee google[500];

    google[0].code = 100;
    google[0].salary = 100.00;
    strcpy(google[0].name,"Sanket");

    google[1].code = 200;
    google[1].salary = 100.00;
    strcpy(google[1].name,"Yash");

    printf("Done");
    return 0;
}