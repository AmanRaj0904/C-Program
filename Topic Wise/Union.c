#include <stdio.h>
#include <string.h>
union Student
{
    int name[20];
    int id;
    int marks;
    char fav_char;
};

int main()
{
    union Student s1;
    strcpy(s1.name, "Aman Raj");
    s1.id = 20;
    s1.marks = 100;
    s1.fav_char = 'S';

// Here The Data Will be overwritten on one another beacuse union Share a single memory for all the member.So if we want to Access more than One Value Then Data will be overwritten. and The size of Union Depend Upon The Largest data type Size inside union
    printf("The Name of Student is = %s\n\n", s1.name);
    printf("The Id of Student is =  %d\n\n", s1.id);
    printf("The Marks of Student is = %d\n\n", s1.marks);
    printf("The fav_char of Student is = %c\n\n", s1.fav_char);
    return 0;
}