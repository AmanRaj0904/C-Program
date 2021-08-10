#include <stdio.h>
int main()
{
    int arr[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter The Array To Reverse\n");
        scanf("%d", &arr[i]);
    }

    printf("Before Reverse Arrays are\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("After Reversal New Array is :-\n");
    for (i = 4; i >= 0; --i)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}