#include "CycleLink.h"

int main()
{
	CLinklist L = InitCLink();
	int i;
	do
	{
		Menu();
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			InsertCLink(L);
			break;
		case 2:
			DeleteCLink(L);
			break;
		case 3:
			ModifyCLink(L);
			break;
		case 4:
			SerachCLink(L);
			break;
		case 5:
			My_printf(L);
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