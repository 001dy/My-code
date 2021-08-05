#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	int num = 3;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//	/*while (i < +100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;	
//	}*/
//	
//
//	return 0;
//}

//swith语句常常用于多分支情况。//case整型常量表达式；在switch语句中搭配break使用才能实现真正的分支
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//    case 2: 
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++;
//			   n++;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("%d\n%d\n",n,m);
//	return 0;
//}

//循环语句
//while循环;
//int main()
//{	
//	int n = 1;
//	while (n <= 10)
//	{
//		if (n == 5)
//			continue;//终止本次循环直接跳到判断部分
//		printf("%d\n", n);
//		n++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//int ch = getchar();
//	//putchar(ch);
//	return 0;
//}

//for循环；语法：for（表达式1：表达式2：表达式3）循环语句；
//表达式1为初始化部分，用于初始化循环变量的。表达式2为条件判断部分，用于判断循环时候终止。表达式3为调整部分，
//用于循环条件的调整//建议：不在for循环体内修改循环变量，防止for循环失去控制；建议for语句的循环控制变量的取值
//采用"前闭后开区间"写法。

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;
//	     printf("%d", i);
//	}	
//	return 0;
//}

//int main()
//{
//	for (;;)//for循环的初始化、调整、判断都可以省略，但判断部分被省略即判断条件就是恒为真
//	{
//		printf("hehe\n");
//	}
//	return 0;

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//do...while()循环
//int main()
//{
//	int i= 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//   printf("ret=%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//     for (i = 1; i <= n; i++)
//	  {
//		ret = ret * i;
//	  }
//	 sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k==arr[i])
//		{
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left= mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3;i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
				break;
		}
		else
		{
			printf("密码错误\n");
		}

	}
	if (i == 3)
		printf("登录失败\n");
	return 0;
}