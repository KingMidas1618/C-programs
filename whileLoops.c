#include <stdio.h>

int main(void){

    int determination;

    printf("How strong is your determination (in numbers)?: ");
    
    if(scanf("%d", &determination) != 1){
        printf("INVALID INPUT!\n");
        return 1;
    }

    while(determination >= 1){ // Standard while loop. Checks the condition before entering.
        
        if(determination > 100){
            printf("WOW! I've never seen such determination!\n");
        }
        else if(determination > 10 && determination <= 100){
            printf("Your determination is AMAZING!\n");
        }
        else if(determination >= 1 && determination <= 10){
            printf("Your determination is strong!\n");
        }
        printf("How about now? What's your level of determination?: ");
        
        if(scanf("%d", &determination) != 1){
        printf("INVALID INPUT!\n");
        return 1;
        }
    }

    printf("C'mon, don't say that! Get this chin up and muster that determination!\n");

    do{ // Do-while loop. Runs the code once, then checks the condition.
        printf("Now that some time has passed... show me more of that determination!: ");
        
        if(scanf("%d", &determination) != 1){
        printf("INVALID INPUT!\n");
        return 1;
        }   

        if(determination < 1 && determination >= -10){
            printf("That is impossible! I know you have potential!\n");
        }
        else if(determination < -10){
            printf("We will stay here until you find that DETERMINATION!\n");
        }
        else{
            printf("I'm proud of your determination! Now, keep moving forward!\n");
        }
    }
    while(determination < 1);

    return 0;
}

/*
While loop =    Continue some code WHILE the condition remains 
                true.
                Condition must be true for us to enter while
                loop.
*/