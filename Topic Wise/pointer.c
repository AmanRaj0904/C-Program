#include<stdio.h>
int main()
{
    // In This We Will Learn Pointer
         int a = 20;
         int *ptr = &a;
         int *ptr1 = NULL;     //Assign Null in ptr1
         printf("The Value Of A is %d\n",a);
         printf("The Address of A is %x\n\n",ptr);
         printf("The Value Inside That Address Is %d\n\n",*ptr);

        //  NULL Pointer = A Pointer That Is Not Assigned Any Value 
        printf("The garbage Value In Ptr1 is %p",ptr1);


 return 0;    
}