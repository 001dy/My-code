#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//�ݹ������
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//�׳˹�ʽ��Fac(n)��(1��n<=1,1;(2)n>1,n*Fac(n-)
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Fac2(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}

//���n��쳲���������
//쳲��������У�1 1 2 3 5 8 13 21 34 55
//������n��쳲���������ʽ��Fib(n):(1)n<=2,1;(2)n>2,Fib(n-1)+Fib(n-2)
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//���Ե�����쳲��������ļ������
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD���Կ���
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}

