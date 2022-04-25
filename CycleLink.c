#include"CycleLink.h"

//����ѡ��
void Menu()
{
	printf("-------------��ѡ��-------------\n");
	printf("******1.ICL         2.DECL*****\n");
	printf("******3.MCL         4.SCL******\n");
	printf("******5.MPF         0.EXIT*****\n");
}

//��ʼ��һ��ѭ��������
CLinklist InitCLink()
{
	CLinklist L = (CLinklist)malloc(sizeof(CLink));//����һ��ͷ�ڵ�
	if (L == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	L->next = L;//ͷ���nextָ��ͷ���
	return L;
}

//��λ�����
void InsertCLink(CLinklist L)
{
	int i;
	printf("������Ҫ�����λ��:>");
	scanf("%d", &i);
	if (i < 1)
	{
		printf("Ҫ����λ�򲻺Ϸ�\n");
	}
	else
	{
		CLink* p = CommonOpera(L, i - 1);
		if (p != L || i == 1)
		{
			CLink* s = (CLink*)malloc(sizeof(CLink));
			printf("������Ҫ��ӵ�����:>");
			scanf("%s", s->data);
			s->next = p->next;
			p->next = s;
			printf("��ӳɹ���\n");
		}
	}
}

//���ò���
static CLink* CommonOpera(CLinklist L, int i)
{
	CLink* p = L;
	int j = 0;
	while (j < i)
	{
		p = p->next;
		if (p == L)
		{
			printf("���ݵ�λ��Խ�磬ʧ��\n");
			return p;
		}
		j++;
	}
	return p;
}
//��λ�����
void SerachCLink(CLinklist L)
{
	int i;
	printf("������Ҫ��ѯ��λ��:>");
	scanf("%d", &i);
	CLink*p = CommonOpera(L, i);
	if (p != L)
		printf("��ѯ�ɹ�������Ϊ=%s\n", p->data);
	else
		printf("��ѯʧ�ܣ�\n");
}

//��λ��ɾ��
void DeleteCLink(CLinklist L)
{
	int i;
	printf("������Ҫɾ����λ��:>");
	scanf("%d", &i);
	CLink*p = CommonOpera(L, i-1);
	if (p->next != L || i == 1)
	{
		CLink* q = p->next;
		p->next = q->next;
		free(q);
		printf("ɾ���ɹ�\n");
	}
	else
		printf("ɾ��ʧ��\n");
}

//��λ���޸�
void ModifyCLink(CLinklist L)
{
	int i;
	printf("������Ҫ�޸ĵ�λ��:>");
	scanf("%d", &i);
	if (i < 1)
		printf("���벻�Ϸ�\n");
	else
	{
		CLink*p = CommonOpera(L, i);
		printf("����=%s\n", p->data);
		printf("������������:>");
		scanf("%s", p->data);
		printf("�޸ĳɹ�������=%s\n", p->data);
	}
}

//��ӡѭ��������
void My_printf(CLinklist L)
{
	CLink* p = L->next;
	while (p->next != L)
	{
		printf("%s��", p->data);
		p = p->next;
	}
	printf("%s\n", p->data);
}