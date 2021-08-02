#include <stdio.h>
int main()
{
    int num, i,j;
    printf("Enter The Number");
    scanf("%d",&num);
    // for ( i = 0; i <=num; i++)
    // {
    //     for ( j = 0; j <= i; j++)
    //     {
    //        printf("*");
    //     }
    //     printf("\n");
    // }
    for ( i = num; i >=1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
          printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}