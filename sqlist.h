//ͷ�ļ�����
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#pragma once

#define Max_size 10
typedef int Elemtype;

typedef struct SeqList {
	Elemtype* a;	//ָ��̬���ٵ�����
	int size;		//��Ч���ݸ���
	int capacity;	//�����ռ��С
}SL;

//��ʼ��
void SeqListInit(SL* ps);
//��ӡ
void SeqListPrint(SL* ps);
//ͷ��ͷɾ
void SeqListPushFront(SL* ps, Elemtype x);
void SeqListPopFront(SL* ps);
//β��βɾ
void SeqListPushBack(SL* ps, Elemtype x);
void SeqListPopBack(SL* ps);
//ָ��λ�õĲ�����ɾ��
void SeqListInsert(SL* ps, Elemtype x, int pos);
void SeqListErase(SL* ps, int pos);
