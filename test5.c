#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"add.h"
//int main()
//{
//	int a = 15;
//	int b = 25;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//�����ĵݹ飺�����������ı�̼��ɳ�Ϊ�ݹ顣�ݹ���Ϊһ���㷨�ڳ�����������й㷺Ӧ�á�
//�ݹ����Ҫ˼����ʽ:�Ѵ��»�С��
//�ݹ��������Ҫ���������������������������������������ʱ�򣬵ݹ�㲻�ټ�����ÿ�εݹ���ú�Խ��Խ�ӽ����
//��������:ջ���stack overflow 
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	print(num);
//	//print(1234)
//	//print(123)4
//	//print(12)34
//	//print(1)234
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	/*int len = strlen(arr);
	printf("%d\n",len);*/
	int len = my_strlen(arr);//arr�����飬���鴫�Σ����ݹ�ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
	printf("len=%d\n", len);
	return 0;
}