#include"TwoBranchTree.h"
#include"LinkQueueHelp.h"
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

//层次遍历
/*算法思想：
①初始化一个辅助队列
②根节点入队
③若非队列为空，则对头结点出队，访问该结点，并将其左、右孩子插入队尾(如果有的话)
④重复③直至队列为空
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