#include <stdio.h>

int main(){
    int rating;
    printf("Enter your rating : ");
    scanf("%d",&rating);

    switch(rating){
        case 1: printf("Your have give rating 1");
                break;
        case 2: printf("Your have give rating 2");
                break;
        case 3: printf("Your have give rating 3");
                break;
        case 4: printf("Your have give rating 4");
                break;
        case 5: printf("Your have give rating 5");
                break;
        default: printf("Invalid Rating");
                break;
    }
    return 0;
}   