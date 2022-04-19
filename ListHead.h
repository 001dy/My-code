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
//	Book B[MAXSIZE];//存放信息的数组
//	int length;//记录当前信息的长度
//}Sqlist;
typedef struct
{
	Book* B;
	int length;
	int capacity;
}Sqlist;

//声明函数

//功能菜单
void Menu();
//初始化
void InitList(Sqlist* L);
//增加信息
void AddElem(Sqlist* L);
//查看信息
void Show(const Sqlist* L);
//删除信息
void DeleteElem(Sqlist* L);
//查找信息
void SerachBook(const Sqlist *L);
//修改信息
void Modify(Sqlist *L);


