#include <stdio.h>

int plusOne(int num){
    int result = num+1;

    return result;
}

int main(void){

    int favoriteNum;

    printf("Choose your favorite number: ");
    scanf("%d", &favoriteNum);

    printf("Your favorite number plus one is: %d\n", plusOne(favoriteNum));

    return 0;
}

// Return = Returns a value back to where you call a function