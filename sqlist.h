//头文件引用
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#pragma once

#define Max_size 10
typedef int Elemtype;

typedef struct SeqList {
	Elemtype* a;	//指向动态开辟的数组
	int size;		//有效数据个数
	int capacity;	//容量空间大小
}SL;

//初始化
void SeqListInit(SL* ps);
//打印
void SeqListPrint(SL* ps);
//头插头删
void SeqListPushFront(SL* ps, Elemtype x);
void SeqListPopFront(SL* ps);
//尾插尾删
void SeqListPushBack(SL* ps, Elemtype x);
void SeqListPopBack(SL* ps);
//指定位置的插入与删除
void SeqListInsert(SL* ps, Elemtype x, int pos);
void SeqListErase(SL* ps, int pos);
