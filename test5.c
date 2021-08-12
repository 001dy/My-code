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

//函数的递归：程序调用自身的编程技巧称为递归。递归作为一种算法在程序设计语言中广泛应用。
//递归的主要思考方式:把大事化小。
//递归的两个必要条件：存在限制条件，当满足这个限制条件的时候，递归便不再继续；每次递归调用后越来越接近这个
//限制条件:栈溢出stack overflow 
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
//	//递归
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
	int len = my_strlen(arr);//arr是数组，数组传参，传递过去的不是整个数组，而是首元素的地址
	printf("len=%d\n", len);
	return 0;
}