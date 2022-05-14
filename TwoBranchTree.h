#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct BiTNode
{
	int data;
	struct BiTNode *lchild,*rchild;
}BiTNode;

//ǰ�����������
BiTNode* GreatTree();
//���ʽ��
void visit(BiTNode* T);
//�������
void PreOrder(BiTNode* T);
//�������
void InOrder(BiTNode* T);
//�������
void PostOrder(BiTNode* T);
