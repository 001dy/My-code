#include"TwoBranchTree.h"

//ǰ�����������
BiTNode* GreatTree()
{
	int ch;
	BiTNode*root;
	printf("����������:>");
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

//���ʽ��
void visit(BiTNode* T)
{
	printf("%d,", T->data);
}
//�������
void PreOrder(BiTNode* T)
{
	if (T != NULL)
	{
		visit(T);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}

//�������
void InOrder(BiTNode* T)
{
	if (T != NULL)
	{
		PreOrder(T->lchild);
		visit(T);
		PreOrder(T->rchild);
	}
}

//�������
void PostOrder(BiTNode* T)
{
	if (T != NULL)
	{
		PreOrder(T->lchild);
		PreOrder(T->rchild);
		visit(T);
	}
}