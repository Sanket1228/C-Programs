#include <stdio.h>
#include <string.h>

int main(){
    char st1[20] = "Sanket";
    char *str2 = " Patil";
    strcat(st1, str2);
    printf("st1 is %s",st1);
    return 0;
}   