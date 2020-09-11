#include <stdio.h>

int main(){
    
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);

    if (ch >= 97 && ch <= 122){
        printf("Char is lower");
    }
    else{
        printf("Char is not lower");
    }
    return 0;
}