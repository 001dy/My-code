#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//数组：数组是一组相同类型元素的集合。
//1.一维数组的创建和初始化
//int main()
//{
	/*char arr[] = "abcdef";
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);
	}*/
	
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/

//一维数组在内存中的存储:数组在内存中是连续存放
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d]=%p\n", i,&arr[i]);
//	}
//	return 0;
//}

//二维数组的创建和初始化
//创建：
//int arr[3][4];三行四列
//char arr[3][5];
//初始化：
//int arr[3][4] = { 1,2,3,4 };
//int arr[3][4] = { {1,2},{4,5} };
//int arr[][4] = { {2,3},{4,5} }行可以省略，列不行;
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	char ch[5][6];
//	return 0;
//}
//二维数组的使用
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//一维数组在内存中的存储:数组在内存中是连续存放
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n ",i,j,&arr[i][j]);
//		}
//		//printf("\n");
//	}
//	
//	return 0;
//}