#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 20

typedef struct LNode
{
	struct LNode* next;//指向下一个节点的指针
	char data[MAX_SIZE];//每个节点存放的一个数据
}LNode,*LinkedList;//头结点指针

enum MyEnum
{
	EXIT,
	IN,
	INN,
	IPN,
	DEL,
	GETE,
	LOE,
	MOE,
	MPF,
};

//初始化
LinkedList InitList();
//操作清单
void Menu();
//按位序操作
void Insert(LinkedList L);
//后插操作
void InsertNextNode(LinkedList L);
//前插操作
void InsertPriorNode(LinkedList L);
//按位序删除结点
void DeleteList(LinkedList L);
//按位查找
void GetElem(LinkedList L);
//按值查找
void LocateElem(LinkedList L);
//单链表的按位序修改
void ModifyElem(LinkedList L);
//打印链表
void My_printf(LinkedList L);



