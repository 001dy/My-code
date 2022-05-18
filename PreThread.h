#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

typedef struct PreThread
{
	int data;
	struct PreThread* lchild, *rchild;
	int ltag, rtag;
}PreThread;

//���򴴽�������
PreThread* GreatTree();
//�������������
void Prethread(PreThread*T);
//����������������
void visit_Pre(PreThread*T);
//��������������
void PreOrder(PreThread*T);