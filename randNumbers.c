#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int randomNum = (rand() % 2) + 1 ;

    //Formula for random numbers within a scope:
    //Formula = (rand() % (max - min + 1)) + min

    printf("%d\n", randomNum);

    return 0;
}

/*
    Pseudo-random   =   Appear random but are determined by a
                        mathematical formula that uses a seed
                        value to generate a predictable sequence
                        of numbers.
                        Advanced: Mersenne Twister or /dev/random
*/