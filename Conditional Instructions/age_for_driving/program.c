#include <stdio.h>

int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if (age >= 70 || age < 18){
        printf("You cannot drive");
    }
    else{
        printf("You can drive");
    }
    return 0;
}