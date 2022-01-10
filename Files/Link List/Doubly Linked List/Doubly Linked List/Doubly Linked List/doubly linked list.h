#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>


typedef int Listdatatype;

typedef struct ListNode
{
	Listdatatype data;
	struct ListNode* prev;
	struct ListNode* next;
}LN;

LN* CreateNewNode(Listdatatype x);
void printList(LN* phead);
void NodeInit1(LN** pphead);
LN* NodeInit2();
void ListPush_back(LN* phead, Listdatatype x);
void ListPop_back(LN* phead);
void ListPush_Front(LN* phead, Listdatatype x);
void ListPop_Front(LN* phead);
void ListInsert(LN* phead, Listdatatype x);





