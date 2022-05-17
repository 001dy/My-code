#include"ThreadNode.h"
//全局变量指针pre,指向当前访问节点的前驱
ThreadNode *pre = NULL;
//前序创建二叉树
ThreadNode* GreatTree()
{
	ThreadNode*root;
	int i;
	printf("请输入数据:>");
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
//线索化
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

//中序线索化
void InThread(ThreadNode*T)
{
	if (T != NULL)
	{
		InThread(T->lchild);
		visit(T);
		InThread(T->rchild);
	}
}