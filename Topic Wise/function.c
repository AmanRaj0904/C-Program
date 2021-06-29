#include <stdio.h>
void sonu();
int main()
{
    sonu();
    return 0;
}
void sonu()
{
    int a, b, c, sum;
    printf("Enter a  number");
    scanf("%d", &a);
    printf("Enter second  number");
    scanf("%d", &b);
    printf("Enter third number");
    scanf("%d", &c);
    sum = a + b + c;
    printf("the sum of three no is %d", sum);
}
