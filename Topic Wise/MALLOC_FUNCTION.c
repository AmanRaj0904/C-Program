#include <stdio.h>
#include <stdlib.h> //Must Use Before The  use of Dynamic Memory Allocation Function
int main()
{
    //use of Malloc
    int *ptr;
    int n;
    // Allocating Memory on Runtime
    printf("Enter The Size od Array\n");
    scanf("%d", &n); //Runtime Allocation
    ptr = (int *)malloc(n * sizeof(int));  //Here We TypeCasted Malloc beacuse it Return Void Pointer typecasted to Integer
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
    return 0;
}
