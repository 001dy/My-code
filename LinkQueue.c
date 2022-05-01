#include"LinkQueue.h"


//�����˵�
void Menu()
{
	printf("-------------��ѡ��-------------\n");
	printf("******1.ELQ          2.DLQ******\n");
	printf("******3.GTLQ         4.EXIT******\n");
}

//��ʼ��(��ͷ���)
void InitLinkQueue(LinkQueue* Q)
{
	Q->rear = Q->front = (LinkNode*)malloc(sizeof(LinkNode));
	Q->front->next = NULL;
	Q->size = 0;
}

//��ʼ��(����ͷ���)
void InitLinkQueue1(LinkQueue* Q)
{
	Q->front = NULL;
	Q->rear = NULL;
	Q->size = 0;
}

//���
void EnLinkQueue(LinkQueue*Q)
{
	LinkNode*S = (LinkNode*)malloc(sizeof(LinkNode));
	printf("������Ҫ��ӵ�Ԫ��:>");
	scanf("%s", S->data);
	S->next = NULL;
	(LinkNode*)Q->rear->next =S;
	Q->rear = S;
	Q->size++;
	printf("��ӳɹ�!\n");
}

//����
void DeLinkQueue(LinkQueue*Q)
{
	if (Q->size == 0)
	{
		printf("�ն���!\n");
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

//��ȡ��ͷԪ��
void GetTopLQ(LinkQueue* Q)
{
	if (Q->front->next == NULL)
		printf("������Ϊ��\n");
	else
	{
		LinkNode*p = (LinkNode*)Q->front->next;
		printf("%s\n", p->data);
	}
}