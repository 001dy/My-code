#include "DoubleLink.h"


//操纵菜单
void Menu()
{
	printf("-------------请选择-------------\n");
	printf("******1.INDN        2.DLEDN*****\n");
	printf("******3.SDN         4.MDN******\n");
	printf("******5.MPF         0.EXIT*****\n");
}
 
//初始化
DLinklist InitDNode()
{
	DLinklist L = (DLinklist)malloc(sizeof(DNode));
	if (L == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	L->next = NULL;
	L->prior = NULL;
	return L;
}

//共用操作
static DNode* CommonOperation(DLinklist L, int i)

{
	DNode*p = L;
	int j = 0;
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{
		printf("查询失败！\n");
		return 0;
	}
	else
		return p;
}

//按位序插入
void InsertNextDNode(DLinklist L)
{
	int i;
	printf("请输入要插入的位序:>");
	scanf("%d", &i);
	if (i < 1)
		printf("输入不合法！\n");
	else
	{
		DNode*p = CommonOperation(L, i - 1);
		if (p == NULL)
			printf("插入失败！\n");
		else
		{
			DNode* s = (DNode*)malloc(sizeof(DNode));
			printf("请输入要添加的数据:>");
			scanf("%s", s->data);
			s->next = p->next;
			if (p->next != NULL)
				p->next->prior = s;
			s->prior = p;
			p->next = s;
			printf("\n添加成功！\n");
		}
	}
}

//按位序查找
void SearchDNode(DLinklist L)
{
	int i;
	printf("请输入要查找的位序:>");
	scanf("%d", &i);
	if (i < 1)
		printf("输入不合法！\n");
	DNode* p = CommonOperation(L, i);
	printf("%s\n", p->data);
}

//按位序删除
void DeleteDNode(DLinklist L)
{
	int i;
	printf("请输入要删除的位序:>");
	scanf("%d", &i);
	DNode* p = CommonOperation(L, i);
	if (p->next == NULL)
	{
		DNode*q = p->prior;
		q->next = p->next;
		free(p);
		printf("删除成功！\n");
	}
	else
	{
		DNode*q = p->prior;
		q->next = p->next;
		p->next->prior = q;
		free(p);
		printf("删除成功！\n");
	}
}

//按位序修改
void ModifyDNode(DLinklist L)
{
	int i;
	printf("请输入要修改的位序:>");
	scanf("%d", &i);
	DNode* p = CommonOperation(L, i);
	printf("此位序数据=%s\n", p->data);
	printf("请输入新数据:>");
	scanf("%s", p->data);
	printf("修改成功，新数据=%s\n", p->data);
}

//打印双链表
void My_Printf(DLinklist L)
{
	DNode* p = L->next;
	if (p == NULL)
		printf("双链表为空\n");
	while (p != NULL)
	{
		printf("%s ", p->data);
		p = p->next;
	}
	printf("\n");
}