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


//��ʼ����̬����
void InitStateL(StateL adrr[SIZE]);
//��λ�����
void InsertStateL(StateL adrr[SIZE]);
//��ӡ
void My_printf(StateL adrr[SIZE]);