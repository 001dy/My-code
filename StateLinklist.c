#include"StateLinklist.h"

// 初始化静态链表
void InitStateL(StateL adrr[SIZE])
{
	adrr[0].cur = -1;
	int i;
	for (i = 1; i < SIZE; i++)
	{
		adrr[i].cur = -2;
	}
}

//按位序插入
void InsertStateL(StateL adrr[SIZE])
{
	int i;
	printf("请输入要插入的位序:>");
	scanf("%d", &i);
	if (adrr[0].cur == -1)
	{
		printf("静态链表为空!\n");
		printf("请输入数据=");
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
				printf("adrr[%d]可存数据", j);
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
			printf("请输入数据:>");
			scanf("%s", adrr[j].data);
			adrr[j].cur = adrr[c].cur;
			adrr[c].cur = j;
			printf("添加成功\n");
		}
		else
		{
			printf("请输入数据:>");
			scanf("%s", adrr[j].data);
			adrr[j].cur = adrr[0].cur;
			adrr[0].cur = j;
			printf("添加成功\n");
		}
	}
}

//打印
void My_printf(StateL adrr[SIZE])
{
	int c = adrr[0].cur;
	while (c != -1 )
	{
		printf("%s,", adrr[c].data);
		c = adrr[c].cur;
	}
}