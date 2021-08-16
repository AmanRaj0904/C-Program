#include <stdio.h>
#include <stdlib.h> //Must Use Before The  use of Dynamic Memory Allocation Function
int main()
{
    //use of CALLOC
    // initially in calloc memory is initilize with Zero 0 value
    int *ptr;
    int n;
    // Allocating Memory on Runtime
    printf("Enter The Size od Array\n");
    scanf("%d", &n); //Runtime Allocation
    ptr = (int *)calloc(n , sizeof(int));
    // Entering The Value  in the dynamic array Using Loop
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Value At %d Location \n", i);
        scanf("%d", &ptr[i]);
    }
    // printing The Value of Dyanamic Array Through Loop
    for (int i = 0; i < n; i++)
    {
        printf("The Value At Location %d is = %d\n", i, ptr[i]);
    }
    // if We exceed the Size of Loop Then It Will Return Garbage Values



    //if We Print the Value of The Array Without Entering The Value then It Will Print The its Default value Which is ZERO.

    
     
    return 0;
}