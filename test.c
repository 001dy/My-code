
#include "ListHead.h"

int main()
{
	Sqlist L;
	InitList(&L);//��ʼ��
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
			printf("�˳���\n");
			break;
		default:
			printf("ѡ����󣡣���");
			break;
		}
	} while (i);
	return 0;
}