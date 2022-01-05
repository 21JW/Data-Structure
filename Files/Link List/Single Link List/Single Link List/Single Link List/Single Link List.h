#pragma once

#include<stdio.h>
#include<stdlib.h>


typedef int SListDatatype;

typedef struct SListNode
{
	SListDatatype data;
	struct SListNode* next;
}SListNode;SLNode;

void SingleListPush_Back(SListNode** pphead, SListDatatype x);
void SingleListPop_Back(SListNode** pphead);
void SingleListPush_Front(SListNode** pphead, SListDatatype x);
void SingleListPop_Front(SListNode** pphead);
void SingleListPrint(SListNode** pphead);
SListNode* CreateSingleListNode(SListDatatype x);




