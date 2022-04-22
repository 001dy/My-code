#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkeList.h"

//��ʼ��
LinkedList  InitList()
{
	LinkedList L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	L->next = NULL;
	return L;
}

//�����嵥
void Menu()
{
	printf("-------------��ѡ��-------------\n");
	printf("*******1.IN         2.INN*******\n");
	printf("*******3.IPN        4.DEL*******\n");
	printf("*******5.GETE       6.LOE*******\n");
	printf("*******7.MOE        8.MPF*******\n");
	printf("********     0.EXIT     ********\n
");
}

//��λ��������
void Insert(LinkedList L)
{
	int i; 
	printf("������Ҫ����λ��>");
	scanf("%d", &i);
	
	if (i < 1)
	{
		printf("����λ�򲻺Ϸ�\n");
	}
	//����ͷ�ڵ�
	/*if (i == 1)
	{
		LNode* s = (LNode*)malloc(sizeof(LNode));
		printf("������Ҫ�����Ԫ�أ�>");
		scanf("%s", s->data);
		s->next = L;
		L = s;
		printf("��ӳɹ�������\n");
	}*/
	else
	{
		LNode* p = NULL;
		//int j=1;����ͷ���
		int j = 0;
		p = L;
		while (p != NULL && j < i - 1)
		{
			p = p->next;
			j++;
		}
		if (p == NULL)
		{
			printf("ǰ����㲻���ڣ�����\n");
		}
		else
		{
			LNode* s = (LNode*)malloc(sizeof(LNode));
			printf("������Ҫ�����Ԫ�أ�>");
			scanf("%s",s->data);
			//(s->data, data);
			//s->data = data;
			s->next = p->next;
			p->next = s;
			printf("��ӳɹ�������\n");
		}
	}
}

//������
void InsertNextNode(LinkedList L)
{
	int i; 
	printf("������Ҫ���Ǹ�λ������Ԫ�أ�>");
	scanf("%d", &i);
	if (i < 0)
	{
		printf("���벻�Ϸ�������\n");
	}
	if (i == 0)
	{
		LNode* s = (LNode*)malloc(sizeof(LNode));
		printf("������Ҫ�����Ԫ�أ�>");
		scanf("%s", s->data);
		s->next = L->next;
		L->next = s;
		printf("��ӳɹ�������\n");
	}
	else
	{
		LNode* p = NULL;
		int j = 0;
		p = L;
		while (p != NULL && j < i)
		{
			p = p->next;
			j++;
		}
		if (p == NULL)
		{
			printf("��㲻���ڣ�����\n");
		}
		else
		{
			LNode* s = (LNode*)malloc(sizeof(LNode));
			printf("������Ҫ�����Ԫ�أ�>");
			scanf("%s", s->data);
			//strcpy(s->data, data);
			//s->data = data;
			s->next = p->next;
			p->next = s;
			printf("��ӳɹ�������\n");
		}
	}
}

//ǰ�����
void InsertPriorNode(LinkedList L)
{
	int i;
	printf("������Ҫ���Ǹ�λ��ǰ����Ԫ�أ�>");
	scanf("%d", &i);
	if (i < 1)
		printf("���벻�Ϸ�������\n");
	else
	{
		LNode* p = NULL;
		//int j=1;����ͷ���
		int j = 0;
		p = L;
		while (p != NULL && j < i - 1)
		{
			p = p->next;
			j++;
		}
		if (p == NULL)
			printf("��㲻���ڣ�����");
		else
		{
			LNode* s = (LNode*)malloc(sizeof(LNode));
			printf("������Ҫ�����Ԫ�أ�>");
			scanf("%s", s->data);
			//(s->data, data);
			//s->data = data;
			s->next = p->next;
			p->next = s;
			printf("��ӳɹ�������\n");
		}
	}
}
//��λ��ɾ�����
void DeleteList(LinkedList L)
{
	int i;
	printf("������Ҫɾ���Ǹ�λ��>");
	scanf("%d", &i);
	if (i < 1)
		printf("���벻�Ϸ�������\n");
	else 
	{
		LNode *p = NULL;
		int j = 0;
		p = L;
		while (p != NULL && j < i - 1)
		{
			p = p->next;
			j++;
		}
		if (p->next == NULL)
			printf("Ҫɾ���Ľ�㲻���ڣ�\n");
		else
		{
			LNode* q = p->next;
			printf("Ҫɾ����Ԫ��=%s\n", q->data);
			p->next = q->next;
			free(q);
			printf("ɾ���ɹ�\n");
		}
	}
}

//��λ�����
void GetElem(LinkedList L)
{
	LNode* p = L;
	int i = 0;
	int j = 0;
	printf("������Ҫ��ѯ��λ��:>");
	scanf("%d",&i);
	if (i < 1)
		printf("���벻�Ϸ�������\n");
	while (p!=NULL&&j<i)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		printf("Ҫ���ҵ�λ�򲻴��ڣ�����\n");
	else
		printf("���ҳɹ�������=%s\n", p->data);
}

//��ֵ����
void LocateElem(LinkedList L)
{
	LNode* p = L;
	int j = 0;
	char data[MAX_SIZE];
	printf("������Ҫ���ҵ�����ֵ:>");
	scanf("%s", &data);
	while (p!=NULL)
	{
		if (0 == strcmp(p->data, data))
		{
			printf("���ҳɹ�������=%s\n", p->data);
			break;
		}
		p = p->next;
	}
	if (p == NULL)
		 printf("Ҫ���ҵ����ݲ����ڣ�����\n");
}
//ɾ�����
//void DeleteList(LinkedList L)
//{
//	LNode*p = L;
//	LNode*q = L->next;
//	printf("������Ҫɾ���Ľ��ֵ��x= ");
//	char x[MAX_SIZE];
//	scanf("%s", x);
//	while (q != NULL)
//	{
//		if (0 == strcmp(q->data, x))
//		{
//			p->next = q->next;
//			break;
//		}
//		else
//		{
//			p = p->next;
//			q = q->next;
//		}
//	}
//	printf("\nɾ���ɹ�\n");
//}

//������İ�λ���޸�
void ModifyElem(LinkedList L)
{
	LNode* p = L;
	int i = 0;
	int j = 0;
	printf("������Ҫ�޸ĵ�λ��:>");
	scanf("%d", &i);
	if (i < 1)
		printf("���벻�Ϸ�������\n");
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		printf("Ҫ�޸ĵ�λ�򲻴��ڣ�����\n");
	else
	{
		printf("���ҳɹ�������=%s\n", p->data);
		printf("������������=");
		scanf("%s", p->data);
		printf("�޸ĳɹ�:%s\n", p->data);
	}
}

//��ӡ����
void My_printf(LinkedList L)
{
	LNode* e = L->next;
	while (e != NULL)
	{
		printf("%s ", e->data);
		e = e->next;
	}
	printf("\n���ݴ�ӡ����\n");
}