#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
//void menu()
//	{
//	printf("1.piay  0.exit");
//	}
//��Ϸ��ʵ��
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
	    ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//�ٵ�����
		computerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	printf("1.piay  0.exit");
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
        // menu();
	     printf("��ѡ��>:");
	     scanf("%d", &input);
	     switch (input)
	     {
		 case 1:
			 game();
		    break;
		case 0:
			printf("�˳���Ϸ\n");
		    break;
	     default:
			 printf("ѡ�����������ѡ��\n");
		    break;

	     }
	} while (input);
	
}
int main()
{
	test();
	return 0;

}
