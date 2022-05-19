#include"PreThread.h"
PreThread* pre = NULL;

//先序创建二叉树
PreThread* GreatTree()
{
	PreThread*root;
	int d;
	printf("请输入数据:>");
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

//二叉树先序线索化
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

//二叉树先序遍历
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


//二叉树先序线索找指定结点后继
PreThread* NextNode(PreThread*p)
{
	if (p->ltag == 0)
		return p->lchild;
	else
		return p->rchild;
}

//先序线索化遍历
void PreOrder(PreThread*T)
{
	PreThread*q;
	for (q = T; q; pre=q,q = NextNode(q))
	{
		printf("%d",q->data);
	}
}

//先序线索化找前驱判断
int visit(PreThread*q,PreThread*p)
{
	if (q == p && pre == NULL)
		return 2;
	else if (q == p)
		return 1;
	else
		return 0;
}


//二叉树先序线索找指定结点前驱动
PreThread* FrontNode(PreThread*p, PreThread*T)
{
	assert(p);
	if (p->ltag == 1)
		return p->lchild;
	PreThread*q;
	for (q = T; q; pre = q, q = NextNode(q))
	{
		int d = visit(q, p);
		if (d == 2)
			return NULL;
		else if (d == 1)
			return pre;
	}
}

