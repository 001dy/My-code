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
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�񲻺Ϸ���\n");
			break;
		}
	} while (i);
	return 0;
}