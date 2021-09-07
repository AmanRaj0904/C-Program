#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("The Sum is %d \n", sum(2, 5)); //Testing Function
    int (*fptr)(int, int);  //Declaring a Function Pointer
    fptr = &sum; //Creating a Function Pointer
    int d = (*fptr)(4, 6); //Derefrencing a Function Pointer
    printf("The Value of D Is %d", d);
    return 0;
}