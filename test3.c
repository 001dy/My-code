#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//��������Ϸ��1.�����������һ����2.������3.�ظ���
//void game()
//{
//	int guess = 0;
////1.����һ���������rand()
//	//int ret = 0;
//	//��ʱ����������������������ʼ��/ʱ�������ǰ�������ʱ��-���������ʼʱ��(1970.1.1.0:0:0)=(xxxx)��
//	//time_t time(time_t*timer)
//	 int ret = rand()%100+1;//����1-100�����
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d",&guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("*****1.play  0.exit ******\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);//
//	return 0;
//}

//go to��䣻������û��Ҫ��������÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ������,����һ�������������ѭ��

//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("���\n");
//again:
//	printf("hehe\n");
//	return 0;
//}

int main()
{
	char input[20] = { 0 };
	//cmd-command(�����У�//shutdown -s -t 60(�ػ���shutdown -a(ȡ���ػ�)
	//system()-ִ��ϵͳ�����
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�\n������:");
	scanf("%s\n", &input);
	if (strcmp(input, "������") == 0)//�Ƚ������ַ�������strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}