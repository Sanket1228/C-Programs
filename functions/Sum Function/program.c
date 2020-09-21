#include <stdio.h>

int sum(int a, int b);

int main(){
    int c;
    c = sum(5,6);
    printf("Sum of numbers is %d \n",c);
    return 0;
}

int sum(int a,int b){
    int c;
    c = a + b;
    return c;
}