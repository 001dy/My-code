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

//��ʼ��
void InitSqStack(SqStack* S);
//��ջ
void PushSqStack(SqStack* S, int* x);
//��ջ
int *PopSqStack(SqStack* S, int *x);
//ջ�ں�׺���ʽ�е�Ӧ��
int StackSuffixCalculate(char str[], int length);
