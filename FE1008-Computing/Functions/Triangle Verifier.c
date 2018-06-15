//This program calculates area of triangle by using A = sqrt(s(s-a)(s-b)(s-c)), where s is perimeter / 2

#include <stdio.h>
#include <math.h>

int istriangle (double, double, double);
double arealtri (double, double, double);

int main (void)
{
    double a, b, c, area;

    printf("Please key in the length of 1st side of triangle, a = ");
    scanf("%lf", &a);
    printf("Please key in the length of 2nd side of triangle, b = ");
    scanf("%lf", &b);
    printf("Please key in the length of 3rd side of triangle, c = ");
    scanf("%lf", &c);

    area = arealtri (a, b, c);
    printf("\n");

    if (area != 0)

        printf("The area of the triangle with sides of length %g, %g and %g is %g\n", a, b, c, area);

    else

        printf("The three sides of length %g, %g and %g does not form a triangle\n", a, b, c);

    return 0;
}

int istriangle (double a, double b, double c)

{
    int result;

    result = ((a + b > c) && (b + c > a) && (a + c > b));

    return result;
}

double arealtri (double a, double b, double c)

{
    double area, s, verify_triangle;

    verify_triangle = istriangle (a, b, c);

    if (verify_triangle > 0)

    {
        s = (a + b + c) / 2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
    }

    else

        area = 0;

    return area;
}
