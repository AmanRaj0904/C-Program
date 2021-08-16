#include <stdio.h>
#include <stdlib.h> //Must Use Before The  use of Dynamic Memory Allocation Function
int main()
{
    //use of REALLOC
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    //Use of realloc Here We Are Creating A new Size of Array
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int)); //Creating New Array Size
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    //   Displaying The Value Of New Array Size
    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n", i, ptr[i]);
    }
    free(ptr); // This FUnction is Used for free the Dynamic allocated Memory

    return 0;
}