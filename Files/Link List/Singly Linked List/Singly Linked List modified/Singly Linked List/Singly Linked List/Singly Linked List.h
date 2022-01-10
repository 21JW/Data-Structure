#pragma once

#include<stdio.h>
#include<stdlib.h>


typedef int SListDatatype;

typedef struct SListNode
{
	SListDatatype data;
	struct SListNode* next;
}SListNode, SLNode;

void SinglyListPush_Back(SListNode* phead, SListDatatype x);
void SinglyListPop_Back(SListNode*phead);
void SinglyListPush_Front(SListNode* phead, SListDatatype x);
void SinglyListPop_Front(SListNode* phead);
void SinglyListPrint(const SListNode* phead);
SListNode* CreateSinglyListNode(SListDatatype x);
SListNode* FindSinglyListNode(SListNode* phead, SListDatatype x);
void ChangeSinglyListNode(SListNode* phead, SListDatatype x, SListDatatype y);
void SinglyListNodeInsert(SListNode* phead, SListDatatype x, SListDatatype y);
void SinglyListNodeDelete(SListNode* phead, SListDatatype x);
SListNode* InitSinglyListNode();