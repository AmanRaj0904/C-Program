#include <stdio.h>
int main()
{

    int arr[]= {1,2,3,4,5,6,7};
    int a = 20;
    int *ptr = &a;
    printf("%d\n", &a);
    printf("%d\n", ptr);
    ptr++;
    printf("%d\n",ptr);
    printf("%d\n",ptr+2);
    printf("%d\n",ptr-1);
    // in this address is incrementing or decrementing as per the data type or viceversha::: 



    // :::::::::::::::::::::::
    // Array And Pointer
    // ::::::::::::::::
     printf("the value at position 3 in Array is %d\n",arr[3]);
     printf("The Address of first Element of Array is %d\n",&arr[0]);
     printf("The Address of first Element of Array is %d\n",arr);      // Here arr return the base address of the array
     printf("The Address of second  Element of Array is %d\n",&arr[1]);
    //  look at here the address is incresing as per the size of data type and it depend upon the architecture to architecture 
    // ::::::::::::::::::::::::::::::::::
    // The Value At the address
    // :::::::::::::::::::::::::::::::::::::
    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", arr[0]);
    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", arr[1]);
    printf("The value at address of second element of the array is %d \n", *(arr + 1));

 
    return 0;
}
