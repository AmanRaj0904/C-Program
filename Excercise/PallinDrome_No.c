#include <stdio.h>
int PallinDrome(int);
int main()
{
    int num;
    printf("Enter The Number To Check Pallindrome     ");
    scanf("%d", &num);
    PallinDrome(num);
    return 0;
}
int PallinDrome(int n)
{
    int rem, rev = 0;
    int org_no = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (rev == org_no)
    {
        printf("Pallindrome Number");
    }
    else
    {
        printf("Not Pallindrome Number");
    }
    return 0;
}