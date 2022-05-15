#include"LinkQueueHelp.h"
#include"TwoBranchTree.h"

//��ʼ��
void InitLQ(LinkQueue* Q)
{
	Q->front = Q->rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q->front->data=0;
	Q->front->next = NULL;
}

//����
void PushLQ(LinkQueue*Q, BiTNode*T)
{
	LinkNode*S = (LinkNode*)malloc(sizeof(LinkNode));
	S->data = T;
	S->next = NULL;
	(LinkNode*)Q->rear->next = S;
	Q->rear = S;
}
//����
void PopLQ(LinkQueue*Q, BiTNode *P)
{
	if (Q->front->next == NULL)
		printf("%s\n", strerror(errno));
	else
	{
		LinkNode* S;
		S =(LinkNode*) Q->front->next;
		P= S->data;
		P->lchild = S->data->lchild;
		P->rchild=S->data->rchild;
		Q->front->next = S->next;
		if (Q->rear == S)
			Q->rear = Q->front;
		free(S);
	}
}

//�п�
int IsEmpty(LinkQueue* Q)
{
	if (Q->front->next == NULL)
		return 0;
	else
		return 1;
}