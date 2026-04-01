# include <stdio.h>
int main()
{
    int num,rev=0,rem,original;
    printf("Enter a number:");
    scanf("%d",&num);
    original = num;
    while(num>0)
    {
        rem= num%10;
        rev=rev+rem*rem*rem;
        num=num/10;
    }
    if(rev==original)
    {
        printf("%d is an Armstrong number",original);
    }
    else
    {
        printf("%d is not an Armstrong number",original);
    }
}