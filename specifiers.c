#include <stdio.h>

int main(){

    //Insert examples here for testing

    return 0;
}

/*
    Format  specifiers: Special tokens that begin with a % symbol,
                        followed by a character that specifies the
                        data type and optional modifiers (width,
                        precision, flags). They control how
                        data is displayed or interpreted. Also,
                        they can be used simultaneously
                 
                 Width: To set a specific width of characters
                        displayed, you must declare as, for example,
                        %xd, where x determines the number of
                        minimum spaces.
             
             Precision: To set a specific precision of characters
                        displayed, you must declare as, for example,
                        %.xf, where x determines the number of
                        maximum precision.
                        
                        If the number has more digits than the set
                        precision, it will be rounded with the
                        following rule: between 1 and 4, it will
                        be rounded down, and between 5 to 9 it will
                        be rounded up.

                 Flags: Flags are optional characters placed after
                        the % symbol and before the width, precision,
                        or data type.

                        They modify how the output is displayed, such
                        as alignment, sign display, padding, or prefixes.

               Example:
                        //Each type respectively
                        int age = 24;
                        float price = 19.99;
                        double pi = 3.1415926535;
                        char symbol = '@';
                        char name[] = "Victor Borba";

                        printf("%d\n", age); //int
                        printf("%f\n", price); //float, promoted to double in printf()
                        printf("%lf\n", pi); //Can also accept %f
                        printf("%c\n", symbol); //char
                        printf("%s\n", name); //string

                        //Width

                        int num1 = 1;
                        int num2 = 10;
                        int num3 = -100;

                        printf("%3d\n", num1);
                        printf("%3d\n", num2);
                        printf("%3d\n", num3);
                        
                        //Precision
                        
                        float price1 = 19.95;
                        float price2 = 1.50;
                        float price3 = -100.00;

                        printf("%.1f\n", price1);
                        printf("%.1f\n", price2);
                        printf("%.1f\n", price3); 

                        //Flags

                        int num1 = 1;
                        int num2 = 10;
                        int num3 = -100;

                            //Left text justification
                                printf("%-3d\n", num1);
                                printf("%-3d\n", num2);
                                printf("%-3d\n", num3);

                            //Sign display
                                printf("%+d\n", num1);
                                printf("%+d\n", num2);
                                printf("%+d\n", num3);

                            //Leading zeros
                                printf("%03d\n", num1);
                                printf("%03d\n", num2);
                                printf("%03d\n", num3);

                            //Alternate bases
                                printf("%#x\n", num1); //Hexadecimal with lower case letters
                                printf("%#X\n", num1); //Hexadecimal with upper case letters

*/