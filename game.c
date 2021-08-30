#include"game2.h"
void InitBoard(char board[ROWS][LOWS], int rows, int lows, char set)
{
	int i = 0;
	int j = 0;
    for (i = 0; i < ROWS; i++)
	{
	    for (j = 0; j < LOWS; j++)
	    {
		      board[i][j] = set;
	    }
    }
}
void DisplayBoard(char board[ROWS][LOWS], int row, int low)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= LOW; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= ROW; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= LOW; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][LOWS], int row, int low)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % low + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int  get_mine_count(char mine[ROWS][LOWS], int x, int y)
{
	int countis = 0;
	for(int i=x-1;i<=x+1;i++)
	for (int j = y - 1; j <= y + 1; j++)
	{
	   if (mine[i][j] == '1')
	   countis++;
	}
	return countis;
	/*return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x][y - 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y + 1] - 8 * '0';*/
}
//void judageAround(char mine[ROWS][LOWS], char show[ROWS][LOWS], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = x - 1; i <= x + 1; i++)
//	{
//		for (j = y - 1; j <= y + 1; j++)
//		{
//			if (show[i][j] != ' '&&i!= 0 && i != ROWS - 1 && j != 0 && j != LOWS - 1)
//			{
//				int count = get_mine_count(mine, i, j);
//				show[i][j] = count + '0';
//				if (show[i][j] == '0')
//				{
//					show[i][j] = ' ';
//					judageAround(mine, show, i, j);
//
//				}
//			}
//			
//		}
//	}
//}
void FindMine(char mine[ROWS][LOWS], char show[ROWS][LOWS], int row, int low)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//9*9-10=71
	while(win<row*low- EASY_COUNT)
	{
		printf("请输入排查雷的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= low)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine, ROW, LOW);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				/*if (show[x][y] == '0')
				{
					show[x][y] = ' ';
					judageAround(mine, show, x, y);
				}*/
				DisplayBoard(show, ROW, LOW);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
	if (win == win < row*low - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, LOW);
	}

}