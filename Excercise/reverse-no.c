#include<stdio.h>
int main()
{

    int num,org,rev=0,rem;
    printf("Enter The Year TO check");
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
        rem=num%10; 
        rev=rev*10+rem;
        num=num/10;

    }
    printf("The Reverse no is %d",rev);

    

    return 0;   
}