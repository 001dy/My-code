#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	加减法(有限)
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d\nb=%d", a, b);
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int count = 0;
//	//scanf("%d\n", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d\n", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//			num = num /2;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);
//	return 0;
//}
//逗号表达式
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int d = 10;
//	int c = (a > b, a = b + 10, a, a = b + 1);
//	return 0; 
//	if (a = b = 1, c = a / 2, d > 0);
//}
////下标引用操作符
//int mian()
//{
//	int arr[10] = { 0 };
//	arr[4] = 10;
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	//调用函数的时候()为函数调用操作符
//	printf("max=%d", max);
//	return 0;
//}
//创建一个结构体
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//使用struct stu这个类型创建了一个学生对象S1，并初始化
//	struct Stu s1 = { "张三",20,"20201361102" };
//	printf("%s\n%d\n%s\n",s1.name,s1. age, s1.id);
////结构体变量.成员名
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	//结构体指针->成员名
//	return 0;
//}
//隐式类型转换(参与运算必须整型提升)
//char a = -1;
//截断为11111111
//提升（高位补充符号位）11111111111111111111111111111111
//int main()
//{
//	char a = 3;
//	//截断
//	char b = 127;
//	//截断
//	char c = a + b;
//	//提升相加，截断
//	printf("%d\n", c);
//	return 0;
//}
//算数转换



//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a + 3;
//	return 0;
//}
//非法表达式
//int main()
//{
//	int i = 0;
//	i = i-- - --i*(i = -3)*i++ + ++i;
//	printf("i=%d\n", i);
//	return 0;
//}
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun()*fun();
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("%d", a);
//	return 0;
//}
//问题表达式
//a*b+b*c+e*f