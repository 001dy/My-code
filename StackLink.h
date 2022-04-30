#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 10

//链栈的实现（只能头插）
typedef struct StackLink
{
	char data[MaxSize];
	struct StackLink *next;
}StackLink;

enum
{
	EXIT,
	Push,
	Pop,
	Del,
	Mod,
	SSL,
	GT
};

//操作菜单
void Menu();
//初始化链栈
StackLink* InitSL();
//压栈
void PushSL(StackLink* L);
//弹栈
void PopSL(StackLink* L);
//删除栈顶元素
void DeleteSL(StackLink* L);
//修改元素
void ModifySL(StackLink* L);
//查找元素
void SerachSL(StackLink* L);
//读取栈顶元素
void GetTop(StackLink* L);
