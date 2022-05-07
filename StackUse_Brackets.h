#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 10

typedef struct
{
	char data[MaxSize];
	int top;
}SqStack;


//初始化
void InitStack(SqStack *S);
//入栈
void Push(SqStack*S, char*x);
//出栈
void Pop(SqStack*S, char*y);
//括号匹配
int BracketCheck(char str[], int length);