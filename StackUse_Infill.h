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

//��ʼ��
void InitSqStack(SqStack* S);
//void InitSign(Sign* K);

//��ջ
void PushSqStack(SqStack* S, char *x);
//void PushSign(Sign* K, char* x);

//��ջ
char* PopSqStack(SqStack*S, char *x);
//char* PopSign(SqStack*K, char* x);

//��׺���ʽת��׺
void StackUse_InfillToSuffix(char str[],char suffix[], int length);