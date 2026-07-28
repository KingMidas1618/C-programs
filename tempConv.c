#include <stdio.h>

int main(){

    int decision;
    double temperature;
    double result;
    
    printf("Welcome to the temperature converter!\n"
        "1.Celsius to Fahrenheit\n"
        "2.Celsius to Kelvin\n"
        "3.Fahrenheit to Celsius\n"
        "4.Fahrenheit to Kelvin\n"
        "5.Kelvin to Celsius\n"
        "6.Kelvin to Fahrenheit\n"
        "Choose your option: ");
        scanf("%d", &decision);


    switch(decision){
        case 1:
            printf("\nEnter the temperature in Celsius: ");
            
            if(scanf("%lf", &temperature) != 1){
                printf("\nInvalid input\n");
                return 1;
            }
            if(temperature<-273.15)
                printf("\nBe careful! This value is below the absolute zero!\n");
                
            result = temperature*1.8+32;
            printf("\nYour temperature is: %.2lf°F\n", result);
            break;
        case 2:
            printf("\nEnter the temperature in Celsius: ");
            
            if(scanf("%lf", &temperature) != 1){
                printf("\nInvalid input\n");
                return 1;
            }
            if(temperature<-273.15)
                printf("\nBe careful! This value is below the absolute zero!\n");
            
            result = temperature+273.15;
            printf("\nYour temperature is: %.2lf K\n", result);
            break;
        case 3:
            printf("\nEnter the temperature in Fahrenheit: ");

            if(scanf("%lf", &temperature) != 1){
                printf("\nInvalid input\n");
                return 1;
            }
            if(temperature<-459.67)
                printf("\nBe careful! This value is below the absolute zero!\n");
            
            result = (temperature-32)/1.8;
            printf("\nYour temperature is: %.2lf°C\n", result);
            break;
        case 4:
            printf("\nEnter the temperature in Fahrenheit: ");

            if(scanf("%lf", &temperature) != 1){
                printf("\nInvalid input\n");
                return 1;
            }
            if(temperature<-459.67)
                printf("\nBe careful! This value is below the absolute zero!\n");

            result = (temperature-32)/1.8+273.15;
            printf("\nYour temperature is: %.2lf K\n", result);
            break;
        case 5:
            printf("\nEnter the temperature in Kelvin: ");

            if(scanf("%lf", &temperature) != 1){
                printf("\nInvalid input\n");
                return 1;
            }
            if(temperature<0)
                printf("\nBe careful! This value is below the absolute zero!\n");

            result = temperature-273.15;
            printf("\nYour temperature is: %.2lf°C\n", result);
            break;
        case 6:
            printf("\nEnter the temperature in Kelvin: ");

            if(scanf("%lf", &temperature) != 1){
                printf("\nInvalid input\n");
                return 1;
            }
            if(temperature < 0)
                printf("\nBe careful! This value is below the absolute zero!\n");

            result = (temperature-273.15)*1.8+32;
            printf("\nYour temperature is: %.2lf°F\n", result);
            break;
        default:
        printf("Invalid option\n");
        return 1;
    }

    return 0;
}