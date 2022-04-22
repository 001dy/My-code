#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 20

typedef struct LNode
{
	struct LNode* next;//ָ����һ���ڵ��ָ��
	char data[MAX_SIZE];//ÿ���ڵ��ŵ�һ������
}LNode,*LinkedList;//ͷ���ָ��

enum MyEnum
{
	EXIT,
	IN,
	INN,
	IPN,
	DEL,
	GETE,
	LOE,
	MOE,
	MPF,
};

//��ʼ��
LinkedList InitList();
//�����嵥
void Menu();
//��λ�����
void Insert(LinkedList L);
//������
void InsertNextNode(LinkedList L);
//ǰ�����
void InsertPriorNode(LinkedList L);
//��λ��ɾ�����
void DeleteList(LinkedList L);
//��λ����
void GetElem(LinkedList L);
//��ֵ����
void LocateElem(LinkedList L);
//������İ�λ���޸�
void ModifyElem(LinkedList L);
//��ӡ����
void My_printf(LinkedList L);



