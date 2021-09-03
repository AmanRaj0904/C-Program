#include<stdio.h>
#include<stdlib.h>
int main()
{
     printf("The File Name is =  %s \n",__FILE__);
     printf(__TIME__);  //The output will be the current time
     printf(__DATE__); //The output will be the current date.
     printf( "%d",__LINE__); //The OutPut Will Be Current Line.
    printf("ANSI ::  %d",__STDC__); //It is used to check whether our program is being compiler using ANSI standard or not. It will return 1 if true.
    return 0;
}