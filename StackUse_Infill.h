#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 30

typedef struct SquenceStack
{
	char data[MaxSize];
	int top;
}SqStack;

//typedef struct
//{
//	char data[MaxSize];
//	int top;
//}Sign;

//初始化
void InitSqStack(SqStack* S);
//void InitSign(Sign* K);

//入栈
void PushSqStack(SqStack* S, char *x);
//void PushSign(Sign* K, char* x);

//出栈
char* PopSqStack(SqStack*S, char *x);
//char* PopSign(SqStack*K, char* x);

//中缀表达式转后缀
void StackUse_InfillToSuffix(char str[],char suffix[], int length);