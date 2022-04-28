#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 10

//顺序栈的实现
typedef struct
{
	char data[MaxSize];
	int top;   //栈顶指针
}SqStack;

enum
{
	EXIT,
	Pus,
	Po,
	Del,
	Mod,
	GT
};
//操作菜单
void Menu();
//初始化栈
void InitStack(SqStack *S);
//进栈操作
void Push(SqStack *S);
//出栈操作
char* Pop(SqStack *S,char* c);
//读栈顶元素
char* GetTop(SqStack *S,char* c);
//删除操作
void Delete(SqStack *S);
//修改操作
void Modify(SqStack *S);
