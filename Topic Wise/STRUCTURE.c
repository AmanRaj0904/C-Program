#include<stdio.h>
#include<string.h>
struct  student
{   
    char name[20];
    int id;
    int marks;
    char fav_char;
}s1; //Global Variable

int main()
{  
    struct student s1; //Local Variable
    
    
    s1.name[10];
    s1.id=20;
    s1.marks=80;
    s1.fav_char='c';
    strcpy(s1.name,"SONU SINHA");
    printf("The Name Of Student is = %s\n\n",s1.name);
    printf("The Id Of Student is = %d\n\n",s1.id);
    printf("The Marks Of Student is = %d\n\n",s1.marks);
    printf("The fav_char Of Student is = %c\n\n",s1.fav_char);

    return 0;
}