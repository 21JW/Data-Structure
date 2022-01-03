#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType *a;
	int size;
	int capacity;
}SL;SeqList;

void SeqListInit(SL *ps);
void SeqListPushBack(struct SeqList* ps, SLDataType x);
void SeqListPopBack(struct SeqList* ps);
void SeqListPushFront(struct SeqList* ps, SLDataType x);
void SeqListPopFront(struct SeqList* ps);
void SeqListInsert(struct SeqList* ps, int pos, SLDataType x);
void SeqListErase(struct SeqList* ps, int pos);
void SeqListDestroy(SL* ps);
void SeqListCheckCapacity(SL* ps);

