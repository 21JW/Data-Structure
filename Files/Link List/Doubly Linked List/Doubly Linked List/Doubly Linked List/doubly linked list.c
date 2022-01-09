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
	LN* cur = phead->next;
	while (cur != phead)
	{
		printf("%d-> ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void NodeInit(LN** pphead)
{
	*pphead=CreateNewNode(0);
	(*pphead)->next = *pphead;
	(*pphead)->prev = *pphead;
}


