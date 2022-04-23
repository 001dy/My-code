#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define  MAXSIZE 30

typedef struct DNode
{
	char data[MAXSIZE];
	struct DNode *prior, *next;
}DNode,*DLinklist;

enum 
{
	EXIT,
	INDN,
	DLEDN,
	SDN,
	MDN,
	MPF
};


//���ݲ˵�
void Menu();
//��ʼ��
DLinklist InitDNode();
//���ò���
static DNode* CommonOperation(DLinklist L, int i);
//��λ�����
void InsertNextDNode(DLinklist L);
//��λ��ɾ��
void DeleteDNode(DLinklist L);
//��λ�����
void SearchDNode(DLinklist L);
//��λ���޸�
void ModifyDNode(DLinklist L);
//��ӡ˫����
void My_Printf(DLinklist L);
