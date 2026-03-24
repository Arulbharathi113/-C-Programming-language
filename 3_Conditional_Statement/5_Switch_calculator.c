#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enternumber 1: ");
    scanf("%f", &num1);

    printf("Enternumber 2: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            printf("Result = %.2f", num1 + num2);
            break;
        case '-':
            printf("Result = %.2f", num1 - num2);
            break;
        case '*':
            printf("Result = %.2f", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Error! Division by zero");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}