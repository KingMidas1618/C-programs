#include <stdio.h>
#include <math.h>

int main(){

    double finalAmount;     //A
    double initialAmount;   //P
    double interestRate;    //r
    int compPerYear;        //n
    int years;              //t

    printf("Welcome to the Compound Interest Calculator\n");
    
    printf("Please enter the initial value (P): ");
    scanf("%lf", &initialAmount);

    printf("\nNow, enter the absolute annual interest rate (r): ");
    scanf("%lf", &interestRate);

    printf("\nNow, the number of times the interest compounds per year (n): ");
    scanf("%d", &compPerYear);

    printf("\nNow, the total time the money is invested or borrowed, in years (t): ");
    scanf("%d", &years);

    finalAmount = initialAmount*(pow(1+(interestRate/compPerYear), compPerYear*years));

    printf("\nYour final amount is: $%.2lf\nYour interest earned was: $%.2lf\n", finalAmount, finalAmount-initialAmount);

    return 0;
}