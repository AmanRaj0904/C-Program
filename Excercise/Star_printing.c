#include <stdio.h>
int main()
{
    int num;
    int i, j, n;
    printf("Choose 0 for Star Pattern and 1 for Triangular Star \n");
    printf("Enter 0  or 1\n");
    scanf("%d", &num);
    switch (num)
    {
    case 0:

        printf("Enter the Number\n");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    case 1:
        printf("Enter The Number In Case 2    ");
        scanf("%d", &n);
        for (i = n; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    default:
        printf("Wrong Input");
    }

    return 0;
}