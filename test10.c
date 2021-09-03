#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指针
//int main()
//{
//	int a = 10;
//	int* p = &a;//p就是一个指针变量
//	return 0;
//}
//指针和指针类型
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//	int a = 0x11223344;
//	int*pa = &a;//能够访问4个字节
//	*pa = 0;
//	printf("%d\n", a);
//	char*pc = &a;//能够访问1个字节
//	*pc = 0;
//	printf("%d\n", a);
//	//指针类型决定了指针进行解引用操作时，能够访问空间的大小
//	return 0;
//
//}

//指针+-整数
//int main()
//{
//	int a = 0x11223344;
//	int*pa = &a;
//	char*pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//指针类型决定了指针一步走多远
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
//野指针(指针指向的位置不可知)
int main()
{
	//int a;//未初始化，是随机值
	//int*p;//随机地址
	int arr[10] = { 0 };
	int*p =&arr;
	int i = 0;
	for (i = 0; i < 12; i++)//越界访问
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
//函数结束的时候，内存被释放。
int main()
{
	int*p = test();
	*p = 20;
	return 0;
}
//避免野指针：初始化，有效性，避免被释放，小心越界