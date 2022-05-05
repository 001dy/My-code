#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 100

typedef struct
{
	int data[MaxSize];
	int top;
}SqStack;

//初始化
void InitSqStack(SqStack* S);
//入栈
void PushSqStack(SqStack* S, int* x);
//出栈
int *PopSqStack(SqStack* S, int *x);
//栈在后缀表达式中的应用
int StackSuffixCalculate(char str[], int length);
