#include"TwoBranchTree.h"

//前序遍历创建树
BiTNode* GreatTree()
{
	int ch;
	BiTNode*root;
	printf("请输入数据:>");
	scanf("%d", &ch);
	if (ch == 0)
		return NULL;
	else
	{
		root = (BiTNode*)malloc(sizeof(BiTNode));
		root->data = ch;
		root->lchild = GreatTree();
		root->rchild = GreatTree();
	}
	return root;
}

//访问结点
void visit(BiTNode* T)
{
	printf("%d,", T->data);
}
//先序遍历
void PreOrder(BiTNode* T)
{
	if (T != NULL)
	{
		visit(T);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}

//中序遍历
void InOrder(BiTNode* T)
{
	if (T != NULL)
	{
		PreOrder(T->lchild);
		visit(T);
		PreOrder(T->rchild);
	}
}

//后序遍历
void PostOrder(BiTNode* T)
{
	if (T != NULL)
	{
		PreOrder(T->lchild);
		PreOrder(T->rchild);
		visit(T);
	}
}