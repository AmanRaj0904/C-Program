#include <stdio.h>
int main()
{
    int num;
    // In This We Will Learn About GoTo Statement
    // Also Called Jump Statment In C
    // it is used to transfer program Control To Predefine Lable
    // label:
    //     printf("We Are inside lable  \n");
    //     goto end;
    // printf("Hello Sonu ");
    // goto label;
    // end:
    // printf("This Is Inside End \n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter a Number ||  enter 0 to exit       ");
            scanf("%d", &num);
            if (num == 0)
            { 

                // break;
                goto end;
            }
        }
    }
    end:
    return 0;                        
}