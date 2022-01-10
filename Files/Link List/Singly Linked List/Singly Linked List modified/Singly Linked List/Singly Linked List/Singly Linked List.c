#include"Singly Linked List.h"

void SinglyListPrint(SListNode* pheadprint)
{
	SListNode* cur = pheadprint->next;
	if (cur == NULL)
	{
		printf("NULL\n");
	}
	while (cur != NULL)
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

SListNode* InitSinglyListNode()
{
	SListNode* phead = CreateSinglyListNode(0);
}


void SinglyListPush_Back(SListNode* phead, SListDatatype x)
{
	SListNode* newNode = CreateSinglyListNode(x);
	if (phead->next == NULL)
		/*it means pList is empty and thus it is the tail of this linklist.*/
		/*Because it is empty, we can not set the next address is NULL 0x0000*/
		/*We have to give the first node address to the link list*/
	{
		phead->next = newNode;
	}
	else
		/*push_back needs to find out the tails of the link list*/
	{
		SListNode* tail = phead->next;
		/*set up a pointer to find out the tail*/
		while ((tail->next) != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
		/*Linklist has at least 1 element. Let the tail points to the new node. */
	}
}

void SinglyListPop_Back(SListNode* phead)
{
	if ((phead->next) == NULL)
	/*	the first case: it is an empty List.*/
	{
		printf("Error:It is an empty List.\n");
		return;
	}
	else if ((phead->next->next) == NULL)
	/*	the second case: only one element.*/
	{
		phead->next = NULL;
		free(phead->next);
	}
	else
	/*	the third case: more than one element.*/
	{
		SListNode* prev = phead->next;
		SListNode* tail = phead->next->next;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		prev->next = NULL;
		free(tail);
	}
}

void SinglyListPush_Front(SListNode* phead, SListDatatype x)
{
	SListNode* newNode = CreateSinglyListNode(x);
	if (phead->next == NULL)
	{
		phead->next = newNode;
	}
	else 
	{
		SListNode* firstNode = phead->next;
		phead->next = newNode;
		newNode->next = firstNode;
	}
}

void SinglyListPop_Front(SListNode* phead)
{
	if ((phead->next) == NULL)
	/*case1: an empty list*/
	{
		printf("Error:It is an empty List.Pop_front is not allowed.\n");
		return;
	}
	else if ((phead)->next == NULL)
	{
	/*case2: with only one element*/
		SListNode* firstNode = phead->next;
		phead->next = NULL;
		free(firstNode);
	}
	else
	{
		/*case3: with more than 1 element*/
		SListNode* firstNode = phead->next;
		SListNode* secondNode = phead->next->next;
		phead->next = secondNode;
		firstNode->next = NULL;
		free(firstNode);
	}
}

SListNode* FindSinglyListNode(SListNode* phead, SListDatatype x)
{
	SListNode* find = phead->next;
	while (find != NULL)
	{
		if (find->data == x)
		{
			return find;
		}
		else
		{
			find = find->next;
		}
	}
	if (find == NULL)
	{
		printf("Error: data does not exist!\n");
	}
	return NULL;
}

void ChangeSinglyListNode(SListNode* phead, SListDatatype x, SListDatatype y)
{
	int signal = 0;
	/*judge whether a node has changed*/
	SListNode* find = phead->next;
	while (find != NULL)
	{
		if (find->data == x)
		{
			signal = 1;
			find->data = y;
		}
		find = find->next;
	}
	if (find == NULL&&signal==0)
	{
		printf("Error:data does not exist!\n");
	}
}

void SinglyListNodeInsert(SListNode* phead, SListDatatype x, SListDatatype y)
{
	SListNode* newNode = CreateSinglyListNode(y);
	SListNode* find = phead->next;
	if (find == NULL)
	{
		printf("Error:An empty List! Data does not exist!\n");
	}
	else
	{
		while (find != NULL)
		{
			if (find->data == x)
			{
				newNode->next = find->next;
				find->next = newNode;
				break;
			}
			else
			{
				find = find->next;
			}
		}
		if (find == NULL)
		{
			printf("Error:data does not exist!\n");
		}
	}
}

void SinglyListNodeDelete(SListNode* phead, SListDatatype x)
{
	int signal = 0;
	if ((phead->next) == NULL)
		/*case1:an empty list*/
	{
		printf("Error:An empty List.Cannot delete a node.\n");
	}
	else if ((phead->next)->data == x)
		/*case2:the first Node is the target*/
	{
		SListNode* firstNode = phead->next;
		phead->next=NULL;
		free(firstNode);
	}
	else if (((phead->next)->data != x) && ((phead->next)->next == NULL))
		/*case3:there is only one node but it is not the target*/
	{
		printf("Error:data does not exist!\n");
	}
	else
		/*case4:more than 2 elements*/
	{
		SListNode* find = phead->next;
		while ((find->next) != NULL)
		{
			if (((find->next)->data) == x)
		/*case4.1:more than 2 elements and find the data
		  find is the node that before the node we want to delete */
			{
				SListNode* deleteNode= find->next;
				find->next = find->next->next;
				deleteNode->next = NULL;
				signal = 1;
				free(deleteNode);
			}
			find = find->next;
		}
		if (((find->next)==NULL) && (signal == 0))
		{
			printf("Error:data does not exist!\n");
		}
	}
}