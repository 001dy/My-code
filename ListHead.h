#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<malloc.h>
#define MAXSIZE 10
#define MAX_NAME 30
#define MAX_ID 20
#define DEFAULT_SZ 3

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	SHOW,
	MODIFY
};

typedef struct
{
	char id[MAX_NAME];
	char name[MAX_ID];
	float price;
}Book;

//typedef struct
//{
//	Book B[MAXSIZE];//�����Ϣ������
//	int length;//��¼��ǰ��Ϣ�ĳ���
//}Sqlist;
typedef struct
{
	Book* B;
	int length;
	int capacity;
}Sqlist;

//��������

//���ܲ˵�
void Menu();
//��ʼ��
void InitList(Sqlist* L);
//������Ϣ
void AddElem(Sqlist* L);
//�鿴��Ϣ
void Show(const Sqlist* L);
//ɾ����Ϣ
void DeleteElem(Sqlist* L);
//������Ϣ
void SerachBook(const Sqlist *L);
//�޸���Ϣ
void Modify(Sqlist *L);


