#include <stdio.h>
int func(int a)
{
    // printf("The Value of B is %d\n", b);
    //Here We are Trying To use Local variable B but Getting Error.
    return a * 10;
}
int main()
{
    int b = 20; // This Variable is Local variable We Cannot use it Ouside of this Function.The Scope of This variable is only Inside This variable.
    int val = func(b);
    int *ptr = &val;
    printf("The Value Inside Func is = %d\n", val);
    return 0;
}