#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter Four Numbers : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if (a>b && a>c && a>d){
        printf("Greatest number is %d",a);
    }
    else if (b>a && b>c && b>d)
    {
        printf("Greatest number is %d",b);
    }
    else if (c>a && c>b && c>d)
    {
        printf("Greatest number is %d",c);
    }
    else if (d>a && d>b && d>c)
    {
        printf("Greatest number is %d",d);
    }
        
    return 0;
}