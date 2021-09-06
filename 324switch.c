#include<stdio.h>
int main()
{
	int type = 0;

    scanf("%d",&type);

	switch(type)
      {
		case 1:
		printf("你好\n");
		break;
    	case 2:
		printf("你好吗?\n");
		break;
    	case 3:
    	printf("再见咯\n");
		break;
		case 4:
		printf("神魔孽\n");
		break;
	  default:
		printf("不要搞花里胡哨!\n");	
      }
}
