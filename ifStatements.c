#include <stdio.h>

int main(){

    int number;

    printf("Choose a number: ");
    scanf("%d", &number);

    if(number == 50){
        printf("\nYour number is fifty\n");
    }
    else if(number < 50){
        printf("\nYour number is less than fifty\n");
    }
    else{
        printf("\nYour number is bigger than fifty\n");
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