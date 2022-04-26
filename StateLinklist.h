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


//初始化静态链表
void InitStateL(StateL adrr[SIZE]);
//按位序插入
void InsertStateL(StateL adrr[SIZE]);
//打印
void My_printf(StateL adrr[SIZE]);