#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number , guess , nguesses=1;
    srand(time(0));
    number = rand()%100 +1;
    do
    {
        printf("Guess the number : ");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You have guessed the number right in %d attempts\n",nguesses);
        }
        nguesses++;
    }while (guess!=number);
    
    return 0;
}