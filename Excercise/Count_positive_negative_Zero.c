#include <stdio.h>
int main()
{
    int from, to, positive=0, negtive=0, zero=0, i;
    printf("Enter The NO To Start ");
    scanf("%d", &from);
    printf(":::::::::To:::::::::");
    scanf("%d", &to);
    for (i = from; i < to; i++)
    {
        if (i > 0)
        {
            positive++;
        }
        else if (i < 0)
        {
            negtive++;
        }
        else
        {
            zero++;
        }
    }
    printf("Count Of Positive No is :: %d \n", positive);
    printf("Count Of Negative No is :: %d \n", negtive);
    printf("Count Of zero No is :: %d \n", zero);
    return 0;
}