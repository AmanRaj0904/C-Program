#include<stdio.h>
int main()
{
    int  age,marks;
     printf("Enter Your age");
    scanf("%d",&age);
    printf("Enter Your Marks");
    scanf("%d",&marks);
    switch (age)
    {
    case 1:
    printf("Your age is 1 \n");
    switch (marks)
    {
    case 43:
    printf("Your Marks is 43\n");
        break;
    
    default:
    printf("Marks is Not valid");
        break;
    }
        break;
    
    default:
        break;
    }

    return 0;
}
