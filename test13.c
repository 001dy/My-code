#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//void my_strcpy(char* dest, char* src)
//{
//	if (*dest != NULL && *src != NULL)
//	{
//		while (*dest++ = *src ++ )
//	    {
//
//	    }
//	}
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	//把src指向的字符串拷贝到dest指向的空间里
//	while (*dest++ = *src++)
//	{
//
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "##############";
//	char arr2[] = "bit";
//	//(目的地，源头)
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//    const int* p = &num;//const放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p（num）的值
//	*p=20;
//	int* const p = &num;//const放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变
//
//}
//my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
