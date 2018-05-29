//This program would allow a user to enter their test scores and the program would return their grade

#include <stdio.h>
#include <stdlib.h>

int check_score (int);

int main (void)

{
    char do_again = 'Y';
    int score;

    while (do_again == 'Y')

    {
        printf("Please enter your score out of 100 = \n");
        scanf("%d", &score);
        printf("\n");

        check_score (score);

        do

        {

        printf("Check another grade? (Y/N) = \n");
        fflush (stdin);
        do_again = toupper(getchar());
        printf("\n");

        if (do_again != 'Y' && do_again != 'N') continue;

        } while (do_again != 'Y' && do_again != 'N');

    }

    return 0;
}

int check_score (int score)

{
    if (score < 60)

        printf("Your grade is 'F'.\n\n");

    if (score >= 60 && score < 70)

        printf("Your grade is 'D'.\n\n");

    if (score >= 70 && score < 80)

        printf("Your grade is 'C'.\n\n");

    if (score >= 80 && score < 90)

        printf("Your grade is 'B'.\n\n");

    if (score >= 90 && score < 100)

        printf("Your grade is 'A'.\n\n");

    if (score == 100)

        printf("You have a perfect score! Congrats!.\n\n");

    return 0;
}
