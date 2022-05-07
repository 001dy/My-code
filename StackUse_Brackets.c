#include"StackUse_Brackets.h"

//³õÊ¼»¯
void InitStack(SqStack *S)
{
	S->top = -1;
	while (S->top < MaxSize)
		S->data[++S->top] = 0;
	S->top = -1;
}

//ÈëÕ»
void Push(SqStack *S,char *x)
{
	if (S->top >= MaxSize-1)
		printf("Õ»Âú£¡\n");
	else
	{
		S->data[++S->top] = *x;
		printf("Ìí¼Ó³É¹¦!\n");
	}
}

void Pop(SqStack *S, char *y)
{
	if(S->top<0)
		printf("Õ»¿Õ£¡\n");
	else
	{
		*y = S->data[S->top--];
	}
}

int BracketCheck(char str[], int length)
{
	SqStack S;
	InitStack(&S);
	for (int i = 0; i < length; i++)
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			char x = str[i];
			Push(&S, &x);
		}
		else
		{
			if (S.top < 0)
			{
				printf("Õ»¿ÕÆ¥ÅäÊ§°Ü!\n");
				return 0;
			}
			char y;
			Pop(&S, &y);
			if (str[i] == ')' && y != '(' )
			{
				printf("Æ¥ÅäÊ§°Ü!\n");
				return 0;
			}
			if (str[i] == ']' && y != '[')
			{
				printf("Æ¥ÅäÊ§°Ü!\n");
				return 0;
			}
			if (str[i] == '}' && y != '{')
			{
				printf("Æ¥ÅäÊ§°Ü!\n");
				return 0;
			}
		}
	}
	if (S.top < 0)
	{
		printf("Æ¥Åä³É¹¦!\n");
		return 1;
	}
	return 0;
}