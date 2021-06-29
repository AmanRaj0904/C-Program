#include <stdio.h>
int main()
{
    int a;
    printf("Enter No");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("This Is CASE 1");
        break;
    case 2:
        printf("This Is CASE 2");
        break;

    default:
        printf("Wrong Input ");
        break;
    }
    return 0;
}
