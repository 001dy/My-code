#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define LOW 9
#define ROWS ROW+2
#define LOWS LOW+2
#define EASY_COUNT 10
void InitBoard(char board[ROWS][LOWS], int rows, int lows, char set);
void DisplayBoard(char board[ROWS][LOWS], int row, int low);
void SetMine(char board[ROWS][LOWS], int row, int low);
void FindMine(char mine[ROWS][LOWS],char show[ROWS][LOWS],int row,int low);
#pragma once
