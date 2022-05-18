#include"PreThread.h"
PreThread* pre = NULL;

//���򴴽�������
PreThread* GreatTree()
{
	PreThread*root;
	int d;
	printf("����������:>");
	scanf("%d", &d);
	if (d == 0)
		return NULL;
	else
	{
		root = (PreThread*)malloc(sizeof(PreThread));
		root->data = d;
		root->ltag = 0;
		root->rtag = 0;
		root->lchild = GreatTree();
		root->rchild = GreatTree();
	}
	return root;
}

//����������������
void visit_Pre(PreThread*q)
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
	pre = q;
}

//�������������
void Prethread(PreThread*T)
{
	if (T!=NULL)
	{
		visit_Pre(T);
		if (T->ltag == 0)
			Prethread(T->lchild);
		if (T->rtag == 0)
			Prethread(T->rchild);
	}
}


//����������������ָ�������
PreThread* NextNode(PreThread*p)
{
	if (p->ltag == 0)
		return p->lchild;
	else
		return p->rchild;
}

//��������������
void PreOrder(PreThread*T)
{
	PreThread*q;
	for (q = T; q; q = NextNode(q))
	{
		printf("%d", q->data);
	}
}


