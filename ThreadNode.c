#include"ThreadNode.h"
//ȫ�ֱ���ָ��pre,ָ��ǰ���ʽڵ��ǰ��
ThreadNode *pre = NULL;
//ǰ�򴴽�������
ThreadNode* GreatTree()
{
	ThreadNode*root;
	int i;
	printf("����������:>");
	scanf("%d", &i);
	if (i == 0)
		return 0;
	else
	{
		root = (ThreadNode*)malloc(sizeof(ThreadNode));
		root->data = i;
		root->lchild = GreatTree();
		root->rchild = GreatTree();
	}
	return root;
}
//������
void visit(ThreadNode*q)
{
	if (q->lchild == NULL)
	{
		q->lchild = pre;
		q->ltag = 1;
	}
	if (pre != NULL && pre->rchild == NULL)
	{
		pre->rchild = q;
		pre->rtag = 1;
	}
	pre=q;
}

//����������
void InThread(ThreadNode*T)
{
	if (T != NULL)
	{
		InThread(T->lchild);
		visit(T);
		InThread(T->rchild);
	}
}