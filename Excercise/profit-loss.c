#include<stdio.h>
int main()
{

   int sell,cost,pro,los;
   printf("Enter the Cost Price");
   scanf("%d",&cost);
   printf("Enter the Sell Price");
   scanf("%d",&sell);
   pro=sell-cost;
   los=cost-sell;
   if(sell>cost)
   {
       printf("you are in profit\n");
       printf("you got profit of rs %d\n",pro);
   }
   else
   {
       printf("you are in loss\n");
       printf("you are in loss of rs %d\n",los);
   }

    return 0;   
}