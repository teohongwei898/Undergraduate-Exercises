//Average of n user-input numbers

#include<stdio.h>

int main(void)

{
    int n, counter = 1;
    double number, sum = 0, average;

    printf("How many numbers to process? ");
    scanf("%d", &n); //Get number of user's input

    while (counter <= n)
    {
        printf("Input a number: ");
        scanf("%lf", &number); //Get a number from a user

        sum += number; //Add to sum
        counter++; //increment counter
    }

    average = sum / n;
    printf("Average = %g", average); //Compute average

    return 0;
}
