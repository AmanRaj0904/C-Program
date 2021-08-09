#include <stdio.h>
int addsub(int *x, int *y);
int main()
{
    int a = 4, b = 3;
    addsub(&a, &b);
    printf("The Value of  a  =  %d  \n", a);
    printf("The Value of  b  =  %d  \n", b);
    return 0;
}
int addsub(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;

    return 0;
}