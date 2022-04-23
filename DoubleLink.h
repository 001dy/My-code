#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define  MAXSIZE 30

typedef struct DNode
{
	char data[MAXSIZE];
	struct DNode *prior, *next;
}DNode,*DLinklist;

enum 
{
	EXIT,
	INDN,
	DLEDN,
	SDN,
	MDN,
	MPF
};


//操纵菜单
void Menu();
//初始化
DLinklist InitDNode();
//共用操作
static DNode* CommonOperation(DLinklist L, int i);
//按位序插入
void InsertNextDNode(DLinklist L);
//按位序删除
void DeleteDNode(DLinklist L);
//按位序查找
void SearchDNode(DLinklist L);
//按位序修改
void ModifyDNode(DLinklist L);
//打印双链表
void My_Printf(DLinklist L);
