#include <stdio.h>

void happySong(void){ //Void functions do not return values
    printf("\nWe're no strangers to love\n"
    "You know the rules and so do I\n"
    "A full commitment's what I'm thinking of\n"
    "You wouldn't get this from any other guy\n"
    "I just wanna tell you how I'm feeling\n"
    "Gotta make you understand\n"
    "\n"
    "Never gonna give you up\n"
    "Never gonna let you down\n"
    "Never gonna run around and desert you\n"
    "\n"
    "You've been Rick-rolled, he he\n");
}

void basicInfo(char name[], int age, char street[], char phoneNumber[]){ //When CREATING a function what comes between () is called PARAMETERS
    printf("My name is %s\n", name);
    printf("My age is %d\n", age);
    printf("I live at %s\n", street);
    printf("My cellphone number is %s\n", phoneNumber);
}

int main(void){
    
    //happySong();

    char name[] = "Victor";
    int age = 24;
    char street[] = "St. of Fools n0";
    char phoneNumber[] = "+0040028922";

    basicInfo(name, age, street, phoneNumber); //When CALLING a function what comes between () is called ARGUMENTS

    return 0;
}

/*
    Function =  A reusable section of code that can be invoked
                Arguments can be sent to a function so that it can use them
*/