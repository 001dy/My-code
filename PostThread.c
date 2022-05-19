#include"PostThead.h"
ThreadNode*pre = NULL;

//������
ThreadNode* GreatTree()
{
	ThreadNode*root;
	int d;
	printf("����������:>");
	scanf("%d", &d);
	if (d == 0)
		return NULL;
	else
	{
		root = (ThreadNode*)malloc(sizeof(ThreadNode));
		root->data = d;
		root->ltag = 0;root->rtag = 0;
		root->lchild = GreatTree();
		root->rchild = GreatTree();
	}
	return root;
}

//��������������
void visit_pos(ThreadNode* q)
{
	if (q->lchild == NULL)
	{
		q->lchild = pre;
		q->ltag = 1;
	}
	if (pre&&pre->rchild == NULL)
	{
		pre->rchild = q;
		pre->rtag = 1;
	}
	pre = q;
}

//��������
void PostOrder(ThreadNode* T)
{
	if (T)
	{
		PostOrder(T->lchild);
		PostOrder(T->rchild);
		visit_pos(T);
	}
	if (pre->rchild)
		pre->rtag = 1;
}

int  Judge(ThreadNode* q, ThreadNode*p)
{
	if (q == p && pre == NULL)
		return 2;
	if (q == p)
		return 1;
	else
		return 0;
}

//��������������ͨ��ǰ���Һ��
ThreadNode* PostThOrder(ThreadNode* T,ThreadNode*p)
{
	assert(p);
	if (p->rtag == 1)
		return p->rchild;
	ThreadNode* q;
	for (q = T; q; pre = q, q = PostPre(q))
	{
		int d = Judge(q, p);
		if (d == 1 || d == 2)
			return pre;
	}
	return NULL;
}

//��������������ָ�������ǰ��
ThreadNode* PostPre(ThreadNode*p)
{
	if (p->rtag == 0)
		return p->rchild;
	else
		return p->lchild;
}



