#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;//p����һ��ָ�����
//	return 0;
//}
//ָ���ָ������
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//	int a = 0x11223344;
//	int*pa = &a;//�ܹ�����4���ֽ�
//	*pa = 0;
//	printf("%d\n", a);
//	char*pc = &a;//�ܹ�����1���ֽ�
//	*pc = 0;
//	printf("%d\n", a);
//	//ָ�����;�����ָ����н����ò���ʱ���ܹ����ʿռ�Ĵ�С
//	return 0;
//
//}

//ָ��+-����
//int main()
//{
//	int a = 0x11223344;
//	int*pa = &a;
//	char*pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//ָ�����;�����ָ��һ���߶�Զ
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int*p =&arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//Ұָ��(ָ��ָ���λ�ò���֪)
int main()
{
	//int a;//δ��ʼ���������ֵ
	//int*p;//�����ַ
	int arr[10] = { 0 };
	int*p =&arr;
	int i = 0;
	for (i = 0; i < 12; i++)//Խ�����
	{
		*(p + i) = 1;
	}
	return 0;
}
int*test()
{
	int a = 10;
	return &a;
}
//����������ʱ���ڴ汻�ͷš�
int main()
{
	int*p = test();
	*p = 20;
	return 0;
}
//����Ұָ�룺��ʼ������Ч�ԣ����ⱻ�ͷţ�С��Խ��