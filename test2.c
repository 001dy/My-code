//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10==9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d\n", i);
//		    count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i=1;i<=100;i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//			for (j = 1; j <=i; j++)
//			{
//				printf("%d*%d=%-2d ", i, j, i*j);//-2d左对齐；2d右对齐
//			}
//			printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标=%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 9;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right )/ 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标=%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//        printf("找不到\n");
//	}
//	return 0;
//}

