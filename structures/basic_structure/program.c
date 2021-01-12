#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    struct employee e1;
    e1.code = 1;
    e1.salary = 1000.00;
    // e1.name = "Sanket";   //won't work
    strcpy(e1.name,"Sanket");

    printf("code of employee is %d\n",e1.code);
    printf("salary of employee is %f\n",e1.salary);
    printf("name of employee is %s",e1.name);

    

    return 0;
}