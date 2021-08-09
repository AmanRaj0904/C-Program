#include <stdio.h>
int changeval(int *x);
int main()
{
    int a = 20;
    printf("The Original Value of a is %d\n", a);
    changeval(&a);
    printf("The Value of a After Change is  %d\n", a);
    return 0;
}
int changeval(int *x)
{ 
    *x = 123;
    return 0;
}