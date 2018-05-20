//Simulation of rolling a dice 100 times

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{
    int i = 1;
    int diceroll;

    srand((unsigned) time(NULL));

    while (i <= 100)

    {
       diceroll = (rand() % 12 + 1);

       printf("The dice shows: %d\n", diceroll);
       i = i + 1;
    }

    return 0;
}
