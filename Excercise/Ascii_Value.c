#include <stdio.h>
int main()
{
    char i;
    // Ascii value  Large alphabet char
    // for ( i = 65; i <= 90; i++)
    // {
    //    printf("%c\n",i);
    // }

    //   Ascii value  Small alphabet char
    // for ( i = 97; i <= 122; i++)
    // {
    //    printf("%c\n",i);
    // }

    for ( i = 0; i <=127; i++)

    {
        printf("%c\n",i);
        if(i==127)
        {
            break;
        }
    }
    

}