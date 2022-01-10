#include "doubly linked list.h"

LN* CreateNewNode(Listdatatype x) 
{
	LN* Node=(LN*)malloc(sizeof(LN));
	if (Node == NULL)
	{
		printf("Fail to allocate a new node!\n");
		exit(-1);
	}
	Node->prev = NULL;
	Node->next = NULL;
	Node->data = x;
	return Node;
}

void printList(LN* phead)
{
	assert(phead);
	int signal = 0;
	/*judge whether it is an empty list*/
	LN* cur = phead->next;
	while (cur != phead)
	{
		signal = 1;
		printf("%d->", cur->data);
		cur = cur->next;
	}
	if (signal == 0)
	{
		printf("NULL");
	}
	printf("\n");
}

void NodeInit1(LN** pphead)
{
	*pphead=CreateNewNode(0);
	(*pphead)->next = *pphead;
	(*pphead)->prev = *pphead;
}

LN* NodeInit2()
{
	LN* phead = CreateNewNode(0);
	phead->next = phead;
	phead->prev = phead;
}

void ListPush_back(LN* phead, Listdatatype x)
{
	LN*tail=phead->prev;
	LN* newNode = CreateNewNode(x);
	tail->next = newNode;
	newNode->prev = tail;
	phead->prev = newNode;
	newNode->next = phead;
}

void ListPop_back(LN* phead)
{
	if (phead->next == phead)
	{
		printf("Error:It is an empty list. Pop_back is not allowed.\n");
	}
	else
	{
		LN* tail = phead->prev->prev;
		LN* delete_node = phead->prev;
		tail->next = phead;
		phead->prev = tail;
		delete_node->prev = NULL;
		delete_node->next = NULL;
		free(delete_node);
	}
}

void ListPush_Front(LN* phead, Listdatatype x)
{
	LN*newNode=CreateNewNode(x);
	LN* first_node = phead->next;
	phead->next = newNode;
	newNode->prev = phead;
	newNode->next = first_node;
	first_node->prev = newNode;
}

void ListPop_Front(LN* phead)
{
	if (phead->next == phead)
	{
		printf("Error:It is an empty list. Pop_front is not allowed.\n");
	}
	else
	{
		LN* first_node = phead->next;
		LN* second_node = phead->next->next;
		phead->next = second_node;
		second_node->prev = phead;
		first_node->next = NULL;
		first_node->prev = NULL;
		free(first_node);
	}
}

void ListInsert(LN* phead, Listdatatype x)
{
	;
}






