#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 30

typedef struct CLink
{
	char data[MAXSIZE];
	struct CLink *next;
}CLink,*CLinklist;

enum
{
	EXIT,
	ICL,
	DECL,
	MCL,
	SCL,
	MPF
};

//����ѡ��
void Menu();
//��ʼ��һ��ѭ��������
CLinklist InitCLink();
//���ò���
static CLink* CommonOpera(CLinklist L,int i);
//��λ�����
void InsertCLink(CLinklist L);
//��λ��ɾ��
void DeleteCLink(CLinklist L);
//��λ���޸�
void ModifyCLink(CLinklist L);
//��λ�����
void SerachCLink(CLinklist L);
//��ӡѭ��������
void My_printf(CLinklist L);

