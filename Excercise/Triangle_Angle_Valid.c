#include<stdio.h>
int main()
{
    int first_angle,second_angle,thrid_angle,sum_angle,larg;
    printf("Enter The First Angle");
    scanf("%d",&first_angle);
    printf("Enter The Second Angle");
    scanf("%d",&second_angle);
    printf("Enter The third Angle");
    scanf("%d",&thrid_angle);
    
    if(first_angle>second_angle)
    {
        printf("First angle is greater \n");
        larg=first_angle;
    }
    else if(second_angle>thrid_angle)
    {
        printf("Second angle is greatest \n");
        larg=second_angle;

    }
    else
    {
        printf("Third Angle is Greatest \n");
        larg=thrid_angle;
    }

// printf("%d\n",larg);

    sum_angle=first_angle+second_angle;
    if(sum_angle>larg)
    {
        printf("triangle is Valid");
    }
    else
    {
        printf("Triangle is Not valid");
    }

   
    return 0;
}
