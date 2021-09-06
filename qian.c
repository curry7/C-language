#include<stdio.h>
int main()
{
   int price = 0;
   int amount = 0;
   printf("请输入花费金额:");
   scanf("%d",&price);

   printf("请输入饭票金额:");
   scanf("%d",&amount);
    
   int change = amount-price;
   printf("找您%d\n",change);
   return 0;
}
