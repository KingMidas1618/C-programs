#include <stdio.h>
#include <string.h>

int main(){

    char fullName[200];
    char name[15];
    int age;
    float grade;
    char symbol;

    printf("Please, enter your first name: ");
    scanf("%14s", name); //No need for the array name to be preceeded with &.
    
    printf("Please, enter your age: ");
    scanf("%d", &age); //&age points to the address of "age".

    printf("Please, enter your grade(0-10): ");
    scanf("%f", &grade);

    printf("Please, enter your symbol: ");
    scanf(" %c", &symbol); //For scanf with the char data type, leave a space behind "%c"

    getchar();
    printf("Please, enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    fullName[strcspn(fullName, "\n")] = '\0'; //Removes the newline char left by fgets(), if it exists.

    printf("Your first name is: %s\n", name);
    printf("Your age is: %d\n", age);
    printf("Your grade is: %.1f\n", grade);
    printf("Your symbol is: %c\n", symbol);
    printf("Your full name is: %s\n", fullName);

    return 0;
}

/*
    &:  This prefix is used before a variable name so it points to
        the address of where that value is stored.

    scanf("%x", &x): Accepts user input of the specified data type
        to write at the address of the specified variable. Also,
        this function can't be used with spaced writing.

    scanf(" %c", &whatever): If preceeded by a "\n" in a previous
        statement, the input buffer will continue from it. This
        causes the function to be skipped. To fix it, just put a
        space before the "%c" and the new line char won't be read.

    scanf("%14s", name): Because name is an array, it already points
        to the address of the first char, so it doesn't need to be
        preceeded with &. Every C string ends with '\0'. The array 
        needs enough space for the visible characters plus this 
        terminator. To not overwrite it, the string must be set to
        one value less than the total space.

    getchar(): It waits for a char input. It may be used to read "\n"
        and clear the input buffer.
    
    fullName[strcspn(fullName, "\n")] = '\0': fgets() may store the 
        newline character '\n' when the user presses Enter.
        strcspn(fullName, "\n") finds the position of that newline.
        Replacing it with '\0' removes the newline and properly ends the string.
*/