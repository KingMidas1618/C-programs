#include <stdio.h>

// Withdraw
// Deposit
// Check balance
// Exit

double depositMoney(double money);
double withdrawMoney(double money);
void cleanInput(void);

int main(void)
{
    int choice = 0;
    double money = 100.00;

    printf("Welcome to the ATM!\n");

    do{
        printf("What option would you like to choose?:\n"
               "1. Deposit\n"
               "2. Withdraw\n"
               "3. Check balance\n"
               "4. Exit\n"
               "Enter your option: ");

        if(scanf("%d", &choice) != 1){
            printf("\nINVALID CHOICE!\n\n");
            cleanInput();
            continue;
        }

        cleanInput();

        switch(choice){
            case 1:
                money = depositMoney(money);
                break;

            case 2:
                money = withdrawMoney(money);
                break;

            case 3:
                printf("\nYour current balance is: $%.2lf\n\n", money);
                break;

            case 4:
                printf("\nThanks for using this ATM! Until next time!\n");
                break;

            default:
                printf("\nIt seems that you pressed the wrong button. "
                       "Please, try again.\n\n");
        }

    } while(choice != 4);

    return 0;
}

double depositMoney(double money)
{
    double deposit;

    printf("\nHow much money would you like to deposit?: ");

    if(scanf("%lf", &deposit) != 1){
        printf("\nINVALID INPUT!\n\n");
        cleanInput();
        return money;
    }

    cleanInput();

    if(deposit < 0){
        printf("\nOperation denied!\n\n");
        return money;
    }
    else if(deposit == 0){
        printf("\nCongratulations... for depositing $0? That's tough...\n\n");
        return money;
    }
    else{
        printf("\nYou deposited $%.2lf!\n\n", deposit);
        return money + deposit;
    }
}

double withdrawMoney(double money)
{
    double withdraw;

    printf("\nHow much money would you like to withdraw?: ");

    if(scanf("%lf", &withdraw) != 1){
        printf("\nINVALID INPUT!\n\n");
        cleanInput();
        return money;
    }

    cleanInput();

    if(withdraw < 0 || withdraw > money){
        printf("\nOperation denied!\n\n");
        return money;
    }
    else if(withdraw == 0){
        printf("\nSeriously? Withdrawing $0? "
               "Are you expecting some kind of magic?\n\n");
        return money;
    }
    else{
        printf("\nYou have withdrawn $%.2lf!\n\n", withdraw);
        return money - withdraw;
    }
}

void cleanInput(void)
{
    int clearer = getchar();

    while(clearer != '\n' && clearer != EOF){
        clearer = getchar();
    }
}