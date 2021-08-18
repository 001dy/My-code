#define ROW 3
#define COL 3
#pragma once
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
PlayerMove(char board[ROW][COL], int row,int col);
computerMove(char board[ROW][COL], int row, int col);
//告诉我们四种状态
//1.玩家赢'*'
//2.电脑赢'#'
//3.平局'Q'
//4.继续下'C'
char IsWin(char board[ROW][COL],int row,int col);