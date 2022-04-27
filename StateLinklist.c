#include"StateLinklist.h"



//操作选项
void Menu()
{
	printf("-------------请选择-------------\n");
	printf("******1.ICL         2.DECL*****\n");
	printf("******3.MCL         4.SCL******\n");
	printf("******5.MPF         0.EXIT*****\n");
}

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

//通用操作
static int CommonOperat(StateL adrr[SIZE], int i)
{
	if (adrr[0].cur == -1)
	{
		printf("静态链表为空!\n");
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

//按位序插入
void InsertStateL(StateL adrr[SIZE])
{
	int i = 0;
	printf("请输入要插入的位序:>");
	scanf("%d", &i);
	int len = My_Strlen(adrr);
	if (i < 1 || i - len >= 2 || i>SIZE - 1)
	{
		printf("要插入的位序不合法\n");
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
		if (i == 1)
		{
			printf("请输入数据:>");
			scanf("%s", adrr[j].data);
			adrr[j].cur = adrr[0].cur;
			adrr[0].cur = j;
		}
		else
		{
			int c = CommonOperat(adrr, i - 2);
			printf("请输入数据:>");
			scanf("%s", adrr[j].data);
			adrr[j].cur = adrr[c].cur;
			adrr[c].cur = j;
		}
	}
}

//按位序查找
void SerachStateL(StateL adrr[SIZE])
{
	int i = 0;
	printf("请输入查找的位序:>");
	scanf("%d", &i);
	int len = My_Strlen(adrr);
	if (i > len||i < 0)
		printf("查找位序越界！\n");
	else
	{
		int c = CommonOperat(adrr, i - 1);
		printf("查找成功，数据=%s\n", adrr[c].data);
	}
}

//按位序删除
void DeleteStateL(StateL adrr[SIZE])
{
	int i = 0;
	printf("请输入要删除的位序:>");
	scanf("%d", &i);
	int len = My_Strlen(adrr);
	if (i > len||i < 0)
		printf("删除的位序越界！\n");
	else if (i == 1)
	{
		int d = adrr[0].cur;
		adrr[0].cur = adrr[d].cur;
		adrr[d].cur = -2;
		printf("删除成功!\n");
	}
	else
	{
		int c = CommonOperat(adrr, i - 3);
		int d = adrr[c].cur;
		adrr[c].cur = adrr[d].cur;
		adrr[d].cur = -2;
		printf("删除成功!\n");
	}
}

//按位序修改
void ModifyStateL(StateL adrr[SIZE])
{
	int i = 0;
	printf("请输入要修改的位序:>");
	scanf("%d", &i);
	int len = My_Strlen(adrr);
	if (i > len||i < 0)
		printf("修改的位序越界！\n");
	else
	{
		int c = CommonOperat(adrr, i - 1);
			printf("请输入数据:>");
			scanf("%s", adrr[c].data);
		printf("修改成功，数据=%s\n", adrr[c].data);
	}
}
//打印
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