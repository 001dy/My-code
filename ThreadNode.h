#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



//����������
typedef struct ThreadNode
{
	int data;
	struct ThreadNode *lchild, *rchild;
	int ltag, rtag;//tagΪ1ʱ����ʾָ����������Ϊ0ʱ��ʾָ����
}ThreadNode;

//ǰ�򴴽�������
ThreadNode* GreatTree();
//����������
void InThread(ThreadNode*T);