#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



//线索二叉树
typedef struct ThreadNode
{
	int data;
	struct ThreadNode *lchild, *rchild;
	int ltag, rtag;//tag为1时，表示指针是线索，为0时表示指向孩子
}ThreadNode;

//前序创建二叉树
ThreadNode* GreatTree();
//中序线索化
void InThread(ThreadNode*T);