#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkeList.h"

int main()
{
	LinkedList L=InitList();
	int i;
	do{
		Menu();
		printf("��ѡ�����:>");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			Insert(L);
			break;
		case 2:
			InsertNextNode(L);
			break;
		case 3:
			InsertPriorNode(L);
			break;
		case 4:
			DeleteList(L);
			break;
		case 5:
			GetElem(L);
			break;
		case 6:
			LocateElem(L);
			break;
		case 7:
			ModifyElem(L);
			break;
		case 8:
			My_printf(L);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ����������ڣ�����\n");
			break;
		}

	} while (i);
	return 0;
}