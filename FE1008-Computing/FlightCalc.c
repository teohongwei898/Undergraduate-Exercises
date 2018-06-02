//This program computes the duration of flight and the height above the target of a projectile

#include <stdio.h>
#include <math.h>
#define g 9.81

void instruct (void);
double flighttime (double, double, double);
double flightht (double, double, double);

int main (void)

{
    double dist, vel, theta, time, height;

    instruct ();

    printf("Please key in theta in radians = \n");
    scanf("%lf", &theta);
    printf("Please key in dist in meters = \n");
    scanf("%lf", &dist);
    printf("Please key in vel in meters / seconds = \n");
    scanf("%lf", &vel);
    printf("\n");

    time = flighttime (theta, dist, vel);

    height = flightht (vel, theta, time);

    printf("The projectile's flight time is %g and the height of the projectile above the target is %g.", time, height);

    return 0;
}

void instruct (void)

{
    printf("This program would ask user for 3 inputs as follows : \n\n");
    printf(" -> theta, the angle of elevation of the projectile in radians \n");
    printf(" -> dist, the distance from the projectile to the target in meters \n");
    printf(" -> vel, the initial velocity of the projectile in meters / seconds \n\n");
    printf("Using the above inputs, the program would calculate the the duration of flight \n");
    printf("and the height above the target of a projectile. \n");
    printf("--------------------------------------------------------------------------------------\n");
}

double flighttime (double theta, double dist, double vel)

{
    double t;

    t = dist / (vel * cos(theta));

    return t;
}

double flightht (double vel, double theta, double time)

{
    double s;

    s = vel * sin(theta) * time - (g/2) * time * time;

    return s;
}
