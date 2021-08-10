#include <stdio.h>
#include <string.h>
int main()
{

    char s1[] = "sonu";
    char s2[] = "sinha";
    char s3[5];
    // Strings Function Before Use of This Function We have To use #include<string.h> in Header file 
    printf("%s", strcat(s1, s2)); //This FUnction Add Two Srtings
    printf("The Length Of S1 String is %d\n", strlen(s1)); //This FUnction Will Return The length of The String And It will Not Count ths Null Character.
    printf("The Length Of S2 String is %d\n", strlen(s2));
    printf("The Reverse Of First String is   %s  \n", strrev(s1));
    printf("The Reverse Of Second String is   %s  \n", strrev(s2));
    printf("The First String into second String %s\n",strcpy(s3,s1)); //This Function Will Copy The String Right TO left
    printf("%s\n",s3);
    printf("%d",strcmp(s1,s3));
    return 0;
}