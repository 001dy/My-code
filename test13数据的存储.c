#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

//C�������ͣ�1.�������ͣ�char��short��long��int��float��double��long long)2.�Զ������ͣ��������ͣ�
//���͵�����1.���ٿռ�Ĵ�С2.��ο����ڴ�ռ��ӽ�
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	short b = 10;
//	short int b = 10;
//	return 0;
//}
//���͹���
//���ͼ��壺char(unsigned char,signed char)short(unsigned short,signed short)int(unsigned int signed int)long(unsigned long,signed long
//�����ͼ��壺float��double
//�������ͣ��������ͣ��ṹ������struct��ö������enum,��������union
//ָ������int *pi��char *pc;float *pf;void *pv;
//�����ͣ�void��ʾ�����ͣ������ͣ���ͨ��Ӧ���ں����������͡�����������ָ������
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}
//��С��
//��˴���ģʽ����ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ�У������ݵĸ�λ�����ڵ͵�ַ�С�11 22 33 44��˳�Ŵ棩
//С�˴洢ģʽ����ָ���ݵĵ�λ�������ڴ�ĵ͵�ַ�У������ݵĸ�λ�����ڸߵ�ַ�С�44 33 22 11�����Ŵ棩
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	//дһ�δ��룬�жϴ�С��
//	//����1��С�ˣ�0���
//	int ret=check_sys();
//	if (ret== 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d%d%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);//%��ӡʮ���Ƶ��޷�������
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//signed char�ķ�Χ��-128��127��//unsigned char�ķ�Χ��(0,255)
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hellow world\n");
//	}
//	return 0;
//}
//int main()
//{
//	//����һ�������Ƹ�����V���Ա�ʾ���������ʽ����-1��^S*M*2^E;(-1)^S��ʾ����λ����S=0��VΪ������S=1��VΪ������M��ʾ��Ч���ִ��ڵ���1��С��2��2^E��ʾָ��λ
//	//��-1��^0*1.001*2^3
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n=%d\n", n);
//	printf("*pFloat=%f\n", *pFloat);
//	//(-1)^0*0.0000000000000000001001*2^-126
//	*pFloat = 9.0;
//	printf("num=%d\n", n);
//	//��-1��^0*1.001*2^3
//	//0 10000010 00100000000000000000000
//	printf("*pFloat=%f\n", *pFloat);
//	return 0;
//}
//int main()
//{
//	float f = 5.5;
//	//5.5ת��Ϊ������101.1����-1��^0*1.011*2^2
//	return 0;
//}
