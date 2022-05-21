#include"Tree.h"

//初始化
void InitTree(PTree*T)
{
	T->n = 0;
	T->nodes[T->n].parent = -1;
}

//增加
void AddEle(PTree* T)
{
	
	if (T->n >= MAX_SIZE - 1)
		printf("树满!\n");
	else
	{
		int k, r,i;
		do
		{
			printf("请输入要存储的数据:>");
			scanf("%d", &k);
			if (T->n > 0 && k)
			{
			 agin:printf("请输入根节点:>");
				scanf("%d", &r);
				for (i = 0; i < T->n; i++)
				{
					if (T->nodes[i].data == r)
					{
						T->nodes[T->n].parent = i;
						break;
					}
				}
				if (i == T->n)
				{
					printf("输入的根节点不存在");
					goto agin;
				}
			}
			if (k)
				T->nodes[T->n++].data = k;
		} while (k);
	}
}

//删除
void DeleteEle(PTree* T)
{
	if (!T->n)
		printf("树空!\n");
	else
	{
		int d;
		printf("请输入要删除的数据:>");
		scanf("%d", &d);
		for (int i = 0; i < T->n; i++)
		{
			if (T->nodes[i].data == d)
			{
				if (T->nodes[i].parent == -1)
				{
					T->n = 0;
				}
				else 
				{
					T->nodes[i].data = T->nodes[--T->n].data;
					T->nodes[i].parent = T->nodes[T->n].parent;
					for (int j = 0; j < T->n; j++)
					{
						if (T->nodes[j].parent == i)
						{
							T->nodes[j].data = T->nodes[--T->n].data;
							T->nodes[j].parent = T->nodes[T->n].parent;
						}
					}
					break;
				}
			}
		}
		printf("删除成功!\n");
	}
}