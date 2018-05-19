#include <stdio.h>
#include <math.h>
 int main(void) {
     double a, b, c, v, i;
     printf("Input the amount of first resistance R1 => ");
     scanf("%lf", &a);
     printf("Input the amount of second resistance R2 => ");
     scanf("%lf", &b);
     printf("Input the amount of third resistance R3 => ");
     scanf("%lf", &c);
     printf("Input the amount of voltage V => ");
     scanf("%lf", &v);
    i = v/(a+b+c);
    printf("The current is %lf\n", i);

  return 0;
  }
