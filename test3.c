#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//猜数字游戏：1.电脑随机产生一个数2.猜数字3.重复玩
//void game()
//{
//	int guess = 0;
////1.生成一个随机数：rand()
//	//int ret = 0;
//	//拿时间戳来设置随机数的生成起始点/时间戳：当前计算机的时间-计算机的起始时间(1970.1.1.0:0:0)=(xxxx)秒
//	//time_t time(time_t*timer)
//	 int ret = rand()%100+1;//生成1-100随机数
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d",&guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);//
//	return 0;
//}

//go to语句；理论上没必要；最常见的用法就是终止程序在某些深度嵌套的结构的处理过程,例如一次跳出两层或多层循环

//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}

int main()
{
	char input[20] = { 0 };
	//cmd-command(命令行）//shutdown -s -t 60(关机）shutdown -a(取消关机)
	//system()-执行系统命令的
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n请输入:");
	scanf("%s\n", &input);
	if (strcmp(input, "我是猪") == 0)//比较两个字符串——strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}