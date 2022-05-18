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

//先序创建二叉树
PreThread* GreatTree();
//二叉树先序遍历
void Prethread(PreThread*T);
//二叉树先序线索化
void visit_Pre(PreThread*T);
//先序线索化遍历
void PreOrder(PreThread*T);