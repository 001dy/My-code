#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 30
#define SIZE 10

typedef struct StateLinklist
{
	char data[MAXSIZE];
	int cur;
}StateL;

enum
{
	EXIT,
	ISL,
	DSL,
	MSL,
	SSL,
	MPF
};
//����ѡ��
void Menu();
//��ʼ����̬����
void InitStateL(StateL adrr[SIZE]);
//��λ�����
void InsertStateL(StateL adrr[SIZE]);
//��λ��ɾ��
void DeleteStateL(StateL adrr[SIZE]);
//��λ�����
void SerachStateL(StateL adrr[SIZE]);
//��λ���޸�
void ModifyStateL(StateL adrr[SIZE]);
//��ӡ
void My_printf(StateL adrr[SIZE]);