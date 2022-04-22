#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkeList.h"

//初始化
LinkedList  InitList()
{
	LinkedList L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	L->next = NULL;
	return L;
}

//操作清单
void Menu()
{
	printf("-------------请选择-------------\n");
	printf("*******1.IN         2.INN*******\n");
	printf("*******3.IPN        4.DEL*******\n");
	printf("*******5.GETE       6.LOE*******\n");
	printf("*******7.MOE        8.MPF*******\n");
	printf("********     0.EXIT     ********\n
");
}

//按位序插入操作
void Insert(LinkedList L)
{
	int i; 
	printf("请输入要插入位序：>");
	scanf("%d", &i);
	
	if (i < 1)
	{
		printf("输入位序不合法\n");
	}
	//不带头节点
	/*if (i == 1)
	{
		LNode* s = (LNode*)malloc(sizeof(LNode));
		printf("请输入要插入的元素：>");
		scanf("%s", s->data);
		s->next = L;
		L = s;
		printf("添加成功！！！\n");
	}*/
	else
	{
		LNode* p = NULL;
		//int j=1;不带头结点
		int j = 0;
		p = L;
		while (p != NULL && j < i - 1)
		{
			p = p->next;
			j++;
		}
		if (p == NULL)
		{
			printf("前方结点不存在！！！\n");
		}
		else
		{
			LNode* s = (LNode*)malloc(sizeof(LNode));
			printf("请输入要插入的元素：>");
			scanf("%s",s->data);
			//(s->data, data);
			//s->data = data;
			s->next = p->next;
			p->next = s;
			printf("添加成功！！！\n");
		}
	}
}

//后插操作
void InsertNextNode(LinkedList L)
{
	int i; 
	printf("请输入要在那个位序后插入元素：>");
	scanf("%d", &i);
	if (i < 0)
	{
		printf("输入不合法！！！\n");
	}
	if (i == 0)
	{
		LNode* s = (LNode*)malloc(sizeof(LNode));
		printf("请输入要插入的元素：>");
		scanf("%s", s->data);
		s->next = L->next;
		L->next = s;
		printf("添加成功！！！\n");
	}
	else
	{
		LNode* p = NULL;
		int j = 0;
		p = L;
		while (p != NULL && j < i)
		{
			p = p->next;
			j++;
		}
		if (p == NULL)
		{
			printf("结点不存在！！！\n");
		}
		else
		{
			LNode* s = (LNode*)malloc(sizeof(LNode));
			printf("请输入要插入的元素：>");
			scanf("%s", s->data);
			//strcpy(s->data, data);
			//s->data = data;
			s->next = p->next;
			p->next = s;
			printf("添加成功！！！\n");
		}
	}
}

//前插操作
void InsertPriorNode(LinkedList L)
{
	int i;
	printf("请输入要在那个位序前插入元素：>");
	scanf("%d", &i);
	if (i < 1)
		printf("输入不合法！！！\n");
	else
	{
		LNode* p = NULL;
		//int j=1;不带头结点
		int j = 0;
		p = L;
		while (p != NULL && j < i - 1)
		{
			p = p->next;
			j++;
		}
		if (p == NULL)
			printf("结点不存在！！！");
		else
		{
			LNode* s = (LNode*)malloc(sizeof(LNode));
			printf("请输入要插入的元素：>");
			scanf("%s", s->data);
			//(s->data, data);
			//s->data = data;
			s->next = p->next;
			p->next = s;
			printf("添加成功！！！\n");
		}
	}
}
//按位序删除结点
void DeleteList(LinkedList L)
{
	int i;
	printf("请输入要删除那个位序：>");
	scanf("%d", &i);
	if (i < 1)
		printf("输入不合法！！！\n");
	else 
	{
		LNode *p = NULL;
		int j = 0;
		p = L;
		while (p != NULL && j < i - 1)
		{
			p = p->next;
			j++;
		}
		if (p->next == NULL)
			printf("要删除的结点不存在！\n");
		else
		{
			LNode* q = p->next;
			printf("要删除的元素=%s\n", q->data);
			p->next = q->next;
			free(q);
			printf("删除成功\n");
		}
	}
}

//按位序查找
void GetElem(LinkedList L)
{
	LNode* p = L;
	int i = 0;
	int j = 0;
	printf("请输入要查询的位序:>");
	scanf("%d",&i);
	if (i < 1)
		printf("输入不合法！！！\n");
	while (p!=NULL&&j<i)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		printf("要查找的位序不存在！！！\n");
	else
		printf("查找成功，数据=%s\n", p->data);
}

//按值查找
void LocateElem(LinkedList L)
{
	LNode* p = L;
	int j = 0;
	char data[MAX_SIZE];
	printf("请输入要查找的数据值:>");
	scanf("%s", &data);
	while (p!=NULL)
	{
		if (0 == strcmp(p->data, data))
		{
			printf("查找成功，数据=%s\n", p->data);
			break;
		}
		p = p->next;
	}
	if (p == NULL)
		 printf("要查找的数据不存在！！！\n");
}
//删除结点
//void DeleteList(LinkedList L)
//{
//	LNode*p = L;
//	LNode*q = L->next;
//	printf("请输入要删除的结点值：x= ");
//	char x[MAX_SIZE];
//	scanf("%s", x);
//	while (q != NULL)
//	{
//		if (0 == strcmp(q->data, x))
//		{
//			p->next = q->next;
//			break;
//		}
//		else
//		{
//			p = p->next;
//			q = q->next;
//		}
//	}
//	printf("\n删除成功\n");
//}

//单链表的按位序修改
void ModifyElem(LinkedList L)
{
	LNode* p = L;
	int i = 0;
	int j = 0;
	printf("请输入要修改的位序:>");
	scanf("%d", &i);
	if (i < 1)
		printf("输入不合法！！！\n");
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		printf("要修改的位序不存在！！！\n");
	else
	{
		printf("查找成功，数据=%s\n", p->data);
		printf("请输入新数据=");
		scanf("%s", p->data);
		printf("修改成功:%s\n", p->data);
	}
}

//打印链表
void My_printf(LinkedList L)
{
	LNode* e = L->next;
	while (e != NULL)
	{
		printf("%s ", e->data);
		e = e->next;
	}
	printf("\n数据打印结束\n");
}