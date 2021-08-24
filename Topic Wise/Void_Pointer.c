#include <stdio.h>
int main()
{
    // Void Pointer
    int a = 20;
    float b = 20.8;
    void *ptr; //Here We Created Void Pointer
    ptr = &a;
    printf("The Value Of A After Derefrencing and TypeCasting is %d\n", *((int *)ptr)); // Here first We Did The TypeCasting of Void Pointer To integer Pointer (int *)ptr) after This  simply derefrencing the pointer To get Value *((int *)ptr)
    ptr = &b;   
    printf("The Value Of b After Derefrencing and TypeCasting is %f\n", *((float *)ptr)); //Typecasting Void Pointer to float pointer
    

        return 0;
}