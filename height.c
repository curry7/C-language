#include<stdio.h>
int main()
{
    double height1;
    double height2;
    printf("请输入身高(尺寸):");
    scanf("%lf %lf",&height1,&height2);    
    printf("换算成功=%f\n",((height1+height2/ 12)*0.3048));
    return 0;
}
