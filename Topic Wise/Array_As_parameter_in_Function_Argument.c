#include <stdio.h>
int func1(int array[]);
int main()
{
    int arr[] = {1, 2, 3, 4};

    printf("The Before Value of arr[0] is = %d\n\n\n", arr[0]);
    func1(arr);
    printf("The New value of arr[0] is = %d \n\n",arr[0]);
    return 0;
}
int func1(int array[]) //while Passing The Array into formal Argument The Array Gets Converted Into Pointers.
{
    for (int i = 0; i < 4; i++)
    {
        printf("The Value Of Array In Location %d and Value is %d\n", i, array[i]);
    }
    array[0] = 50; // Here if We change the Value of an array in function Then It is also reflected in Main Array with Change.
}