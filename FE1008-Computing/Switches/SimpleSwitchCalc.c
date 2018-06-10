//This program acts as a simple calculator for operators +, -, * and /
//using switch statements

#include <stdio.h>

int main(void)

{
    double num1, num2;
    char op;

    printf("Enter two numbers and an operator in the form"
           " number1 operator number2 => \n");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op)

    {
        case '+':

            printf("%lf + %lf is %lf", num1, num2, num1 + num2);
            break;

        case '-':

            printf("%lf - %lf is %lf", num1, num2, num1 - num2);
            break;

        case '*':

            printf("%lf * %lf is %lf", num1, num2, num1 * num2);
            break;

        case '/':

            printf("%lf / %lf is %lf", num1, num2, num1 / num2);
            break;

        default:

            printf("Invalid operator %c is keyed in.\n\n", op);
    }

    return 0;
}
