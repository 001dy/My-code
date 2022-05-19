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

//创建树
ThreadNode* GreatTree();

//后续遍历
void PostOrder(ThreadNode* T);
//后续遍历线索化
void visit_pos(ThreadNode* q);
//后续线索二叉树指定结点找前序
ThreadNode* PostPre(ThreadNode*p);

