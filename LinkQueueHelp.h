#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include"TwoBranchTree.h"

//��������
typedef struct
{
	BiTNode* data;
	struct LinkNode* next;
}LinkNode;
typedef struct
{
	LinkNode *front, *rear;
}LinkQueue;

//��ʼ��
void InitLQ(LinkQueue* Q);
//����
void PushLQ(LinkQueue*Q, BiTNode*T);
//����
void PopLQ(LinkQueue*Q, BiTNode *P);
//�п�
int IsEmpty(LinkQueue* Q);