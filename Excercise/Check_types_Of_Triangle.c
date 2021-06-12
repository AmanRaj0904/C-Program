#include <stdio.h>
int main()
{
    int first_angle, second_angle, thrid_angle, sum_angle, larg, num;
    printf("Enter The First Angle");
    scanf("%d", &first_angle);
    printf("Enter The Second Angle");
    scanf("%d", &second_angle);
    printf("Enter The third Angle");
    scanf("%d", &thrid_angle);

    printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");

    printf("Press 1 To Check The Equilateral Triangle  \n");
    printf("Press 2 To Check The Isosceles Triangle    \n");
    printf("Press 3 To Check The Right-angled Triangle  \n");
    printf("Press 4 To Check The Scalene Triangle      \n");
    printf("Press 4 To Check The Obtuse Triangle       \n");

    printf("Enter Your Chioce To Check Types of Triangle   ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        if (first_angle == 60 && second_angle == 60 && thrid_angle == 60)
        {
            printf("The Triangle is Equilateral Triangle");
        }
        else
        {
            printf("Triangle is Not Equilateral Triangle");
        }
        break;

    case 2:
        if (first_angle == second_angle || second_angle == thrid_angle || thrid_angle == first_angle)
        {
            printf("IsoScele Triangle ");
        }
        else
        {
            printf("NoT Isoscele Triangle");
        }
        break;
    case 3:
        if (first_angle != second_angle && second_angle != thrid_angle && first_angle != thrid_angle)
        {
            printf("Triangle is Scalene Traingle");
        }
        else
        {
            printf("Not Scalene triangle");
        }
        break;


        return 0;
    
}