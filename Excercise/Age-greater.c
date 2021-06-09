#include<stdio.h>
int main()
{

    int ram,shyam,ajay;
    printf("Enter The age of ram");
    scanf("%d",&ram);
    printf("Enter The age of shyam");
    scanf("%d",&shyam);
    printf("Enter The age of ajay");
    scanf("%d",&ajay);
    if(ram>shyam)
    {
        printf("Ram is Greatest");
    }
    else if(shyam>ajay)
    {
        printf("Shyam is Greatest");
    }
    else if(ajay > ram)
    {
        printf("ajay is Greatest");
    }
    return 0;   
}