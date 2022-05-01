#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 10

//顺序队列
typedef struct SqQueue
{
	char data[MaxSize];//用静态数组存放队列元素
	int front, rear;//队头指针，队尾指针
	int size;
}SqQueue;

enum 
{
	EXIT,
	EnQ,
	DeQ,
	MP
};
//操作选项
void Menu();
//初始化
void InitQueue(SqQueue *Q);
//入队
void EnQueue(SqQueue *Q);
//出队
void DeQueue(SqQueue* Q);
//打印队列
void My_Printf(SqQueue* Q);
