#include <stdio.h>

int main(){
    int phy,chem,math;
    float total;

    printf("Enter Physics Marks : ");
    scanf("%d",&phy);
    printf("Enter Chemistry Marks : ");
    scanf("%d",&chem);
    printf("Enter Math Marks : ");
    scanf("%d",&math);

    total = (phy + chem + math) / 3;

    if ((total<40) || phy < 33 || chem < 33 || math < 33){
        printf("Your total percentage is %f , You have failed the exam",total);
    }
    else{
        printf("Your total percentage is %f, You have passed the exam",total);
    }

    return 0;
}