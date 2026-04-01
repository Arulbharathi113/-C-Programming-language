# include<stdio.h>

int main()
{
    int n,i,sum=0, temp,fact,rem;
    printf("Enter a number: ");
    scanf("%d",&n); 
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        fact =1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum =sum+fact;
        n=n/10;

    }
    if(sum==temp)
    {
        printf("%d is a strong number",temp);
    }
    else
    {
        printf("%d is not a strong number",temp);
    }
}