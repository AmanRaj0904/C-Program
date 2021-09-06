#include <stdio.h>
int main()
{
    // => Fgetc
    FILE *ptr = NULL;
    ptr = fopen("This.txt", "w"); //For fputc use "W" write Mode To write Character
    char c = fgetc(ptr);
    printf("The Character I read Was =  %c\n", c);
    fclose(ptr);

    // => Fgets
    char str[4];
    fgets(str, 5, ptr);
    printf("The String is %s\n", str);
    fclose(ptr);
    // => fputc
    fputc('M', ptr);
    // =>Fputs
    fputs("y Name is Aman", ptr);

    fclose(ptr);
    return 0;
}