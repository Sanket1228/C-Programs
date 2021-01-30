#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int swg(char your, char comp){
    if(your == comp){
        return 0;
    }

    if(your=='s' && comp=='g'){
        return -1;
    }
    else if(your=='g' && comp=='s'){
        return 1;
    }

    if(your=='s' && comp=='w'){
        return 1;
    }
    else if(your=='w' && comp=='s'){
        return -1;
    }

    if(your=='w' && comp=='g'){
        return 1;
    }
    else if(your=='g' && comp=='w'){
        return -1;
    }
}

int main(){
    char your , comp;
    srand(time(0));
    int number = rand()%100+1;

    if(number<33){
        comp = 's';
    }
    else if(number<66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }

    printf("Enter your guess of snake,water,gun by using s,w,g : ");
    scanf("%c",&your);
    int result = swg(your,comp);
    if(result==0){
        printf("Match is drawn\n");
    }
    else if(result==1){
        printf("You have won the game\n");
    }
    else{
        printf("You lose the game\n");
    }
    printf("Your guess is %c and computer guess is %c\n",your,comp);
    return 0;
}