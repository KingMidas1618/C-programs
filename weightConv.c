#include <stdio.h>

int main(){

    int decision;
    float kg;
    float lbs;
    float kgToLbs;
    float lbsToKg;

    printf("Welcome to the weight converter!\nPlease, choose between (1)kg to lbs, (2)lbs to kg, or (0)closing the program: ");
    scanf("%d", &decision);

    while(decision != 0){
    
        if(decision == 1){
            printf("\nEnter the value of the weight in kg: ");
            scanf("%f", &kg);
            
            kgToLbs = kg*2.205;
            
            printf("\nYour weight in lbs is: %.2flbs\n", kgToLbs);
        }
        else if(decision == 2){
            printf("\nEnter the value of the weight in lbs: ");
            scanf("%f", &lbs);
            
            lbsToKg = lbs*0.4536;
            
            printf("\nYour weight in kg is: %.2fkg\n", lbsToKg);
        }
        else
            printf("Not a valid choice!\n");

            printf("Please, choose between (1)kg to lbs, (2)lbs to kg, or (0)closing the program: ");
            scanf("%d", &decision);
        }
        printf("Good-bye!\n");

    return 0;
}