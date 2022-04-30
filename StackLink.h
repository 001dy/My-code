#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 10

//��ջ��ʵ�֣�ֻ��ͷ�壩
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

//�����˵�
void Menu();
//��ʼ����ջ
StackLink* InitSL();
//ѹջ
void PushSL(StackLink* L);
//��ջ
void PopSL(StackLink* L);
//ɾ��ջ��Ԫ��
void DeleteSL(StackLink* L);
//�޸�Ԫ��
void ModifySL(StackLink* L);
//����Ԫ��
void SerachSL(StackLink* L);
//��ȡջ��Ԫ��
void GetTop(StackLink* L);
