#include <stdio.h>
int sum(int, int);
int main()
{
    int a = 10, b = 20, c;
    c = sum(a, b);
    printf("The Sum is %d", c);
    return 0;
}
int sum(int x, int y)
{
    return x + y;
}
// in call by value we are passing a copy of value of actual argument to formal argument.in call by value original value will not be changed.