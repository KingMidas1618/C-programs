#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

    int guess, tries = 0;
    int randomNumber = rand() % 101;


    printf("Welcome to the number guessing game! "
    "Please, enter the number (0-100) you think the program will spill!: ");

    do{
        if(scanf("%d", &guess) != 1){
            printf("INVALID INPUT!\n");
            return 1;
        }
        else if(guess > 100 || guess < 0){
            printf("\nDidn't you read it? ZERO TO A HUNDRED. Now, try again\n");
            continue;
        }
        
        tries++;

        int distance = abs(guess - randomNumber);

        if(guess == randomNumber && tries == 1){
            printf("\nYou are definitely lucky! " 
                "Your number was correct on the first try!\n");
        }
        else if(distance){
            printf("\nYou got it!\n"
            "The number was %d!\nThe amount of tries were: %d\n", randomNumber, tries);
        }
        else if(abs(distance) >= 30){
            printf("\nYou are far away from the number! Try again!:");
        }
        else if(abs(distance) >= 20){
            printf("\nYou are getting hot to the number! Try again!:");
        }
        else{
            printf("\nDon't go too far now! "
            "You are close to it like Icarus to the Sun! Try again!:");
        }
    }
    while(guess != randomNumber);
    
    return 0;
}