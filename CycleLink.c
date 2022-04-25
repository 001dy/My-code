#include"CycleLink.h"

//操作选项
void Menu()
{
	printf("-------------请选择-------------\n");
	printf("******1.ICL         2.DECL*****\n");
	printf("******3.MCL         4.SCL******\n");
	printf("******5.MPF         0.EXIT*****\n");
}

//初始化一个循环单链表
CLinklist InitCLink()
{
	CLinklist L = (CLinklist)malloc(sizeof(CLink));//分配一个头节点
	if (L == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	L->next = L;//头结点next指向头结点
	return L;
}

//按位序插入
void InsertCLink(CLinklist L)
{
	int i;
	printf("请输入要插入的位序:>");
	scanf("%d", &i);
	if (i < 1)
	{
		printf("要插入位序不合法\n");
	}
	else
	{
		CLink* p = CommonOpera(L, i - 1);
		if (p != L || i == 1)
		{
			CLink* s = (CLink*)malloc(sizeof(CLink));
			printf("请输入要添加的数据:>");
			scanf("%s", s->data);
			s->next = p->next;
			p->next = s;
			printf("添加成功！\n");
		}
	}
}

//共用操作
static CLink* CommonOpera(CLinklist L, int i)
{
	CLink* p = L;
	int j = 0;
	while (j < i)
	{
		p = p->next;
		if (p == L)
		{
			printf("数据的位序越界，失败\n");
			return p;
		}
		j++;
	}
	return p;
}
//按位序查找
void SerachCLink(CLinklist L)
{
	int i;
	printf("请输入要查询的位序:>");
	scanf("%d", &i);
	CLink*p = CommonOpera(L, i);
	if (p != L)
		printf("查询成功，数据为=%s\n", p->data);
	else
		printf("查询失败！\n");
}

//按位序删除
void DeleteCLink(CLinklist L)
{
	int i;
	printf("请输入要删除的位序:>");
	scanf("%d", &i);
	CLink*p = CommonOpera(L, i-1);
	if (p->next != L || i == 1)
	{
		CLink* q = p->next;
		p->next = q->next;
		free(q);
		printf("删除成功\n");
	}
	else
		printf("删除失败\n");
}

//按位序修改
void ModifyCLink(CLinklist L)
{
	int i;
	printf("请输入要修改的位序:>");
	scanf("%d", &i);
	if (i < 1)
		printf("输入不合法\n");
	else
	{
		CLink*p = CommonOpera(L, i);
		printf("数据=%s\n", p->data);
		printf("请输入新数据:>");
		scanf("%s", p->data);
		printf("修改成功，数据=%s\n", p->data);
	}
}

//打印循环单链表
void My_printf(CLinklist L)
{
	CLink* p = L->next;
	while (p->next != L)
	{
		printf("%s，", p->data);
		p = p->next;
	}
	printf("%s\n", p->data);
}