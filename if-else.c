#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Eligible For Voting");
    }
    else
    {
        printf("Not Eligible For Voting < 18");
    }
    return 0;
}
