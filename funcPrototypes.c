#include <stdio.h>

void kaioken(int num); //Function prototype

int main(){

    kaioken(10);

    return 0;
}

void kaioken(int num){
    
    printf("KAIOKEN TIMES %d!\n", num);
}

/*
    Function Prototype   =  Provide the compiler w/information
                            about a function's:
                            name, return type, and parameters
                            before its actual definition.
                            Enables type checking and allows
                            functions to be used before they're
                            defined.
                            Improves readability, organization,
                            and helps prevent errors.
*/