//#include<stdio.h>
//#include<stdlib.h>//��system���
//int main()
//{
	//printf("hehe\n");
	//return 0;
//}
//����һ����stdio.h���ļ�
//std-��׼ standard input output
//#include<stdio.h>


//int main()//������- �������ڡ�main�������ҽ���һ��
//{
	//�����������
	//����Ļ�����hello world
	//����-print function-printf-��ӡ����
	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
	//���˵Ķ���-���к�
	//#include
	//printf("hellon world\n");
	//return 0;
//}


//int �����͵���˼
//mainǰ���int��ʾ����һ������ֵ
//int main()
//{

//	return 0;//����0
//}
//����һ�ֹ�ʱ��д��




//char-�ַ�����
//{
	//char ch='A';//�ڴ�
	//printf("%c\n",ch);//%c-��ӡ�ַ���ʽ������
	//return 0;
//}

//int main()
//{
	//int age = 20;
	//printf("%d\n", age);//%d-��ӡ����ʮ������
	//return 0;

//short int -������
//long-������
	//long num = 100;
	//printf("%d\n", num);
	//%d��ӡ����
	//%c��ӡ�ַ�
	//%f��ӡ����������-��ӡС��
	//%p�Ե�ַ����ʽ��ӡ
	//%x��ӡ16��������
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
////δ������ʶ��
//	//����extern�ⲿ����
//	extern int g_val;
//	printf("%d\n", g_val);
//
//}
//int a = 100;
	//�ֲ�������������
	/*int num = 20;
	{
		printf("num=%d\n", num);
	}*/
int main()
{
	//�������������
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//��������-���뺯��scanf_s
	scanf_s("%d%d", &num1, &num2);//ȡַ����&
	//C���Թ涨����������Ҫ�ڵ�ǰ�����ǰ��
	sum = num1 + num2;
	printf("sum=%d\n", sum);

	system("pause");   //��ס
	return 0;
}
		/*	int a = 10;
			printf("%d/n", a);
				int a = 10;
				�ֲ�������ȫ�ֱ��������ֲ�Ҫ��ͬ-������ᣬ����bug
				��ȫ�ֱ����;ֲ�������������ȫ��ͬʱ���ֲ���������
				printf("%d/n", a);
				return 0;
		}
				return 0;*/


	//int num2 = 20;//ȫ�ֱ���-������{}������飩��
	//int main()
	//{
	//	int num1 = 10;//�ֲ�����-������{}��
		//short age = 20;//���ڴ����������ֽ�=16bitλ���������20
		//float weight = 95.6f;//���ڴ�����4���ֽڣ�
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