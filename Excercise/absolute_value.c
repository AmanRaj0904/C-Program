#include<stdio.h>
int main()
{

    int num ,zero=0;
    printf("Enter The Number");
    scanf("%d",&num);
    // zero=zero+num;
    if(num<0)
    {
    printf("The Absolute Value is   -%d ",num);
        
    }
    else
    {
         printf("The Absolute Value is =  %d ",num);
    }

    return 0;   
}