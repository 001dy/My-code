#include"StackLink.h"

void Menu()
{
	printf("-------------��ѡ��-------------\n");
	printf("******1.Push        2.POP******\n");
	printf("******3.Del         4.Mod******\n");
	printf("******5.SSL         6.GT******\n");
	printf("******      0.EXIT       ******\n");

}
//ͨ�ò���
static StackLink* CommonOpera(StackLink*L, int i)
{
	int j = 0;
	StackLink* P = L;

	while (P != NULL && j < i)
	{
		P = P->next;
		j++;
	}
	return P;
}
//��ʼ����ջ
StackLink* InitSL()
{
	StackLink* L = (StackLink*)malloc(sizeof(StackLink));
	if (L == NULL)
		return 0;
	else
	{
		L->next = NULL;
		return L;

	}

}

//ѹջ
void PushSL(StackLink* L)
{
	if (L == NULL)
		printf("����Ϊ��!\n");
	else
	{
		StackLink*S = (StackLink*)malloc(sizeof(StackLink));
		printf("������Ҫ���Ԫ��:>");
		scanf("%s", S->data);
		S->next = L->next;
		L->next = S;
		printf("��ӳɹ�!\n");
	}
}

//ɾ��Ԫ��
void DeleteSL(StackLink* L)
{
	if (L == NULL)
		printf("����Ϊ��!\n");
	else
	{
		StackLink* P = L->next;
		L->next = L->next->next;
		free(P);
		printf("ɾ���ɹ�!\n");
	}
}

//�޸�Ԫ��
void ModifySL(StackLink* L)
{

	if (L == NULL)
		printf("����Ϊ��!\n");
	else
	{
		int i;
		printf("������ҪԪ�ص�λ��:>");
		scanf("%d", &i);
		StackLink* P = CommonOpera(L, i);
		if (P == NULL)
		{
			printf("�޸�λ��Խ��!\n");
		}
		else
		{
			printf("��������Ԫ��:>");
			scanf("%s", P->data);
			printf("�޸ĳɹ�!\n");
		}
	}
}

//����Ԫ��
void SerachSL(StackLink* L)
{
	if (L == NULL)
		printf("����Ϊ��!\n");
	else
	{
		int i;
		printf("������Ҫ����Ԫ�ص�λ��:>");
		scanf("%d", &i);
		StackLink* P = CommonOpera(L, i);
		if (P == NULL)
			printf("����λ��Խ��!\n");
		else
		{
			printf("%s", P->data);
			printf("���ҳɹ�!\n");
		}
	}
}

//��ջ
void PopSL(StackLink* L)
{
	if (L == NULL)
		printf("����Ϊ��!\n");
	else
	{
		
		while (L->next != NULL)
		{
			StackLink* P = L->next;
			printf("%s,", P->data);
			L->next = L->next->next;
			free(P);
		}
		printf("\n");
		L->next = NULL;
	}
}

//��ȡջ��Ԫ��
void GetTop(StackLink* L)
{
	if (L == NULL)
		printf("����Ϊ��!\n");
	else
	{
		printf("%s", L->next->data);
	}
}