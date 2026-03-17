#include <stdio.h>
# include <stdlib.h>

int main()
{
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("\n%d", &num1);
    printf("Enter second number: ");
    scanf("\n%d", &num2);
    printf("Enter Operator: ");

    scanf(" %c", &operator);

    if(operator == '+')
    {
        printf("Sum: %d", num1 + num2);
    }
    else if(operator == '-')
    {
        printf("Difference: %d", num1 - num2);
    }
    else if(operator == '*')
    {
        printf("Product: %d", num1 * num2);
    }
    else if(operator == '/')
    {
        if(num2 != 0)
        {
            printf("Quotient: %d", num1 / num2);
        }
        else
        {
            printf("Error: Division by zero is not allowed.");
        }
    }
    else
    {
        printf("Error: Invalid operator.");
    }

}