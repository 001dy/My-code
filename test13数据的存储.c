#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

//C语言类型：1.内置类型（char，short，long，int，float，double，long long)2.自定义类型（构造类型）
//类型的意义1.开辟空间的大小2.如何看待内存空间视角
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	short b = 10;
//	short int b = 10;
//	return 0;
//}
//类型归纳
//整型家族：char(unsigned char,signed char)short(unsigned short,signed short)int(unsigned int signed int)long(unsigned long,signed long
//浮点型家族：float，double
//构造类型：数组类型，结构体类型struct，枚举类型enum,联合类型union
//指针类型int *pi；char *pc;float *pf;void *pv;
//空类型：void表示空类型（无类型），通常应用于函数返回类型、函数参数、指针类型
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}
//大小端
//大端储存模式：是指数据的低位保存在内存的高地址中，而数据的高位保存在低地址中。11 22 33 44（顺着存）
//小端存储模式：是指数据的低位保存在内存的低地址中，而数据的高位保存在高地址中。44 33 22 11（倒着存）
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	//写一段代码，判断大小端
//	//返回1，小端；0大端
//	int ret=check_sys();
//	if (ret== 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d%d%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);//%打印十进制的无符号数字
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//signed char的范围（-128，127）//unsigned char的范围是(0,255)
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hellow world\n");
//	}
//	return 0;
//}
//int main()
//{
//	//任意一个二进制浮点数V可以表示成下面的形式：（-1）^S*M*2^E;(-1)^S表示符号位，当S=0，V为正数；S=1，V为负数；M表示有效数字大于等于1，小于2；2^E表示指数位
//	//（-1）^0*1.001*2^3
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n=%d\n", n);
//	printf("*pFloat=%f\n", *pFloat);
//	//(-1)^0*0.0000000000000000001001*2^-126
//	*pFloat = 9.0;
//	printf("num=%d\n", n);
//	//（-1）^0*1.001*2^3
//	//0 10000010 00100000000000000000000
//	printf("*pFloat=%f\n", *pFloat);
//	return 0;
//}
//int main()
//{
//	float f = 5.5;
//	//5.5转换为二进制101.1；（-1）^0*1.011*2^2
//	return 0;
//}
