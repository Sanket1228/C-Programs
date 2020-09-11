#include<stdio.h>

int main(){

    int principle = 100 , years = 1 , rate = 4;

    int SI = (principle * years * rate)/100;

    printf("Simple interest is %d",SI);

    return 0;
}