#include <stdio.h>

int main(){
    char i = 's';
    char *ptr = &i;
    printf("The value of ptr is %u\n",ptr);
    // ptr = ptr-1;
    // ptr = ptr+1;
    ptr++;
    printf("The value of ptr is %u\n",ptr);

    return 0;
}