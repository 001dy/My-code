#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("practice makes perfect!");
//	return 0;
//}

//int main()
//{
//	//printf("v   v\n"" v v\n""  v\n");
//	/*printf(" v v\n");
//	printf("  v\n");*/
//	printf("%d\n", strlen("c:\test\040\test.c"));
//	printf("%c\n", '\041');
//	return 0;
//}

//int main()
//{
//	printf("The size of int is %d bytes.\n",sizeof(int));
//	printf("The size of short is %d bytes.\n",sizeof(short));
//	printf("The size of long is %d bytes.\n",sizeof(long));
//	printf("The size of long long is %d bytes.\n",sizeof(long long));
//	return 0;
//
//}

//int main()
//{
//	printf("0%o 0x%x", 1234, 1234);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	while (a!=0)
//	{
//		printf("%d", a % 10);
//		a = a / 10;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//		while ((ch = getchar())!= EOF)
//		{
//			printf("%c\n", ch + 32);
//			getchar();//���\n(�س�)
//		}
//	return 0;
//}

int main()
{
	char password [20] = { 0 };
	printf("��������룺");
		scanf("%s", password);
		printf("��ȷ�����루Y/N��:");
	int ch = getchar();
			getchar();
		if (ch == 'Y')
			printf("ȷ�ϳɹ�\n");
		else
			printf("����ȷ��\n");
		
		return 0;
}