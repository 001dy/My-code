#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 10

//˳�����
typedef struct SqQueue
{
	char data[MaxSize];//�þ�̬�����Ŷ���Ԫ��
	int front, rear;//��ͷָ�룬��βָ��
	int size;
}SqQueue;

enum 
{
	EXIT,
	EnQ,
	DeQ,
	MP
};
//����ѡ��
void Menu();
//��ʼ��
void InitQueue(SqQueue *Q);
//���
void EnQueue(SqQueue *Q);
//����
void DeQueue(SqQueue* Q);
//��ӡ����
void My_Printf(SqQueue* Q);
