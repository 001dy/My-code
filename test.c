#include "DoubleLink.h"

int main()
{
	DLinklist L = InitDNode();
	int i;
	do
	{
		Menu();
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			InsertNextDNode(L);
			break;
		case 2:
			DeleteDNode(L);
			break;
		case 3:
			SearchDNode(L);
			break;
		case 4:
			ModifyDNode(L);
			break;
		case 5:
			My_Printf(L);
			break;
		case 0:
			printf("退出程序！\n");
			break;
		default:
			printf("选择不合法！\n");
			break;
		}
	} while (i);
	return 0;
}