#include <stdio.h>

int main(){

	int a,b,area;

	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);

	area = a * b;
	printf("Area of rectangle is %d", area);

	return 0;
}