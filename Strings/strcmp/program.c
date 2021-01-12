#include <stdio.h>
#include <string.h>

int main(){
    char st1[20] = "Sanket";
    char *st2 = "Sanket";    //val = 0
   // char *st2 = "Sank";    //val = 1
   // char *st2 = "Sante";    //val = -1
    int val = strcmp(st1,st2);
    printf("Value is %d",val);
    return 0;
}