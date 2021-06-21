#include <stdio.h>
int main()
{
    int matchStick = 21, i, user;
    printf("Enter The MatchStick Which You Want To PickUp");
    scanf("%d", &user);

    for (i = 1; i < 4; i++)
    {
        if (user == i && user < matchStick)
        {
            printf("You Have Picked Your MatchStick");
        }
       
    }

    return 0;
}