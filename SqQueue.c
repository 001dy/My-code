#include"SqQueue.h"

void Menu()
{
	printf("--------------请选择--------------\n");
	printf("******1.EnQ           2.DeQ ******\n");
	printf("******3.MP            0.EXIT******\n");
}

//初始化
void InitQueue(SqQueue *Q)
{
	Q->front = Q->rear = Q->size = 0;
}

//入队
void EnQueue(SqQueue *Q)
{
	if (Q->size == MaxSize)
		printf("队列已满!\n");
	else
	{
		printf("请输入要添加的元素:>");
		scanf("%s", &(Q->data[Q->rear]));
		Q->rear = (Q->rear + 1) % MaxSize;
		Q->size++;
		printf("添加成功!\n");
	}
}

//出队
void DeQueue(SqQueue* Q)
{
	if (Q->front == Q->rear)
		printf("队列为空!\n");
	else
	{
		printf("%s\n", &(Q->data[Q->front]));
		Q->front = (Q->front + 1) % MaxSize;
		Q->size--;
	}
}

//打印队列
void My_Printf(SqQueue* Q)
{
	if (Q->front == Q->rear)
		printf("队列为空!\n");
	else
	{
		printf("%s\n", &(Q->data[Q->front]));
		Q->front = Q->size;
		Q->size = 0;
	}
}