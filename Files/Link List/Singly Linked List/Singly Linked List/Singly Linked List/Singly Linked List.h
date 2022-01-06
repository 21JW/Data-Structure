#pragma once

#include<stdio.h>
#include<stdlib.h>


typedef int SListDatatype;

typedef struct SListNode
{
	SListDatatype data;
	struct SListNode* next;
}SListNode;SLNode;

void SinglyListPush_Back(SListNode** pphead, SListDatatype x);
void SinglyListPop_Back(SListNode** pphead);
void SinglyListPush_Front(SListNode** pphead, SListDatatype x);
void SinglyListPop_Front(SListNode** pphead);
void SinglyListPrint(const SListNode** pphead);
SListNode* CreateSinglyListNode(SListDatatype x);
SListNode* FindSinglyListNode(SListDatatype x);




