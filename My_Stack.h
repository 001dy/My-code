#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 10

//˳��ջ��ʵ��
typedef struct
{
	char data[MaxSize];
	int top;   //ջ��ָ��
}SqStack;

enum
{
	EXIT,
	Pus,
	Po,
	Del,
	Mod,
	GT
};
//�����˵�
void Menu();
//��ʼ��ջ
void InitStack(SqStack *S);
//��ջ����
void Push(SqStack *S);
//��ջ����
char* Pop(SqStack *S,char* c);
//��ջ��Ԫ��
char* GetTop(SqStack *S,char* c);
//ɾ������
void Delete(SqStack *S);
//�޸Ĳ���
void Modify(SqStack *S);
