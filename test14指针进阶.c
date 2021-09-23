#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//字符指针
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";
//	//printf("%c\n", *p);
//	//printf("%s\n", p);
//	//*p = 'w';//错误做法
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char *p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//指针数组:是用来存放指针的数组
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4];
//	char* pch[5];
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int*  parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//数组指针：指针
//int main()
//{
//	int *p = NULL;//整型指针-指向整型的指针-可以存放整型的地址
//	char *pc = NULL;//字符指针-指向字符的指针-可以存放字符的地址
//	//数组指针-指向数组的指针-存放数组的地址
//	int arr[10] = { 0 };//arr-首元素地址；&arr[0]首元素的地址；&arr数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//p就是数组指针
//
//	
//	return 0;
//}
//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*int(*pa)[10] = &arr;*/
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));
//	}*/
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
//}
//void print1(int arr[3][5], int x, int y)//参数是数组的形式
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)//参数是指针的形式
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr,3,5);
//	print2(arr, 3, 5);
//	return 0;
//}
//int(*parr3[10])[5];//该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int

//数组参数、指针参数
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int arr[3][])//❌
//{}
//void test(int arr[][])//×
//{}
//void test(int *arr)//×
//{}
//void test(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5];
//	test(arr);//二维数组传参
//	return 0;
//}
//void test(int** ptr)
//{
//	printf("num=%d\n", **ptr);
//}
//int main()
//{
//	int n = 10.;
//	int* p = &n;
//	int **pp = &p;
//	int* arr[10];
//	test(pp);
//	test(&p);
//	test(arr);
//	return 0;
//}
//函数指针
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	printf("%d\n", Add(a, b));
//	printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}
//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = print;
//	(*p)("hello,bit");
//}
//int main()
//{
//	(*(void(*)())0)();
//	void(*signal(int, void(*)(int)))(int);
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	return 0;
//}

//函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int *arr[5];
//	int(*pa)(int, int) = Add;
//	//需要一个数组，这个数组可以存放4个函数的地址——函数指针的数组
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}
//char* My_strcpy(char* dest, const char* src)
//{}
//char*(*pf)(char*, const char*) = My_strcpy;
//void menu()
//{
//	printf("*******************\n");
//	printf("***1.add   2.sub***\n");
//	printf("***3.mul   4.div***\n");
//	printf("*****  0.exit *****\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void Clac(int(*pc)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入:>\n");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pc(x, y));
//
//}

////int main()
////{
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	do
////	{
////		menu();
////		printf("请选择:>");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 0:
////			printf("退出\n");
////			break;
////		case 1:
////			printf("%d\n", Add(x, y));
////			break;
////		case 2:
////			printf("%d\n", Sub(x, y));
////			break;
////		case 3:
////			printf("%d\n", Mul(x, y));
////			break;
////		case 4:
////			printf("%d\n", Div(x, y));
////			break;
////		default:
////			printf("输入错误，请重新输入:>\n");
////			break;
////		}
////	} while (input);
////	return 0;
////}
//回调函数
//switch (input)
//{
//case 0:
//	printf("退出\n");
//	break;
//case 1:
//	Calc(Add);
//	break;
//case 2:
//	Calc(Sub);
//	break;
//case 3:
//	Calc(Mul);
//	break;
//case 1:
//	Calc(Div);
//	break;
//default:printf("选择错误，请重新输入:>\n");
//
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入操作数:>\n");
//			scanf("%d%d", &x, &y);
//			int(*pArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//函数指针数组的用途--转移表
//			printf("%d\n", pArr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误，请重新输入:>");
//		}
//	} while (input);
//	return 0;
//}

//指向函数指针数组的指针
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//	int(*pf)(int, int);//函数指针
//	int(*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
//}

//回调函数
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

