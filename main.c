#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


void guess(int n){
    srand(time(NULL));
    int numberOfGuess, guess, randNum = 0;

    randNum = rand() % n;  
    printf("Pick a number: "); 
        
    do
    {
    
        if (numberOfGuess > 10){
            printf("You lose\n");
            printf("Answer was %d type type \"./main\" to try again", randNum);
            break;
        }

        scanf("%d", &guess);

        if (guess > randNum)
        {
            printf("Lower!\n");
            printf("Pick a number: "); 
            numberOfGuess++;
        }
        else if (guess < randNum)
        {
            printf("Higher!\n");
            printf("Pick a number: "); 
            numberOfGuess++;
        }
        else if (guess == randNum)
        {
            printf("You Win");
        }
        

        
        
        

    } while (guess != randNum);
}



int main(){
    int n = 100;
    guess(n);

    return 0;
}