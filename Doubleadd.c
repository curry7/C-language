#include<stdio.h>
int main()
{
   int a;
   int b;
   /*printf("请输入a的值:");
   scanf("%d",&a);
   
   printf("再输入b的值:");
   scanf("%d",&b);*/

   printf("请输入a和b的值:");
   scanf("%d %d" ,&a,&b);

   printf("两数之和是:%d+%d=%d\n",a,b,a+b);
   return 0;
}
