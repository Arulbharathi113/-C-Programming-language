# include <stdio.h>

int main(){
    int num1, num2, temp;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swapping the numbers
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping, first number is: %d\n", num1);
    printf("After swapping, second number is: %d\n", num2);

    return 0;
}