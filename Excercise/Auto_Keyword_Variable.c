#include <stdio.h>
int fun(int, int);
int main()
{

    //    printf("%d",sum); //Here We are using Sum variable Which is Local Variable for  below Fun beacuse of this It will throw Error Msg
    int sum = fun(3, 4); //This Sum Variable is Local variable For Main functon
    printf("%d\n", sum);
    return 0;
}
int fun(int a, int b)
{
    int sum = a + b; //This Sum Variable is local to this function So we cannot use is outside Of this function or if we use It will Throw Error Msg

    //By Default Auto Storage class is Auto

    return sum;
}