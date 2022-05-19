#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


typedef struct ThreadNode
{
	int data;
	struct ThreadNode* lchild, *rchild;
	int ltag, rtag;
}ThreadNode;

//������
ThreadNode* GreatTree();

//��������
void PostOrder(ThreadNode* T);
//��������������
void visit_pos(ThreadNode* q);
//��������������ָ�������ǰ��
ThreadNode* PostPre(ThreadNode*p);

