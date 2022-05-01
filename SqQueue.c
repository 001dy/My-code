#include"SqQueue.h"

void Menu()
{
	printf("--------------��ѡ��--------------\n");
	printf("******1.EnQ           2.DeQ ******\n");
	printf("******3.MP            0.EXIT******\n");
}

//��ʼ��
void InitQueue(SqQueue *Q)
{
	Q->front = Q->rear = Q->size = 0;
}

//���
void EnQueue(SqQueue *Q)
{
	if (Q->size == MaxSize)
		printf("��������!\n");
	else
	{
		printf("������Ҫ��ӵ�Ԫ��:>");
		scanf("%s", &(Q->data[Q->rear]));
		Q->rear = (Q->rear + 1) % MaxSize;
		Q->size++;
		printf("��ӳɹ�!\n");
	}
}

//����
void DeQueue(SqQueue* Q)
{
	if (Q->front == Q->rear)
		printf("����Ϊ��!\n");
	else
	{
		printf("%s\n", &(Q->data[Q->front]));
		Q->front = (Q->front + 1) % MaxSize;
		Q->size--;
	}
}

//��ӡ����
void My_Printf(SqQueue* Q)
{
	if (Q->front == Q->rear)
		printf("����Ϊ��!\n");
	else
	{
		printf("%s\n", &(Q->data[Q->front]));
		Q->front = Q->size;
		Q->size = 0;
	}
}