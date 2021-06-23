#include <stdio.h>
#include <conio.h>
clrscr();
int sonu();
int star(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%c\n", '*');
    }
}

int main()
{

    sonu(10, 13);
    star(10);

    return 0;
}
int sonu(int a, int b)
{
    int sum;
    // printf("This Is a user Define Function !");
    sum = a + b;
    printf("The Sum Of A+B is Sum=%d", sum);
    return 0;
}