#include <stdio.h>
// int sum; //This Variable is Global variable And Default Value of this variable is 0 and This variable can be Used Anywhere in Program;
int fun()
{
    extern int sonu;
    return sonu;
}
int sonu = 20;
int main()
{
    // printf("%d", sonu);
    // printf("%d\n\n", sum); //It Will Print Default value As ZERO 0
    // sum=20; //Defination of variable
    //  printf("%d\n\n",sum);
    return 0;
}