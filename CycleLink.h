#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 30

typedef struct CLink
{
	char data[MAXSIZE];
	struct CLink *next;
}CLink,*CLinklist;

enum
{
	EXIT,
	ICL,
	DECL,
	MCL,
	SCL,
	MPF
};

//操作选项
void Menu();
//初始化一个循环单链表
CLinklist InitCLink();
//共用操作
static CLink* CommonOpera(CLinklist L,int i);
//按位序插入
void InsertCLink(CLinklist L);
//按位序删除
void DeleteCLink(CLinklist L);
//按位序修改
void ModifyCLink(CLinklist L);
//按位序查找
void SerachCLink(CLinklist L);
//打印循环单链表
void My_printf(CLinklist L);

