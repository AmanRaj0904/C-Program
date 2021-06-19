#include <stdio.h>
int main()
{
    int from, to, i;
    printf("Enter no From Where To Start");
    scanf("%d", &from);
    printf("enter The Last Number");
    scanf("%d", &to);
    for (i = from; i <= to; i++)
    {
        if (i % 2 == 0)
        {
            printf("Even No is %d = \n", i);
        }
        else
        {
            printf("Odd No is %d = \n", i);
        }
    }
}