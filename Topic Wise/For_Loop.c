#include <stdio.h>
int main()
{
    // for Loop ---  First Increment then Condition is Checked
    int i,j,k=1;
    for ( i = 0,j=0; i < 5; i++)
    // we can also use two Variable in declaration
    {
        printf("%d   %d\n",i,j);
    }
   printf(":::::::::::::::::::::::::::::::::::");

    // this will also Run beacuse of pre iniliize
    for (; k < 10; k++)
    {
        printf("%d \n",k);
    }
   
 
}
// Note : if There is Two Condition in For Loop it will always  check the condition which is Writen in Last.

// Note:::any Non_zero value is True and Zero is False by default

// expression 3 is Used to Update The loop variable. We Can also update More Than one Variable at a same time