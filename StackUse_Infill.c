#include"StackUse_Infill.h"

//初始化
void InitSqStack(SqStack* S)
{
	S->top = -1;
	while (S->top < MaxSize - 1)
		S->data[++S->top] = 0;
	S->top = -1;
}
//void InitSign(Sign* K)
//{
//	K->top = -1;
//}


//入栈
void PushSqStack(SqStack* S, char *x)
{
	if (S->top == MaxSize - 1)
		printf("栈满!\n");
	else
	{
		S->data[++S->top] = *x;
		printf("添加成功!\n");
	}
}

//void  PushSign(Sign* K, char* x)
//{
//	if (K->top = MaxSize - 1)
//		printf("栈满!\n");
//	else
//	{
//		K->data[++K->top] = *x;
//		printf("添加成功!\n");
//	}
//}

//出栈
char* PopSqStack(SqStack*S, char *x)
{
	if (S->top < 0)
	{
		printf("栈空!\n");
		return 0;
	}
	else
	{
		*x= S->data[S->top--];
		return x;
	}
}
//char* PopSign(SqStack*K, char* x)
//{
//	if (K->top < 0)
//	{
//		printf("栈空!\n");
//		return 0;
//	}
//	else
//	{
//		*x = K->data[K->top--];
//		return x;
//	}
//}


//中缀表达式的计算
void StackUse_InfillToSuffix(char str[], char suffix[], int length)
{
	SqStack S;
	InitSqStack(&S);
	char x, y;
	int i = 0;
	int j = 0;
	for (i; i < length; i++)
	{
		if (str[i] >= '0'&&str[i] <= '9')
		{
			if (j < MaxSize)
			    suffix[j++] = str[i];
			else
				printf("数组空间已满!\n");
		}
		else if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
				PushSqStack(&S, &str[i]);
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			if (S.top < 0)
				PushSqStack(&S, &str[i]);
			else
			{
				if (str[i] == '+' || str[i] == '-')
				{
					while (S.data[S.top] == '+' || S.data[S.top] == '-' || S.data[S.top] == '*' || S.data[S.top] == '/')
					{
						PopSqStack(&S, &x);
						suffix[j++] = x;
					}
					PushSqStack(&S, &str[i]);
				}
				else if (str[i] == '*' || str[i] == '/')
				{
					while (S.data[S.top] == '*' || S.data[S.top] == '/')
					{
						PopSqStack(&S, &x);
						suffix[j++] = x;
					}
					PushSqStack(&S, &str[i]);
				}
			}
		}
		else if (str[i] == ')')
		{
			while (S.data[S.top] != '(')
			{
				PopSqStack(&S, &x);
				suffix[j++] = x;
			}
			PopSqStack(&S, &y);
			while (S.top >= 0)
			{
				PopSqStack(&S, &x);
				suffix[j++] = x;
			}
		}
	}
	while (S.top >= 0)
	{
		PopSqStack(&S, &x);
		suffix[j++] = x;
	}
}