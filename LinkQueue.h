#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 10

typedef struct
{
	char data[MaxSize];
	struct LinkNode* next;
}LinkNode;

//链式队列
typedef struct SqQueue
{
	LinkNode* front, *rear;//队头指针，队尾指针
	int size;
}LinkQueue;

enum 
{
	EXIT,
	ELQ,
	DLQ,
	GTLQ
};

//操作菜单
void Menu();
//初始化(带头结点)
void InitLinkQueue(LinkQueue* Q);
//初始化(不带头结点)
void InitLinkQueue1(LinkQueue* Q);
//入队
void EnLinkQueue(LinkQueue*Q);
//出队
void DeLinkQueue(LinkQueue*Q);
//读取对头元素
void GetTopLQ(LinkQueue* Q);