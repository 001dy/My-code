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
//	�Ӽ���(����)
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
//���ű��ʽ
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int d = 10;
//	int c = (a > b, a = b + 10, a, a = b + 1);
//	return 0; 
//	if (a = b = 1, c = a / 2, d > 0);
//}
////�±����ò�����
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
//	//���ú�����ʱ��()Ϊ�������ò�����
//	printf("max=%d", max);
//	return 0;
//}
//����һ���ṹ��
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//ʹ��struct stu������ʹ�����һ��ѧ������S1������ʼ��
//	struct Stu s1 = { "����",20,"20201361102" };
//	printf("%s\n%d\n%s\n",s1.name,s1. age, s1.id);
////�ṹ�����.��Ա��
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	//�ṹ��ָ��->��Ա��
//	return 0;
//}
//��ʽ����ת��(�������������������)
//char a = -1;
//�ض�Ϊ11111111
//��������λ�������λ��11111111111111111111111111111111
//int main()
//{
//	char a = 3;
//	//�ض�
//	char b = 127;
//	//�ض�
//	char c = a + b;
//	//������ӣ��ض�
//	printf("%d\n", c);
//	return 0;
//}
//����ת��



//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a + 3;
//	return 0;
//}
//�Ƿ����ʽ
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
//������ʽ
//a*b+b*c+e*f