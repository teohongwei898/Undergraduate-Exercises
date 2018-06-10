#include <stdio.h>
#define pi 3.14159

int main(void)
{

    double r, a, c;   /* get the input */

    /* compute area and circumference */
    printf("Enter the radius of the circle> ");
    scanf("%lf", &r);

     /* display the results */
     c = 2.0 * r * pi;
     a = pi * r * r;

    printf("Radius Of Circle        = %.2f\n", r);
    printf("Area Of Circle          = %.2f\n", a);
    printf("Circumference Of Circle = %.2f\n", c);

  return 0;

}
