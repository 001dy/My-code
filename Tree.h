#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 100

//˫�ױ�ʾ����˳��洢��
typedef struct//���Ľ��Ķ���
{
	int data;//����Ԫ��
	int parent;//˫��λ����
}PTNode;

typedef struct
{
	PTNode nodes[MAX_SIZE];
	int n;//�����
}PTree;

//���ӱ�ʾ����˳��+��ʽ�洢��
struct CTNode
{
	int child;//���ӽ���������е�λ��
	struct CTNode *next;//��һ������
};

typedef struct
{
	int data;
	struct CTNode* firstChild;//��һ������
}CTBox;

typedef struct
{
	CTBox nodes[MAX_SIZE];
	int n, r;//�ڵ����͸���λ��
}CTree;

//�����ֵܱ�ʾ��������ʽ�洢��
typedef struct CSNode
{
	int data;
	struct CSNode*firstchild, *nextsilbling;//��һ�����Ӻ����ֵܵ�ָ��
}CSNode;


//��ʼ��
void InitTree(PTree* T);
//����
void AddEle(PTree* T);
//ɾ��
void DeleteEle(PTree* T);


