#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkeList.h"

int main()
{
	LinkedList L=InitList();
	int i;
	do{
		Menu();
		printf("请选择操作:>");
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
			printf("退出程序\n");
			break;
		default:
			printf("选择操作不存在！！！\n");
			break;
		}

	} while (i);
	return 0;
}