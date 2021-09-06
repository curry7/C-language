#include <stdio.h>
int main()
{
	int score = 0;
	scanf("%f",&score);

	if("%f>=90")
	{
		printf("A\n");
	}
	else if("%f>=80,%f<90")
	{
		printf("B\n");
	}	
	else if("%f>=70,%f<80")
	{
		printf("C\n");
	}
	else if("%f>=60,%f<70")
	{
		printf("D\n");
	}
	else if("%f<60")
	{
		printf("E\n");
	}
	else ("%f<0,%f>100")
	{
		printf("你他妈是来捣乱的吧!");
	}
	return 0;
}
