#define _CRT_SECURE_NO_WARNINGS 1
#include "ListHead.h"

void Menu() 
{
	printf("**********������ѡ�񡪡�**********\n");
	printf("*****1.ADD              2.DEL ****\n");
	printf("*****3.SEARCH           4.SHOW****\n");
	printf("*****5.Modify           0.EXIT****\n");
}
void InitList(Sqlist* L) 
{
	//��̬��ʼ��
	/*memset(L->B, 0, sizeof(L->B));
	L->length = 0;*/
	//��̬��ʼ��
	L->B = (Book*)malloc(DEFAULT_SZ * sizeof(Book));
	if (L->B==NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	L->length = 0;
	L->capacity = DEFAULT_SZ;
}

void AddElem(Sqlist* L) 
{
	if (L->length == MAXSIZE)
		printf("�ռ�����\n");
	else
	{
		printf("��������ţ�>");
		scanf("%s", L->B[L->length].id);
		printf("������������>");
		scanf("%s", L->B[L->length].name);
		printf("������۸�>");
		scanf("%f", &(L->B[L->length].price));

		L->length++;
		printf("��ӳɹ�\n");
	}
}

void Show(const Sqlist* L)
{
	if (L->length == 0)
		printf("�Բ���δ���ͼ��\n");
	else
	{
		int i = 0;
		printf("%-20s\t%-30s\t%-s\n", "���", "����", "�۸�");
		for (i; i < L->length; i++)
		{
			printf("%-20s\t%-30s\t%-f\n", L->B[i].id, L->B[i].name, L->B[i].price);
		}
	}
}

static int Find(const Sqlist* L, const char id[MAX_ID])
{
	int i;
	for (i = 0; i < L->length; i++)
	{
		if (0 == strcmp(L->B[i].id, id))
		{
			return i;
		}
	}
	return -1;//�Ҳ���
}

void DeleteElem(Sqlist* L)
{
	printf("������Ҫɾ�����鼮��ţ�>");
	char id[MAX_ID];
	//int count = 0;
	scanf("%s", &id);
	int pos = Find(L, id);
	//1.����
	//for (i = 0; i < L->length; i++)
	//{
	//	if(0==strcmp(L->B[i].id, id))
	//	{
	//		break;
	//		//if (i == L->length - 1)
	//		//{
	//		//	/*count++;
	//		//	L->length = L->length - count;*/
	//		//	break;
	//		//}
	//		/*else
	//		{
	//			count++;
	//			int j = i;
	//			L->B[j] = L->B[j++];
	//		}*/
	//	}
	//}

	//2.ɾ��
	if (pos == -1)
	{
		printf("�鼮�����ڣ�����\n");
	}
	else 
	{
		int j = 0;
		for (j = pos;j < L->length-1;j++)
		{
			L->B[j] = L->B[j+1];
		}
		//L->length = L->length - count;
		L->length--;
		printf("ɾ���ɹ�������\n");
	}
}

void SerachBook(const Sqlist *L)
{
	printf("������Ҫ���ҵ��鼮��ţ�>");
	char id[MAX_ID];
	scanf("%s", &id);
	//1.����
	int pos =Find(L, id);
	if (pos==-1)
	{
		printf("Ҫ�����鼮������\n");
	}
	else
	{
		printf("%-20s\t%-30s\t%-f\n", L->B[pos].id, L->B[pos].name, L->B[pos].price);
	}
}



void Modify( Sqlist *L)
{
	printf("������Ҫ�޸ĵ��鼮��ţ�>");
	char id[MAX_ID];
	scanf("%s", &id);
	//1.����
	int pos = Find(L, id);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��鼮������\n");
	}
	else
	{
		printf("��������ţ�>");
		scanf("%s", L->B[pos].id);
		printf("������������>");
		scanf("%s", L->B[pos].name);
		printf("������۸�>");
		scanf("%f", &(L->B[pos].price));

		printf("�޸ĳɹ�������\n");
	}

}
