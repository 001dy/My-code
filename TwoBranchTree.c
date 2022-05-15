#include"TwoBranchTree.h"
#include"LinkQueueHelp.h"
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

//��α���
/*�㷨˼�룺
�ٳ�ʼ��һ����������
�ڸ��ڵ����
�����Ƕ���Ϊ�գ����ͷ�����ӣ����ʸý�㣬���������Һ��Ӳ����β(����еĻ�)
���ظ���ֱ������Ϊ��
*/
void LevelOrder(BiTNode* T)
{
	LinkQueue*Q = (LinkQueue*)malloc(sizeof(LinkQueue));
	InitLQ(Q);
	BiTNode* P = (BiTNode*)malloc(sizeof(BiTNode));
	PushLQ(Q, T);
	while (IsEmpty(Q))
	{
		PopLQ(Q, P);
		visit(P);
		if (P->lchild != NULL)
			PushLQ(Q, P->lchild);
		if (P->rchild != NULL)
			PushLQ(Q, P->rchild);
	}

}