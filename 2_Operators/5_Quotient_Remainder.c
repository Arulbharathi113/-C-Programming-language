# include <stdio.h>

int main()
{
    int num1,num2, Quotient, Remainder;
    printf("Enter first number: ");
    scanf("%d",&num1);      
    printf("Enter second number: ");
    scanf("%d",&num2);

    Quotient = num1 /num2;
    Remainder = num1 % num2;

    printf("Quotient: %d\n", Quotient);
    printf("Remainder: %d\n", Remainder);

}