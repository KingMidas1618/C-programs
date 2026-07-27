#include <stdio.h>
#include <stdbool.h>

int main(){

    int number;

    printf("Choose a number: ");
    scanf("%d", &number);

    if(number == 50){
        printf("\nYour number is fifty");
    }
    else if(number < 50){
        printf("\nYour number is less than fifty");
    }
    else{
        printf("\nYour number is bigger than fifty");
    }

    return 0;
}

/*
    if statement =      When the parameters of the if statement are
                        true, then the code inside of it will be
                        executed. If not, then it is skipped.

    else if statement = Continuing of if statement.

    else statement =    When if is false and you need a second
                        answer.
*/