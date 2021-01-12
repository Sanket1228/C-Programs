#include <stdio.h>

int main(){
    FILE *ptr;
    int number = 211;
    ptr = fopen("Sanket.txt","w");
    fprintf(ptr,"The number is %d",number);
    fclose(ptr);
    return 0;
}