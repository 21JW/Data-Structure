#include"Singly Linked List.h"

void SinglyListPrint(SListNode** pheadprint)
{
	SListNode*cur=*pheadprint;
	if (cur == NULL)
	{
		printf("NULL\n");
	}
	while (cur!= NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

SListNode* CreateSinglyListNode(SListDatatype x)
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


void SinglyListPush_Back(SListNode** pphead, SListDatatype x)
{
	SListNode* newNode=CreateSinglyListNode(x);
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

void SinglyListPop_Back(SListNode** pphead)
{
	if ((*pphead) == NULL)
	/*	the first case: it is an empty List.*/
	{
		return;
	}
	else if ((*pphead)->next == NULL)
		/*	the second case: only one element.*/
	{
		/*free(*pphead);*/
		*pphead = NULL;
	}
	else
	{
		SListNode* pre = (*pphead);
		while (((pre->next)->next) != NULL)
		{
			pre = pre->next;
		}
		SListNode* tail = pre->next;
		pre->next = NULL;
	/*	printf("%d\n", tail->data);*/
	/*	free(tail);*/
	}
}

void SinglyListPush_Front(SListNode** pphead, SListDatatype x)
{
	SListNode* newNode = CreateSinglyListNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}

void SinglyListPop_Front(SListNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next==NULL)
	{
		/*free(*pphead);*/
		*pphead = NULL;
	}
	else
	{
		SListNode* head = *pphead;
		*pphead = (*pphead)->next;
		head->next = NULL;
		/*free(head);*/
	}
}
