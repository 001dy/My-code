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


//��ʼ��
void InitStack(SqStack *S);
//��ջ
void Push(SqStack*S, char*x);
//��ջ
void Pop(SqStack*S, char*y);
//����ƥ��
int BracketCheck(char str[], int length);