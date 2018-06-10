//This program requests a price and adds to total until price of zero
//value is entered
//This uses do-while loop

#include <stdio.h>

int main(void)

{
    double price, total = 0.0;

    printf("Type 0 to quit\n");

    do
    {
        printf("Price = ");
        scanf("%lf", &price);

        total += price;

    } while (price != 0);

    printf("Total is %lf", total);

    return 0;
}
