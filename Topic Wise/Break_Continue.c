#include <stdio.h>
int main()
{
    // Break And Continue

    // Break ::: used TO bring the  program Control out of loop
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("\n%d Enter the Age \n", i);
        scanf("%d", &age);
        // if (age >= 10)
        // {
        //     break;
        // }
        if (age >= 10)
        {
            continue;
        }
        printf(":::::::::::Continue::::::::::::::::: ");
    }
    //   countinue ::::: It is used To skip One Iteration ... skip some lines of Code

    return 0;
}