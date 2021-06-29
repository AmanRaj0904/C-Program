#include<stdio.h> 
int main()
{
    int age;
    printf("Enter A number");
    scanf("%d",&age);
    printf("you have enter age is %d\n",age);
    if (age>18)
    {
        printf("Eligible For voting\n");
    }
    
    return 0;
}
