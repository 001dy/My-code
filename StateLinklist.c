#include"StateLinklist.h"

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

//��λ�����
void InsertStateL(StateL adrr[SIZE])
{
	int i;
	printf("������Ҫ�����λ��:>");
	scanf("%d", &i);
	if (adrr[0].cur == -1)
	{
		printf("��̬����Ϊ��!\n");
		printf("����������=");
		scanf("%s", adrr[1].data);
		adrr[1].cur = adrr[0].cur;
		adrr[0].cur = 1;
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
		if (i > 1)
		{
			int x = 0;
			int c = adrr[0].cur;
			while (c != -1 || x < i - 1)
			{
				c = adrr[c].cur;
				x++;
			}
			printf("����������:>");
			scanf("%s", adrr[j].data);
			adrr[j].cur = adrr[c].cur;
			adrr[c].cur = j;
			printf("��ӳɹ�\n");
		}
		else
		{
			printf("����������:>");
			scanf("%s", adrr[j].data);
			adrr[j].cur = adrr[0].cur;
			adrr[0].cur = j;
			printf("��ӳɹ�\n");
		}
	}
}

//��ӡ
void My_printf(StateL adrr[SIZE])
{
	int c = adrr[0].cur;
	while (c != -1 )
	{
		printf("%s,", adrr[c].data);
		c = adrr[c].cur;
	}
}