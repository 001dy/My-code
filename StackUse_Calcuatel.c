#include"StackUse_Caculate.h"

//��ʼ��
void InitSqStack(SqStack* S)
{
	S->top = -1;
	while (S->top < MaxSize-1)
		S->data[++S->top] = 0;
	S->top = -1;
}

//��ջ
void PushSqStack(SqStack* S,int* x)
{
	if (S->top >= MaxSize - 1)
		printf("ջ����\n");
	else
	{
		S->data[++S->top] = *x;
		printf("��ӳɹ�!\n");
	}
}

//��ջ
 int *PopSqStack(SqStack* S, int *x)
{
	 if (S->top < 0)
	 {
		 printf("ջ�գ�\n");
		 return x;
	 }
	else
	{	
		*x = S->data[S->top--];
		return x;
	}
}

 //ջ�ں�׺���ʽ�е�Ӧ��
 int StackSuffixCalculate(char str[], int length)
 {
	 SqStack S;
	 InitSqStack(&S);
	 int i = 0;
	 int w,x, y,z;
	
	 for (i; i < length; i++)
	 {
		 if (str[i] != '+'&& str[i] != '-'&& str[i] != '*'&&str[i] != '/')
		 {
			 w = 0;
			 w = 10 * w + (str[i] - '0');
			 PushSqStack(&S, &w);
		 }
		 else {
			 if (str[i] == '+')
			 {

				 PopSqStack(&S, &x);
				 PopSqStack(&S, &y);
				 z = y + x;
			 }
			 else if (str[i] == '-')
			 {
				 PopSqStack(&S, &x);
				 PopSqStack(&S, &y);
				 z = y - x;
			 }
			 else if (str[i] == '*')
			 {
				 PopSqStack(&S, &x);
				 PopSqStack(&S, &y);
				 z = y * x;
			 }
			 else if (str[i] == '/')
			 {
				 PopSqStack(&S, &x);
				 PopSqStack(&S, &y);
				 z = y / x;
			 }
			 PushSqStack(&S, &z);
		 }
	 }
	 PopSqStack(&S, &z);
	 return z;
 }