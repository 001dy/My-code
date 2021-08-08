//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1;i<100; i++)	
//	{
//       i % 3 == 0;
//         printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m,&n);
//	while (m%n)//辗转相除法
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//    printf("\ncount=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//试除法
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//			printf("%d ", i);
//	}
//	return 0;
//}