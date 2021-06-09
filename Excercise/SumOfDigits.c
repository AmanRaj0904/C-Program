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
      
        rev=rev+rem;
        num=num/10;

    }
    printf("The Sum of its Digit is = %d",rev);

    

    return 0;   
}