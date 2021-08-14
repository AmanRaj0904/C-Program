#include <stdio.h>
struct Travel_Agency
{
    char name[20];
    int driving_license_num;
    char route[20];
    int kms;
};

int main()
{
    struct Travel_Agency d[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the Details of %d Drivers\n\n", i);
        printf("Enter The Name of %d Driver\n",i);
        scanf("%s", &d[i].name);
        printf("Enter The driving_license_num of %d driver \n",i);
        scanf("%d", &d[i].driving_license_num);
        printf("Enter The Route of %d driver\n",i);
        scanf("%s", &d[i].route);
        printf("Enter The kms of %d driver\n",i);
        scanf("%d", &d[i].kms);
    }

      printf("::::::::::::::::::::::::::::::::::::::::::\n\n");
    for (int i = 0; i < 3; i++) //Loop starting From Zero Beacuse Array Start From Zero
    {
        printf("Details of the %d Drivers\n",i);
        printf("::::::::::::::::::::::::::::::::::\n\n");
        printf("The Name of %d Driver is = %s \n\n\t\t",i,d[i].name);
        printf("The driving_license_num of %d Driver is = %d \n\n\t\t",i,d[i].driving_license_num);
        printf("The route of %d Driver is = %s \n\n\t\t",i,d[i].route);
        printf("The kms of %d Driver is = %d \n\n\t\t",i,d[i].kms);
    }
    
    return 0;
}