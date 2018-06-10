#include <stdio.h>

double repay (int);

int main (void)

{
    int n;
    double amount;

    printf("This program will calculate repay amount if interest and principal is compounded every month and every day\n\n");
    printf("Please key in '12' if you want it to be compounded every month, and key in '365' to compound it every day = \n");
    scanf("%d", &n);

    printf("\n");

    amount = repay (n);

    printf("The repayment amount if interest and principal compounded %d times a year is %g\n", n, amount);

    return 0;
}

double repay (int n)

{
    double sum = 1.0;
    int i;

    for (i = 1; i <= n; i++)
        sum = sum * (1 + 1.0 / (n));

    return sum;
}
