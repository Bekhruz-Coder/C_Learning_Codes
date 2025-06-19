#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;
    
    int guessedNumber = 0;
    int tries = 5;
    int i = 1;
    
    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");
    printf("\n");
    
    while(tries >= i){
        printf("\nYou have %d tr%s left.\n", tries, tries == 1 ? "y" : "ies");
        printf("Enter a guess: ");
        scanf("%d", &guessedNumber);
        
        if(guessedNumber == randomNumber){
            printf("Congratulations. You guessed it!\n");
            break;
        }else if(guessedNumber > 20){
            printf("Sorry, %d is grater than 20. Please input a number from 0 to 20!\n", guessedNumber);
            --tries;
        }else if(guessedNumber > randomNumber){
            printf("Sorry, %d is wrong. My number is less than that.\n", guessedNumber);
            --tries;
        }else{
            printf("Sorry, %d is wrong. My number is greater than that.\n", guessedNumber);
            --tries;
        }
    }
    if(tries <= i){
        printf("\nYou don't have more tries left. You have lost.");
        printf("\nThe number was: %d", randomNumber);
    }
    return 0;
}