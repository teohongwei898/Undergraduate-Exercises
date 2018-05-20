//This program attempts to round of a range of positive values to their nearest integer

#include <stdio.h>
#include <ctype.h>

int main(void)

{
    double x;

    printf("Input an positive value: \n");
    scanf("%lf", &x);

    printf("The rounded off integer is %lf", floor(x += 0.5));

    return 0;
}
