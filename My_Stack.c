#include"My_Stack.h"


void Menu()
{
	printf("-------------��ѡ��-------------\n");
	printf("******1.Pus         2.Po*****\n");
	printf("******3.Del         4.Mod******\n");
	printf("******5.GT          0.EXIT*****\n");
}
//��ʼ��ջ
void InitStack(SqStack *S)
{
	S->top = -1;
}

//��ջ����
void Push(SqStack *S)
{
	if (S->top == MaxSize - 1)
		printf("ջ����!\n");
	else
	{
		printf("������Ҫ��ӵ�Ԫ��:>");
		
		scanf("%s", &(S->data[++S->top]));
		printf("��ӳɹ�!\n");
	}
}

//��ջ����
char* Pop(SqStack *S,char *c)
{
	if (S->top == -1)
	{
		printf("ջ��!\n");
		return 0;
	}
	else
	{
		*c = S->data[S->top--];
		return c;
	}
}

//��ջ��Ԫ��
char* GetTop(SqStack *S, char* c)
{
	if (S->top == -1)
	{
		printf("ջ��!\n");
		return 0;
	}
	else
	{
		*c = S->data[S->top];
		return c;
	}
}

//ɾ������
void Delete(SqStack *S)
{
	if (S->top == -1)
		printf("ջ��!\n");
	else
		S->top--;
}

//�޸Ĳ���
void Modify(SqStack *S)
{
	if (S->top == -1)
		printf("ջ��!\n");
	else
	{
		printf("��������Ԫ��:>");
		scanf("%s", &(S->data[S->top]));
	}
}