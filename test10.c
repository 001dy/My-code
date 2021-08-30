#include"game2.h"

void game()
{
	//布置好雷的信息
	char mine[ROWS][LOWS] = {0};
	//排查雷的信息
	char show[ROWS][LOWS] = {0};
	//初始化
	InitBoard(mine, ROWS, LOWS, '0');
    InitBoard(show, ROWS, LOWS, '*');
	//打印信息
	DisplayBoard(mine, ROW, LOW);
	DisplayBoard(show, ROW, LOW);
	//布置雷
	SetMine(mine, ROW, LOW);
	//DisplayBoard(mine, ROW, LOW);
	//扫雷
	FindMine(mine, show, ROW, LOW);
	
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("1.play  0.exit\n");
		printf("请选择:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择:\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}