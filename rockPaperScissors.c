#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computerChoice(void);
const char *choiceName(int choice);

int main(void){

    srand(time(NULL));
    
    int player, machine = computerChoice();

    printf("Choose Rock(1), Paper(2), or Scissors(3): ");
    if(scanf("%d", &player) != 1 || player > 3 || player < 1){
        printf("\nINVALID INPUT!\n");
        return 1;
    }
    
    if(player == machine){
        printf("\nDraw!\n");
    }
    else if(
    (player == 1 && machine == 3) || 
    (player == 2 && machine == 1) || 
    (player == 3 && machine == 2)){

        printf("\nPlayer wins!\n");
    }
    else{
        printf("\nComputer wins!\n");
    }

    printf("\nPlayer chose: %s," 
        " Computer chose: %s\n", choiceName(player), choiceName(machine));

    return 0;
}

const char *choiceName(int choice){
    switch(choice){
        case 1:
            return "Rock";
        case 2:
            return "Paper";
        case 3:
            return "Scissors";
        default:
            return "Invalid";
    }
}

int computerChoice(void){
    int choice = rand() % 3 + 1;
    return choice;
}