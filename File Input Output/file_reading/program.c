#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    int num1;
    ptr = fopen("Sanket.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num1);
    fclose(ptr);
    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num1);    
    return 0;
}