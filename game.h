#define ROW 3
#define COL 3
#pragma once
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
PlayerMove(char board[ROW][COL], int row,int col);
computerMove(char board[ROW][COL], int row, int col);
//������������״̬
//1.���Ӯ'*'
//2.����Ӯ'#'
//3.ƽ��'Q'
//4.������'C'
char IsWin(char board[ROW][COL],int row,int col);