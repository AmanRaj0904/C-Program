 #include <stdio.h>
int main()
{
    float x = 1.1;
    
    while (x == 1.1)
    {
        printf("%f\n", x);
        x = x - 0.1;
    }
//   it is not showing output beacuse the x is not equal to the while condition x store the values as 1.100000 and in condition while it compare vales as 1.10000 == 1.1 so this is not equal and hence it is not showing anykind of output.
    return 0;
}