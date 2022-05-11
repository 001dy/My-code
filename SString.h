#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#define MaxSize 30

typedef struct 
{
	char data[MaxSize];
	int length;
}SString;

//��ֵ����
int StrAssign(SString* S, const char* str);
//���Ʋ���
int StrCopy(SString*S, const char*str);
//�пղ���
int StrEmpty(SString*S);
//���
void ClearString(SString*S);
//������
int Strcat(SString*S, const char*str);
//���Ӵ�
int SubSearch(SString*S, const char*str);