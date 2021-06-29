#include <stdio.h>
int main()
{
    int i;
    while (i = 10)
    {
        printf("%d\n", i);
        i=i+1;
    }
// this is also a infinite Loop and It will print only 10 infinite times it will not increment
    return 0;
}