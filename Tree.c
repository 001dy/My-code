#include"Tree.h"

//��ʼ��
void InitTree(PTree*T)
{
	T->n = 0;
	T->nodes[T->n].parent = -1;
}

//����
void AddEle(PTree* T)
{
	
	if (T->n >= MAX_SIZE - 1)
		printf("����!\n");
	else
	{
		int k, r,i;
		do
		{
			printf("������Ҫ�洢������:>");
			scanf("%d", &k);
			if (T->n > 0 && k)
			{
			 agin:printf("��������ڵ�:>");
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
					printf("����ĸ��ڵ㲻����");
					goto agin;
				}
			}
			if (k)
				T->nodes[T->n++].data = k;
		} while (k);
	}
}

//ɾ��
void DeleteEle(PTree* T)
{
	if (!T->n)
		printf("����!\n");
	else
	{
		int d;
		printf("������Ҫɾ��������:>");
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
		printf("ɾ���ɹ�!\n");
	}
}