#include <stdio.h>
#include <stdbool.h>

int main(){
    
    bool hardcoreMode = true;

    printf("Is harcore mode active?: %d", hardcoreMode);

    return 0;
}

/*
        variable:   A reusable container for a value.
                    Behaves as if it were the value it contains.

             int:   Stores integer numbers only. 
                    It doesn't support decimal numbers. Use %d to display it.
                    Whole numbers (4 bytes in modern systems).
                    
                    Example:
                    int money = 500;
                    int account = 12000;
                    int total = account - money;

                    printf("You have retrieved %d dollars from %d dollars of your account\n", money, account);
                    printf("You now have %d dollars in your account", total);

           float:   Stores floating point numbers. It includes decimals.
                    To specify the amount of decimal places you must type %.xf
                    x is the amount of decimal places.
                    Single-precision decimal number (4 bytes).
                    
                    Example:
                    float sleep = 7.5;

                    printf("You slept %.1f\n", sleep);
            
          double:   Stores fractional numbers, and it can store 
                    positive and negative numbers with values 
                    between 1.7e−308 and 1.7e+308.
                    To specify the amount of decimal places you must type %.xlf
                    x is the amount of decimal places.
                    Double-precision decimal number (8 bytes).
                    
                    Example:
                    double goldenRatio = 1.61803398875;

                    printf("The value of the Golden Ratio is %.11lf", goldenRatio);
            
            char:   Stores single characters. Must be declared between single quotes (' ').
                    To use it, %c must be placed where it will be printed.
                    (1 byte)
                    
                    Example:
                    char letter = 'Z';

                    printf("Your selected letter is: %c", letter);

        char x[]:   Stores an array of characters to make sentences, which is normally
                    called a string. It must be declared between double quotations(" ").
                    To use it, %s must be placed where it will be printed.
                    (Size varies).

                    Example:
                    char name[] = "Victor";

                    printf("It seems like your name is: %s", name);

            bool:   Booleans store a value of true or false (1 or 0). 
                    To work with booleans it's needed to include the stdbool header file.
                    To display it, you must use %d.
                    (1 byte).

                    Example:
                    bool hardcoreMode = true;

                    printf("Is harcore mode active?: %d", hardcoreMode);
                
                    
*/