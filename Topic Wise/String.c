#include <stdio.h>
int ptrstr(char str[]);
int main()
{
    // char str[] = {'A', 'M', 'A', 'N','R','A','J', '\0'};
    char str[] = "SONU";
    ptrstr(str);
    return 0;
}
int ptrstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }

    return 0;
}