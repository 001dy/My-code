#include"My_Stack.h"


void Menu()
{
	printf("-------------请选择-------------\n");
	printf("******1.Pus         2.Po*****\n");
	printf("******3.Del         4.Mod******\n");
	printf("******5.GT          0.EXIT*****\n");
}
//初始化栈
void InitStack(SqStack *S)
{
	S->top = -1;
}

//进栈操作
void Push(SqStack *S)
{
	if (S->top == MaxSize - 1)
		printf("栈已满!\n");
	else
	{
		printf("请输入要添加的元素:>");
		
		scanf("%s", &(S->data[++S->top]));
		printf("添加成功!\n");
	}
}

//出栈操作
char* Pop(SqStack *S,char *c)
{
	if (S->top == -1)
	{
		printf("栈空!\n");
		return 0;
	}
	else
	{
		*c = S->data[S->top--];
		return c;
	}
}

//读栈顶元素
char* GetTop(SqStack *S, char* c)
{
	if (S->top == -1)
	{
		printf("栈空!\n");
		return 0;
	}
	else
	{
		*c = S->data[S->top];
		return c;
	}
}

//删除操作
void Delete(SqStack *S)
{
	if (S->top == -1)
		printf("栈空!\n");
	else
		S->top--;
}

//修改操作
void Modify(SqStack *S)
{
	if (S->top == -1)
		printf("栈空!\n");
	else
	{
		printf("请输入新元素:>");
		scanf("%s", &(S->data[S->top]));
	}
}