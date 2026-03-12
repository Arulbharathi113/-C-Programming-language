# include <stdio.h>

int main()
{
    int num;
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);  
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Your name is %s and the number is %d", name, num);
    return 0;
}