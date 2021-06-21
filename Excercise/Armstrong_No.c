#include <stdio.h>
int main()
{
    int rem, rev, org, i;
    for (i = 1; i <= 500; i++)
    {
        org = i;
        rev = 0;
        while (org != 0)
        {
            rem = org % 10;
            rev = rev + rem * rem * rem;
            org = org / 10;
        }
        if (rev == i)
        {
            printf("\n\n\t %d", rev);
        }
    }
    
    return 0;
}