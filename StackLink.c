#include"StackLink.h"

void Menu()
{
	printf("-------------请选择-------------\n");
	printf("******1.Push        2.POP******\n");
	printf("******3.Del         4.Mod******\n");
	printf("******5.SSL         6.GT******\n");
	printf("******      0.EXIT       ******\n");

}
//通用操作
static StackLink* CommonOpera(StackLink*L, int i)
{
	int j = 0;
	StackLink* P = L;

	while (P != NULL && j < i)
	{
		P = P->next;
		j++;
	}
	return P;
}
//初始化链栈
StackLink* InitSL()
{
	StackLink* L = (StackLink*)malloc(sizeof(StackLink));
	if (L == NULL)
		return 0;
	else
	{
		L->next = NULL;
		return L;

	}

}

//压栈
void PushSL(StackLink* L)
{
	if (L == NULL)
		printf("链表为空!\n");
	else
	{
		StackLink*S = (StackLink*)malloc(sizeof(StackLink));
		printf("请输入要添加元素:>");
		scanf("%s", S->data);
		S->next = L->next;
		L->next = S;
		printf("添加成功!\n");
	}
}

//删除元素
void DeleteSL(StackLink* L)
{
	if (L == NULL)
		printf("链表为空!\n");
	else
	{
		StackLink* P = L->next;
		L->next = L->next->next;
		free(P);
		printf("删除成功!\n");
	}
}

//修改元素
void ModifySL(StackLink* L)
{

	if (L == NULL)
		printf("链表为空!\n");
	else
	{
		int i;
		printf("请输入要元素的位序:>");
		scanf("%d", &i);
		StackLink* P = CommonOpera(L, i);
		if (P == NULL)
		{
			printf("修改位序越界!\n");
		}
		else
		{
			printf("请输入新元素:>");
			scanf("%s", P->data);
			printf("修改成功!\n");
		}
	}
}

//查找元素
void SerachSL(StackLink* L)
{
	if (L == NULL)
		printf("链表为空!\n");
	else
	{
		int i;
		printf("请输入要查找元素的位序:>");
		scanf("%d", &i);
		StackLink* P = CommonOpera(L, i);
		if (P == NULL)
			printf("查找位序越界!\n");
		else
		{
			printf("%s", P->data);
			printf("查找成功!\n");
		}
	}
}

//弹栈
void PopSL(StackLink* L)
{
	if (L == NULL)
		printf("链表为空!\n");
	else
	{
		
		while (L->next != NULL)
		{
			StackLink* P = L->next;
			printf("%s,", P->data);
			L->next = L->next->next;
			free(P);
		}
		printf("\n");
		L->next = NULL;
	}
}

//读取栈顶元素
void GetTop(StackLink* L)
{
	if (L == NULL)
		printf("链表为空!\n");
	else
	{
		printf("%s", L->next->data);
	}
}