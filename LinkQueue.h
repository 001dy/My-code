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

//��ʽ����
typedef struct SqQueue
{
	LinkNode* front, *rear;//��ͷָ�룬��βָ��
	int size;
}LinkQueue;

enum 
{
	EXIT,
	ELQ,
	DLQ,
	GTLQ
};

//�����˵�
void Menu();
//��ʼ��(��ͷ���)
void InitLinkQueue(LinkQueue* Q);
//��ʼ��(����ͷ���)
void InitLinkQueue1(LinkQueue* Q);
//���
void EnLinkQueue(LinkQueue*Q);
//����
void DeLinkQueue(LinkQueue*Q);
//��ȡ��ͷԪ��
void GetTopLQ(LinkQueue* Q);