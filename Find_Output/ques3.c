#include<stdio.h>
int main()
{
    int x=13,y;
    y= x++ + x++;
    printf("%d\n",y);
    printf("%d\n",x);
    return 0;
}