#include<stdio.h>
 int main()
 {
     int length,breadth,area,peri;
     printf("Enter The Length Of Reactangle");
     scanf("%d",&length);
     printf("Enter The Breadth Of Reactangle");
     scanf("%d",&breadth);
     area=length*breadth;
     peri=2*(length+breadth);
     printf("Area Of Recatnge is %d\n",area);
     printf("Perimeter of Reactangle is %d\n",peri);
     if(area>peri)
     {
         printf("Area is Greater");
     }
     else
     {
         printf("Perimeter is Greater");
     }
     return 0;
 }