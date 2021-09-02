#include <stdio.h>
#include "main.c" // it will look into Current Directory and all the All main,c Files in Present File
#define PI 3.14   //This PI variable Will Be availible Throught Program 
#define Square(x) x*x // This is a Macro Defined
int main()
{
    int i = 30;
    printf("The Value of a is %d\n", i);
    printf("The Value if PI is %f\n",PI);
    printf("The Square of i is %d\n\n",Square(i));  
    return 0;
}