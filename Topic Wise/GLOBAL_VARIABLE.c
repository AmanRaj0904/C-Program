#include <stdio.h>
int num = 50; //This variable is global variable It can be used throughout The program.
int sonu();
int main()
{
    printf("Value Of Global variable inside main is %d\n", num);
    sonu();
    return 0;
}
int sonu()
{
    printf("The Value of global variable inside function  is %d\n", num); //using global Varable inside This Function
    return 0;
}