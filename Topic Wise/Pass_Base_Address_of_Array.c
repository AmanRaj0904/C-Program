#include <stdio.h>
// in this we are passing Array as base address to formal argument
int func(int *ptr);
int main()
{
    int arr[] = {1, 2, 3, 4};
    printf("::::::::::::The Address of First Arr[0] is %u::::::::",&arr[0]);
    func(arr);
    func(arr);

    return 0;
}
int func(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The Value Of Array At Location %d and value is %d\n\n",i,ptr[i]);
    }
    *(ptr+1)=300;
    printf("::::::::::::::::\n");

    // Here We can Access Each Array element By its Address
    printf("The value At Address   is %d \n",*(ptr+1));
    printf("The value At Address is %d \n",*(ptr+2));
    printf("The value At Address is %d \n",*(ptr+3));
    printf("The value  %d \n",ptr); // this Will The base Address of The Array
    printf("The value  %d \n",*ptr); //this will Print The Value At Address 


}