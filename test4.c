//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////#include<string.h>
////#include<stdlib.h>
//#include<math.h>
//函数
//int Add(int x, int y)
//{
//	int z = x+y;
//	//z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "###########";
//		strcpy(arr2, arr1);
//		printf("%s\n",arr2);
//	return 0;
//}

//memset=memory-内存set-设置
//int main()
//{
//	char arr[] = "hello world";
//		memset(arr, '*', 5);
//		printf("%s\n", arr);
//	return 0;
//}

//函数的组成
//ret_type fun_name(para1, *)
//{
//	statement;
//}
//ret_type返回类型；fun_name函数名;para1函数参数;

//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 30;
//	 int max= max(a,b);
//	 printf("%d\n", max);
//	return 0;
//
//}


//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x= y;
//	y = tmp;
//}
//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 100;
//	int b = 200;
//	//swap1(a, b);//传值调用
//	swap2(&a, &b);//传址调用
//	int tmp = 0;
//	//开始交换
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d,b=%d",a,b);
//	return 0;
//}

//函数参数
//实参：真实传给函数的参数，叫实参。实参可以是：常量、变量、表达式、函数等。必须有确定的值。
//形参：指函数后括号后的变量。只在函数中有效。
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	//scanf("%d", &i);
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}


//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//       int mid = (left + right) / 2;
//       if (arr[mid] < k)
//	   {
//		left = mid + 1;
//	   }
//	   else if (arr[mid] > k)
//	   {
//		right = mid - 1;
//	   }
//	   else
//	   {
//		return mid;
//	   }
//	}
//	return -1;
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//		if (ret == -1)
//		{
//			printf("找不到\n");
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", ret);
//		}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//函数的嵌套调用和链式访问；链式访问：把一个函数的返回值作为另一个函数的参数
//int main()
//{
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
//int main()
//{
//	printf("%d",printf("%d",printf("%d", 43)));
//	return 0;
//}

//函数的声明和定义
//声明：
//int Add(int x, int y);
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}
//定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}