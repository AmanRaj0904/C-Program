#include<stdio.h>
int main()
{

    int first_angle,second_angle,third_angle,sum=0;
    printf("Enter The First angle");
    scanf("%d",&first_angle);
    printf("Enter The Second angle");
    scanf("%d",&second_angle);
    printf("Enter The third angle");
    scanf("%d",&third_angle);
    sum=first_angle+second_angle+third_angle;
    if(sum==180)
    {

    }
        printf("Triangle is  Valid");
    else
    {
        printf("Triangle is not Valid");
    }


    

    return 0;   
}