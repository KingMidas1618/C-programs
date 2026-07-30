#include <stdio.h>

// Use int main(void) when the program does 
//not need command-line arguments.
int main(void){

    int decision;
    double num1, num2, result;

    printf("Welcome to the basic math calculator!\n"
    "1. Sum\n"
    "2. Subtraction\n"
    "3. Multiplication\n"
    "4. Division\n"
    "Choose the operation that you want to do: ");
    
    if(scanf("%d", &decision)!= 1 || decision < 1 || decision > 4){
        printf("\nInvalid choice!\n");
        return 1;
    }
         
    printf("Choose your first number: ");
    if(scanf("%lf", &num1)!= 1){
        printf("\nInvalid choice!\n");
        return 1; 
    }

    printf("Now, choose your second number: ");
    if(scanf("%lf", &num2)!= 1){
        printf("\nInvalid choice!\n");
        return 1;
    }

    switch(decision){
        case 1: //Sum
            result = num1 + num2;
            printf("Your result is: %.4lf\n", result);
            break;
        case 2: //Subtraction
            result = num1 - num2;
            printf("Your result is: %.4lf\n", result);
            break;
        case 3: //Multiplication
            result = num1 * num2;
            printf("Your result is: %.4lf\n", result);
            break;
        case 4: //Division
            if(num2 == 0){
                printf("\nYOU SHALL NOT DIVIDE BY ZERO!\n");
                return 1;
            }
            result = num1 / num2;
            printf("Your result is: %.4lf\n", result);
            break;
    }

    return 0;
}