#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include"TwoBranchTree.h"

//辅助队列
typedef struct
{
	BiTNode* data;
	struct LinkNode* next;
}LinkNode;
typedef struct
{
	LinkNode *front, *rear;
}LinkQueue;

//初始化
void InitLQ(LinkQueue* Q);
//入列
void PushLQ(LinkQueue*Q, BiTNode*T);
//出列
void PopLQ(LinkQueue*Q, BiTNode *P);
//判空
int IsEmpty(LinkQueue* Q);