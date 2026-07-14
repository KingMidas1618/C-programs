#include <stdio.h>
#include <string.h>

int main(){

    char item[100];
    float price;
    int quantity;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = '\0';

    printf("\nWhat is the price for each?: ");
    scanf("%f", &price);

    printf("\nHow many would you like?: ");
    scanf("%d", &quantity);

    price *= quantity;

    printf("\nYou have bought %d %s(s)\nThe total is: %.2f€\n", quantity, item, price);

    return 0;
}