#include<stdio.h>
int main()
{

    int year;
    printf("Enter The Year TO check");
    scanf("%d",&year);
    if(year%100==0)
    {
        printf("its a Leap year");
    }
    else if(year%100==0&&year%400==0)
    {
        printf("This Year is A leap year");
    }
    else
    {
        printf("Not leap Year");
    }

    return 0;   
}