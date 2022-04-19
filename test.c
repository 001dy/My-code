
#include "ListHead.h"

int main()
{
	Sqlist L;
	InitList(&L);//初始化
	int i;
	do
	{
		Menu();
		scanf("%d", &i);
		switch (i)
		{
		case ADD:
			AddElem(&L);
			break;
		case DEL:
			DeleteElem(&L);
			break;
		case SEARCH:
			SerachBook(&L);
			break;
		case SHOW:
			Show(&L);
			break;
		case MODIFY:
			Modify(&L);
			break;
		case EXIT:
			printf("退出！\n");
			break;
		default:
			printf("选择错误！！！");
			break;
		}
	} while (i);
	return 0;
}