#include <stdio.h>

int main(){
    float f = 3.14;
    float *ptr = &f;
    printf("The value of ptr is %u\n", ptr);
    // ptr = ptr - 1;
    // ptr = ptr + 1;
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    return 0;
}