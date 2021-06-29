#include <stdio.h>
int main()
{
    int science, maths;
    printf("Enter The marks of science");
    scanf("%d", &science);
    printf("Enter The marks of maths");
    scanf("%d", &maths);
    if (science > 40 && maths >= 40)
    {
        printf("you Got Prize Of RS  -  45");
    }
    else if (science <= 40 && maths<=40)
    {
      
          printf("you Got RS 15 AS prize in science and maths");
    }
   else
    {
        printf("Sorry Failed !");
    }

    return 0;
}