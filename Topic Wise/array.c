#include <stdio.h>
int main()
{
    int marks[4];

    int score[10], i,j,k;
    int odd[3][3]={{2,4,7},
    {6,8,4}};
    int even[4]={2,4,6,8};  //declaration With Inislization
    printf("The Even No Are %d \n \n",even[0]);
    printf("The Even No Are %d \n \n",even[1]);
    printf("The Even No Are %d \n \n",even[2]);
    printf("The Even No Are %d \n \n",even[3]);

    marks[0] = 10;
    printf(" The Marks Of First Student Is = %d\n", marks[0]);
    marks[0] = 40;
    printf(" The Marks Of First Student Is = %d\n", marks[0]);
    printf("The Address of marks[0] is = %u\n", &marks[0]);
    marks[1] = 20;
    marks[2] = 30;
    marks[3] = 40;
    printf("The Address of marks[1] is = %u\n", &marks[1]);
    printf("The Address of marks[2] is = %u\n", &marks[2]);
    printf("The Address of marks[3] is = %u\n", &marks[3]);
    inislizing the value in array through loop
    for (i = 0; i < 10; i++)
    {
        printf("Enter The Value At Location %d In Array", i);
        scanf("%d", &score[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("The value Of Array At Address %d is = %d \n \n", i, score[i]);
    }
    for ( j = 0; j < 3; j++)
    {
        for ( k = 0; k < 3; k++)
        {
            printf("%d      ",odd[j][k]);
        }
     printf("\n");   
    }
    
}