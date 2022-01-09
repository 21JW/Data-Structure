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
void NodeInit(LN** pphead);





