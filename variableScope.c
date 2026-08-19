#include <stdio.h>

int result = 0; // Global variable. It can be accessed by EVERY function in this file. Most commonly used as a CONST.

int add(int x, int y){
    int result = x + y; //local variable inside add()

    return result;
}

int main(void){

    int result = add(3, 4); //local variable inside main()
    printf("The result is: %d\n", result);

    return 0;
}
/*
Variable Scope =    Refers to where a variable is recognized and accessible.
                    Variables can share the same name if they're in different
                    scopes {}.
                    
*/