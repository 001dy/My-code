#include"game2.h"

void game()
{
	//���ú��׵���Ϣ
	char mine[ROWS][LOWS] = {0};
	//�Ų��׵���Ϣ
	char show[ROWS][LOWS] = {0};
	//��ʼ��
	InitBoard(mine, ROWS, LOWS, '0');
    InitBoard(show, ROWS, LOWS, '*');
	//��ӡ��Ϣ
	DisplayBoard(mine, ROW, LOW);
	DisplayBoard(show, ROW, LOW);
	//������
	SetMine(mine, ROW, LOW);
	//DisplayBoard(mine, ROW, LOW);
	//ɨ��
	FindMine(mine, show, ROW, LOW);
	
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("1.play  0.exit\n");
		printf("��ѡ��:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��:\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}