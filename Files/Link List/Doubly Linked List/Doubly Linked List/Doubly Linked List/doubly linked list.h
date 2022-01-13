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
LN* NodeInit();
void ListPush_back(LN* phead, Listdatatype x);
void ListPop_back(LN* phead);
void ListPush_Front(LN* phead, Listdatatype x);
void ListPop_Front(LN* phead);
void ListChange(LN* phead,Listdatatype x, Listdatatype y);
void ListInsert(LN* phead,int x,Listdatatype y);
void ListDelete1(LN* phead, Listdatatype x);
//this function deletes all the nodes with value x;

void ListDelete2(LN* phead, int x);
//this function deletes the xth node;








