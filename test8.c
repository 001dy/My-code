#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//数组作为函数参数:我们写代码时，会将数组作为参数传给函数；
//比如要实现一个冒泡排序（这里讲算法思想）函数将一个整型数组排序。冒泡：相邻两个数两两比较

void bubble_sort(int arr[],int sz)
{
	//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i <= sz - 1; i++)
	{
		int flag = 1;//假设这一趟要排序的数据已经有序
		int j = 0;
		for (j = 0; j <sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据不完全有序
			}
			if (flag == 1)
			{
				break;
			}

		}
	}
	
}
int main()
{
	int arr[] = { 9,1,2,3,4,5,6,7,8};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}