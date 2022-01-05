#include"Single Link List.h"

void SingleListPrint(const SListNode** pheadprint)
{
	SListNode**cur=pheadprint;
	while ((*cur) != NULL)
	{
		printf("%d->", (*cur)->data);
		(*cur) = (*cur)->next;
	}
	printf("\n");
}

SListNode* CreateSingleListNode(SListDatatype x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SLNode));
	if (newNode == NULL)
	{
		printf("Fail to allocate a new node.\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void SingleListPush_Back(SListNode** pphead, SListDatatype x)
{
	SListNode* newNode=CreateSingleListNode(x);
	if (*pphead == NULL)
	/*it means pList is empty and thus it is the tail of this linklist.*/
	/*Because it is empty, we can not set the next address is NULL 0x0000*/
    /*We have to give the first node address to the link list*/
	{
		*pphead = newNode;
	}
	else
	/*push_back needs to find out the tails of the link list*/
	{
		SListNode* tail = *pphead;
		/*set up a pointer to find out the tail*/ 
		while ((tail->next)!= NULL)
		{
			tail = tail->next;
		}
		tail->next=newNode;
		/*Linklist has at least 1 element. Let the tail points to the new node. */
	}
}