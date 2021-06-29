//  kms to miles
// inches to foot
// cms to inches
// pound to kgs
// inches to meters
#include <stdio.h>
int main()
{
    int num;
    int kms;
    float miles;
    int inches;
    float foot;
    printf("Enter 1 to convert kms to miles \n\n");
    printf("Enter 2 to convert inches to foot \n\n");
    printf("Enter 3 to convert cms to inches \n\n");
    printf("Enter 4 to convert pound to kgs  \n\n");
    printf("Enter 5 to convert inches to meter \n\n");

    printf("::::::::::::::::::::::::::::::\n");
    printf("::::::::::::::::::::::::::::::\n");

    printf("Enter your Choice 1 to 5      ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Enter km to covert into miles   ");
        scanf("%d", &kms);
        miles = kms * 0.6214;
        printf(" %f miles ", miles);
        break;
    case 2:
        printf("enter inches to foot  ");
        scanf("%d", inches);
        foot = inches / 12;
        printf("foot is %f", foot);
        break;
    default:
        printf("Wrong Input !");
    }
    return 0;
}