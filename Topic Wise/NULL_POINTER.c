#include <stdio.h>
int main()
{
    int a = 30;

    int *ptr = NULL; //Null pointer Cannot be Derefrenced
    printf("The Address of A is %d\n", ptr); //Null Pointer Contains Zero Value.
    printf("The Value Of A is %d\n", *ptr);

    return 0;
}