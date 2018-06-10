//This program acts as a simple calculator for operators +, -, * and /

#include <stdio.h>

int main(void)

{
    float num1, num2, result;
    char op;

    printf("Enter first number => \n");
    scanf("%f",&num1);
    fflush(stdin);
    printf("Enter an operator => \n");
    scanf("%c", &op);
    fflush(stdin);
    printf("Enter second number => \n");
    scanf("%f", &op);

    if (op == '+')

        {
            result = num1 + num2;
            printf("%f %c %f is %f", num1, '+', num2, result);
        }

        else if (op == '-')

        {
            result = num1 - num2;
            printf("%f %c %f is %f", num1, '-', num2, result);
        }

        else if (op == '*')

        {
            result = num1 * num2;
            printf("%f %c %f is %f", num1, '*', num2, result);
        }

        else if (op == '/')

        {
            result = num1 / num2;
            printf("%f %c %f is %f", num1, '/', num2, result);
        }

    else
        printf("Wrong operators are entered.");

    return 0;
}

