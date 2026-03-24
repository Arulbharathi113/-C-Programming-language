# include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    if(marks>=90)   
    {
        printf("grade is A");
    }
    else if (marks>=80)
    {
        printf("grade is B");
    }
    else if(marks>=70)
    {
        printf("grade is C");
    }
    else if(marks>=60)
    {
        printf("grade is D");
    }
    else
    {
        printf("grade is Fail");
    }
}