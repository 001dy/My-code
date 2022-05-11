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

//赋值操作
int StrAssign(SString* S, const char* str);
//复制操作
int StrCopy(SString*S, const char*str);
//判空操作
int StrEmpty(SString*S);
//清空
void ClearString(SString*S);
//串连接
int Strcat(SString*S, const char*str);
//查子串
int SubSearch(SString*S, const char*str);