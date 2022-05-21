#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 100

//双亲表示法（顺序存储）
typedef struct//树的结点的定义
{
	int data;//数据元素
	int parent;//双亲位置域
}PTNode;

typedef struct
{
	PTNode nodes[MAX_SIZE];
	int n;//结点数
}PTree;

//孩子表示法（顺序+链式存储）
struct CTNode
{
	int child;//孩子结点在数组中的位置
	struct CTNode *next;//下一个孩子
};

typedef struct
{
	int data;
	struct CTNode* firstChild;//第一个孩子
}CTBox;

typedef struct
{
	CTBox nodes[MAX_SIZE];
	int n, r;//节点数和根的位置
}CTree;

//孩子兄弟表示法（纯链式存储）
typedef struct CSNode
{
	int data;
	struct CSNode*firstchild, *nextsilbling;//第一个孩子和有兄弟的指针
}CSNode;


//初始化
void InitTree(PTree* T);
//增加
void AddEle(PTree* T);
//删除
void DeleteEle(PTree* T);


