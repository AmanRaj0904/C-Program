#include <stdio.h>
int sonu(int a,int b);
int main()
{
    int a, b, c;
    a = 50;
    b = 50;
    c = sum(a, b);
    printf("The Sum is = %d \n", c);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
