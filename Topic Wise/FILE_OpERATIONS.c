#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[34] = "Hello My Name is Aman Raj ";
    // ==> Reading A File
    ptr = fopen("This.txt", "r");
    fscanf(ptr, "%s", string);
    printf("%s\n", string);
    //  ==>  Writing Into a FIle
    ptr = fopen("This.txt", "a");
    fprintf(ptr, "%s", string);
    return 0;
}