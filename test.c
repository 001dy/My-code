//#include<stdio.h>
//#include<stdlib.h>//与system配合
//int main()
//{
	//printf("hehe\n");
	//return 0;
//}
//包含一个叫stdio.h的文件
//std-标准 standard input output
//#include<stdio.h>


//int main()//主函数- 程序的入口—main函数有且仅有一个
//{
	//这里完成任务
	//在屏幕上输出hello world
	//函数-print function-printf-打印函数
	//库函数-C语言本身提供给我们使用的函数
	//别人的东西-打招呼
	//#include
	//printf("hellon world\n");
	//return 0;
//}


//int 是整型的意思
//main前面的int表示返回一个整型值
//int main()
//{

//	return 0;//返回0
//}
//这是一种过时的写法




//char-字符类型
//{
	//char ch='A';//内存
	//printf("%c\n",ch);//%c-打印字符格式的数据
	//return 0;
//}

//int main()
//{
	//int age = 20;
	//printf("%d\n", age);//%d-打印整型十进制数
	//return 0;

//short int -短整型
//long-长整型
	//long num = 100;
	//printf("%d\n", num);
	//%d打印整型
	//%c打印字符
	//%f打印浮点型数字-打印小数
	//%p以地址的形式打印
	//%x打印16进制数字
	//%o...
	//float f = 4.3;
	//printf("%f\n", f);
	//double d = 3.14;
		//printf("%lf\n", d);
	//return 0;

	//int main()
	//{
		//printf("%d\n", sizeof(char));
		//printf("%d\n", sizeof(short));
		//printf("%d\n", sizeof(int));
		//printf("%d\n", sizeof(long));
		//printf("%d\n", sizeof(long long));
		//printf("%d\n", sizeof(float));
		//printf("%d\n", sizeof(double));
		//return 0;
		//}
//int main()
//{
////未声明标识符
//	//声明extern外部符号
//	extern int g_val;
//	printf("%d\n", g_val);
//
//}
//int a = 100;
	//局部变量的作用域
	/*int num = 20;
	{
		printf("num=%d\n", num);
	}*/
int main()
{
	//计算两个数相加
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据-输入函数scanf_s
	scanf_s("%d%d", &num1, &num2);//取址符号&
	//C语言规定，变量定义要在当前代码块前面
	sum = num1 + num2;
	printf("sum=%d\n", sum);

	system("pause");   //卡住
	return 0;
}
		/*	int a = 10;
			printf("%d/n", a);
				int a = 10;
				局部变量和全局变量的名字不要相同-容易误会，产生bug
				当全局变量和局部变量的名字完全相同时，局部变量优先
				printf("%d/n", a);
				return 0;
		}
				return 0;*/


	//int num2 = 20;//全局变量-定义在{}（代码块）外
	//int main()
	//{
	//	int num1 = 10;//局部变量-定义在{}内
		//short age = 20;//向内存申请两个字节=16bit位，用来存放20
		//float weight = 95.6f;//向内存申请4个字节，
		//printf("")
		//short s = 20;
		//printf("%d\n", s);
		//return 0;
		//float f = 5.6;
		//printf("%f\n", f);
		//return 0;


		//char ch = 'f';
		//printf("%c\n", ch);
		//return 0;
	//}