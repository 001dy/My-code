#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//���飺������һ����ͬ����Ԫ�صļ��ϡ�
//1.һά����Ĵ����ͳ�ʼ��
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

//һά�������ڴ��еĴ洢:�������ڴ������������
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

//��ά����Ĵ����ͳ�ʼ��
//������
//int arr[3][4];��������
//char arr[3][5];
//��ʼ����
//int arr[3][4] = { 1,2,3,4 };
//int arr[3][4] = { {1,2},{4,5} };
//int arr[][4] = { {2,3},{4,5} }�п���ʡ�ԣ��в���;
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	char ch[5][6];
//	return 0;
//}
//��ά�����ʹ��
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
//һά�������ڴ��еĴ洢:�������ڴ������������
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