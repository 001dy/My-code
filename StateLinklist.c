#include"StateLinklist.h"



//����ѡ��
void Menu()
{
	printf("-------------��ѡ��-------------\n");
	printf("******1.ICL         2.DECL*****\n");
	printf("******3.MCL         4.SCL******\n");
	printf("******5.MPF         0.EXIT*****\n");
}

// ��ʼ����̬����
void InitStateL(StateL adrr[SIZE])
{
	adrr[0].cur = -1;
	int i;
	for (i = 1; i < SIZE; i++)
	{
		adrr[i].cur = -2;
	}
}

//ͨ�ò���
static int CommonOperat(StateL adrr[SIZE], int i)
{
	if (adrr[0].cur == -1)
	{
		printf("��̬����Ϊ��!\n");
		return 0;
	}
	else
	{
		int x = 0;
		int c = adrr[0].cur;
		while (x < i)
		{
			c = adrr[c].cur;
			x++;
		}
		return c;
	}
}
static int My_Strlen(StateL adrr[SIZE])
{
	int len = 0;
	while (adrr[len].cur != -1)
		len++;
	return len;
}

//��λ�����
void InsertStateL(StateL adrr[SIZE])
{
	int i = 0;
	printf("������Ҫ�����λ��:>");
	scanf("%d", &i);
	int len = My_Strlen(adrr);
	if (i < 1 || i - len >= 2 || i>SIZE - 1)
	{
		printf("Ҫ�����λ�򲻺Ϸ�\n");
	}
	else
	{
		int j;
		for (j = 0; i < SIZE; j++)
		{
			if (adrr[j].cur == -2)
			{
				printf("adrr[%d]�ɴ�����", j);
				break;
			}
		}
		if (i == 1)
		{
			printf("����������:>");
			scanf("%s", adrr[j].data);
			adrr[j].cur = adrr[0].cur;
			adrr[0].cur = j;
		}
		else
		{
			int c = CommonOperat(adrr, i - 2);
			printf("����������:>");
			scanf("%s", adrr[j].data);
			adrr[j].cur = adrr[c].cur;
			adrr[c].cur = j;
		}
	}
}

//��λ�����
void SerachStateL(StateL adrr[SIZE])
{
	int i = 0;
	printf("��������ҵ�λ��:>");
	scanf("%d", &i);
	int len = My_Strlen(adrr);
	if (i > len||i < 0)
		printf("����λ��Խ�磡\n");
	else
	{
		int c = CommonOperat(adrr, i - 1);
		printf("���ҳɹ�������=%s\n", adrr[c].data);
	}
}

//��λ��ɾ��
void DeleteStateL(StateL adrr[SIZE])
{
	int i = 0;
	printf("������Ҫɾ����λ��:>");
	scanf("%d", &i);
	int len = My_Strlen(adrr);
	if (i > len||i < 0)
		printf("ɾ����λ��Խ�磡\n");
	else if (i == 1)
	{
		int d = adrr[0].cur;
		adrr[0].cur = adrr[d].cur;
		adrr[d].cur = -2;
		printf("ɾ���ɹ�!\n");
	}
	else
	{
		int c = CommonOperat(adrr, i - 3);
		int d = adrr[c].cur;
		adrr[c].cur = adrr[d].cur;
		adrr[d].cur = -2;
		printf("ɾ���ɹ�!\n");
	}
}

//��λ���޸�
void ModifyStateL(StateL adrr[SIZE])
{
	int i = 0;
	printf("������Ҫ�޸ĵ�λ��:>");
	scanf("%d", &i);
	int len = My_Strlen(adrr);
	if (i > len||i < 0)
		printf("�޸ĵ�λ��Խ�磡\n");
	else
	{
		int c = CommonOperat(adrr, i - 1);
			printf("����������:>");
			scanf("%s", adrr[c].data);
		printf("�޸ĳɹ�������=%s\n", adrr[c].data);
	}
}
//��ӡ
void My_printf(StateL adrr[SIZE])
{
	int c = adrr[0].cur;
	while (c > -1)
	{
		printf("%s,", adrr[c].data);
		c = adrr[c].cur;
	}
	printf("\n");
}