#include <stdio.h>
#include <string.h>

int main(){

    char noun[50];
    char verb[50];
    char adjective1[50];
    char adjective2[50];
    char adjective3[50];

    printf("Enter a noun: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strcspn(noun, "\n")] = '\0';
    
    printf("Enter a verb in past tense: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strcspn(verb, "\n")] = '\0';
    
    printf("Enter an adjective: ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strcspn(adjective1, "\n")] = '\0';

    printf("Enter another adjective: ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strcspn(adjective2, "\n")] = '\0';
    
    printf("Enter one more adjective: ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strcspn(adjective3, "\n")] = '\0';

    printf("The %s %s %s %s %s\n", adjective1, adjective2, adjective3, noun, verb);

    return 0;
}