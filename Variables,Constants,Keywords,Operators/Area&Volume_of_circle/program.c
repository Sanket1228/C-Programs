#include<stdio.h>

int main(){

    int r = 3 , area , volumn;
    int pi = 3.14;

    area = pi * r * r;
    printf("Area of circle is %d\n", area);

    int height = 2;
    volumn = pi * r * r * height;
    printf("Volumn of circle is %d",volumn);

    return 0;
}