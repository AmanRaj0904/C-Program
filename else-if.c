#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You Can Vote !");
    }
    else if (age > 10)
    {
        printf("You Are between 10 To 18 Not Eligible");
    }
    else
    {
        printf("Not Eligible < 18");
    }

    return 0;
}