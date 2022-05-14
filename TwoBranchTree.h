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

//前序遍历创建树
BiTNode* GreatTree();
//访问结点
void visit(BiTNode* T);
//先序遍历
void PreOrder(BiTNode* T);
//中序遍历
void InOrder(BiTNode* T);
//后序遍历
void PostOrder(BiTNode* T);
