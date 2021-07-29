#include <stdio.h>
int main()
{
    // pointer arithemetic 
    // ++
    // --
    // +
    // -
    // These all operator are used in Pointer arthemetic
    int a = 34;
    int *ptr = &a;
    printf("%d\n\n", ptr);
    printf("%d\n\n", ptr+1);
    // by incrementing Pointer or Decrementing the Value of pointer is not incrementing or decrementing the Address is incrementing  Decrementing  as per the data type size if we write (ptr++) then it is incremented by type of data-type int has 4byte or vice versha.
    return 0;
} 