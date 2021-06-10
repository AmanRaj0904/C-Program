#include<stdio.h>
int main()
{
    char c;
    printf("Enter The Character  =  ");
    scanf("%c",&c);
    
   if((c>=65)&&(c<=90))
   {
       printf("Character is in Capital Letter");
   }
   else if((c>=97)&&(c<=122))
   {
       printf("Character is  in Small Letter");
   }
   else if((c>=0)&&(c<=9))
   {
       printf("You Have Entered a Digit");
   }
   else
   {
       printf("You Have entered wrong input");
   }

   
    return 0;
}
