#define _CRT_SECURE_NO_WARNINGS 1
#include "ListHead.h"

void Menu() 
{
	printf("**********——请选择——**********\n");
	printf("*****1.ADD              2.DEL ****\n");
	printf("*****3.SEARCH           4.SHOW****\n");
	printf("*****5.Modify           0.EXIT****\n");
}
void InitList(Sqlist* L) 
{
	//静态初始化
	/*memset(L->B, 0, sizeof(L->B));
	L->length = 0;*/
	//动态初始化
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
		printf("空间已满\n");
	else
	{
		printf("请输入书号：>");
		scanf("%s", L->B[L->length].id);
		printf("请输入书名：>");
		scanf("%s", L->B[L->length].name);
		printf("请输入价格：>");
		scanf("%f", &(L->B[L->length].price));

		L->length++;
		printf("添加成功\n");
	}
}

void Show(const Sqlist* L)
{
	if (L->length == 0)
		printf("对不起，未添加图书\n");
	else
	{
		int i = 0;
		printf("%-20s\t%-30s\t%-s\n", "书号", "书名", "价格");
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
	return -1;//找不到
}

void DeleteElem(Sqlist* L)
{
	printf("请输入要删除的书籍书号：>");
	char id[MAX_ID];
	//int count = 0;
	scanf("%s", &id);
	int pos = Find(L, id);
	//1.查找
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

	//2.删除
	if (pos == -1)
	{
		printf("书籍不存在！！！\n");
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
		printf("删除成功！！！\n");
	}
}

void SerachBook(const Sqlist *L)
{
	printf("请输入要查找的书籍书号：>");
	char id[MAX_ID];
	scanf("%s", &id);
	//1.查找
	int pos =Find(L, id);
	if (pos==-1)
	{
		printf("要查找书籍不存在\n");
	}
	else
	{
		printf("%-20s\t%-30s\t%-f\n", L->B[pos].id, L->B[pos].name, L->B[pos].price);
	}
}



void Modify( Sqlist *L)
{
	printf("请输入要修改的书籍书号：>");
	char id[MAX_ID];
	scanf("%s", &id);
	//1.查找
	int pos = Find(L, id);
	if (pos == -1)
	{
		printf("要修改的书籍不存在\n");
	}
	else
	{
		printf("请输入书号：>");
		scanf("%s", L->B[pos].id);
		printf("请输入书名：>");
		scanf("%s", L->B[pos].name);
		printf("请输入价格：>");
		scanf("%f", &(L->B[pos].price));

		printf("修改成功！！！\n");
	}

}
