#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("The Value of Argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("This Argument at Index %d has value of %s\n", i, argv[i]);
    }

    return 0;
    // write This Command In terminal
    // .\Command_Line_Arguments
}
