#include <stdio.h>
#include <math.h>

double cal_scale(double a, int n);

int main (void)

{
    double num_1, num_2, result;

    printf("This program will scale user input based on (number 1) x 10 ^ (number 2), \n");
    printf("where number 1 and number 2 are numbers you input.\n\n");
    printf("Please enter number 1 = \n");
    scanf("%lf", &num_1);
    printf("Please enter number 2 = \n");
    scanf("%lf", &num_2);

    printf("\n");

    result = cal_scale(num_1, num_2);

    printf("The value of %g x 10 ^ %g is %g", num_1, num_2, result);

    return 0;
}

double cal_scale(double num_1, int num_2)
{
    double scale_factor, scale_result;

    scale_factor = pow (10,num_2);
    scale_result = num_1 * scale_factor;

    return scale_result;
}
