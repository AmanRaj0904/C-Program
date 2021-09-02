#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a =30;
    int *ptr; //This Pointer Is a Wild Pointer Beacause It is a uninitilize Pointer.
    // *ptr=50;
    ptr=&a;// Here Ptr is No longer Wild Pointer Beacuse We have initilize The Address of A Variable.
    printf("The Value Of A after Derefrencing Is %d",*ptr);
    return 0;
}