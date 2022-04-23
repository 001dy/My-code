#include "DoubleLink.h"


//���ݲ˵�
void Menu()
{
	printf("-------------��ѡ��-------------\n");
	printf("******1.INDN        2.DLEDN*****\n");
	printf("******3.SDN         4.MDN******\n");
	printf("******5.MPF         0.EXIT*****\n");
}
 
//��ʼ��
DLinklist InitDNode()
{
	DLinklist L = (DLinklist)malloc(sizeof(DNode));
	if (L == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	L->next = NULL;
	L->prior = NULL;
	return L;
}

//���ò���
static DNode* CommonOperation(DLinklist L, int i)

{
	DNode*p = L;
	int j = 0;
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{
		printf("��ѯʧ�ܣ�\n");
		return 0;
	}
	else
		return p;
}

//��λ�����
void InsertNextDNode(DLinklist L)
{
	int i;
	printf("������Ҫ�����λ��:>");
	scanf("%d", &i);
	if (i < 1)
		printf("���벻�Ϸ���\n");
	else
	{
		DNode*p = CommonOperation(L, i - 1);
		if (p == NULL)
			printf("����ʧ�ܣ�\n");
		else
		{
			DNode* s = (DNode*)malloc(sizeof(DNode));
			printf("������Ҫ��ӵ�����:>");
			scanf("%s", s->data);
			s->next = p->next;
			if (p->next != NULL)
				p->next->prior = s;
			s->prior = p;
			p->next = s;
			printf("\n��ӳɹ���\n");
		}
	}
}

//��λ�����
void SearchDNode(DLinklist L)
{
	int i;
	printf("������Ҫ���ҵ�λ��:>");
	scanf("%d", &i);
	if (i < 1)
		printf("���벻�Ϸ���\n");
	DNode* p = CommonOperation(L, i);
	printf("%s\n", p->data);
}

//��λ��ɾ��
void DeleteDNode(DLinklist L)
{
	int i;
	printf("������Ҫɾ����λ��:>");
	scanf("%d", &i);
	DNode* p = CommonOperation(L, i);
	if (p->next == NULL)
	{
		DNode*q = p->prior;
		q->next = p->next;
		free(p);
		printf("ɾ���ɹ���\n");
	}
	else
	{
		DNode*q = p->prior;
		q->next = p->next;
		p->next->prior = q;
		free(p);
		printf("ɾ���ɹ���\n");
	}
}

//��λ���޸�
void ModifyDNode(DLinklist L)
{
	int i;
	printf("������Ҫ�޸ĵ�λ��:>");
	scanf("%d", &i);
	DNode* p = CommonOperation(L, i);
	printf("��λ������=%s\n", p->data);
	printf("������������:>");
	scanf("%s", p->data);
	printf("�޸ĳɹ���������=%s\n", p->data);
}

//��ӡ˫����
void My_Printf(DLinklist L)
{
	DNode* p = L->next;
	if (p == NULL)
		printf("˫����Ϊ��\n");
	while (p != NULL)
	{
		printf("%s ", p->data);
		p = p->next;
	}
	printf("\n");
}