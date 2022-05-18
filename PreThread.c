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
	for (q = T; q; q = NextNode(q))
	{
		printf("%d", q->data);
	}
}


