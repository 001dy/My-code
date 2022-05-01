#include"LinkQueue.h"


//操作菜单
void Menu()
{
	printf("-------------请选择-------------\n");
	printf("******1.ELQ          2.DLQ******\n");
	printf("******3.GTLQ         4.EXIT******\n");
}

//初始化(带头结点)
void InitLinkQueue(LinkQueue* Q)
{
	Q->rear = Q->front = (LinkNode*)malloc(sizeof(LinkNode));
	Q->front->next = NULL;
	Q->size = 0;
}

//初始化(不带头结点)
void InitLinkQueue1(LinkQueue* Q)
{
	Q->front = NULL;
	Q->rear = NULL;
	Q->size = 0;
}

//入队
void EnLinkQueue(LinkQueue*Q)
{
	LinkNode*S = (LinkNode*)malloc(sizeof(LinkNode));
	printf("请输入要添加的元素:>");
	scanf("%s", S->data);
	S->next = NULL;
	(LinkNode*)Q->rear->next =S;
	Q->rear = S;
	Q->size++;
	printf("添加成功!\n");
}

//出队
void DeLinkQueue(LinkQueue*Q)
{
	if (Q->size == 0)
	{
		printf("空队列!\n");
	}
	else
	{
		LinkNode*p = (LinkNode*)Q->front->next;
		printf("%s\n", p->data);
		Q->front->next = p->next;
		if (Q->rear == p)
			Q->front = Q->rear;
		free(p);
		Q->size--;
	}
}

//读取对头元素
void GetTopLQ(LinkQueue* Q)
{
	if (Q->front->next == NULL)
		printf("链队列为空\n");
	else
	{
		LinkNode*p = (LinkNode*)Q->front->next;
		printf("%s\n", p->data);
	}
}