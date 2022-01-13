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


LN* NodeInit()
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

void ListChange(LN* phead, Listdatatype x, Listdatatype y)
//change the node with value x into y
{
	LN* find = phead->next;
	while (find != phead)
	{
		if ((find->data) == x)
		{
			find->data = y;
		}
		find = find->next;
	}
}

void ListInsert(LN* phead,int x, Listdatatype y)
//x means the xth node of the list
//insert a node with value y before the xth node
{
	LN* newNode = CreateNewNode(y);
	LN* find = phead;
	while (x - 1)
	{
		find = find->next;
		x--;
	}
	LN* firstNode = find;
	LN* secondNode = find->next;
	firstNode->next = newNode;
	newNode->next = secondNode;
	secondNode->prev = newNode;
	newNode->prev = firstNode;
}


void ListDelete1(LN* phead, Listdatatype x)
//this function deletes all the nodes with value x;

{
	if (phead->next == phead)
	{
		printf("Error:It is an empty list.Cannot delete a node.\n");
	}
	else
	{
		int signal = 0;
		/* signal is used to judge whether we have deleted a node*/
		LN* find = phead->next;
		while (find != phead)
		{
			if ((find->data) == x)
			{
				signal = 1;
				LN* prevNode = find->prev;
				LN* nextNode = find->next;
				LN* deleteNode = find;
				find = nextNode;
				deleteNode->next = NULL;
				deleteNode->prev = NULL;
				free(deleteNode);
				prevNode->next = nextNode;
				nextNode->prev = prevNode;
				continue;
			}
			else
			{
				find = find->next;
			}
		}
		if (find == phead && signal == 0)
		{
			printf("Error: data does not exist.\n");
		}
	}
}

void ListDelete2(LN* phead, int x)
//this function deletes the xth node;
{
	LN* find = phead;
	while (x)
	{
		find = find->next;
		x--;
	}
	LN* deleteNode = find;
	LN* prevNode = find->prev;
	LN* nextNode = find->next;
	if (phead->next == phead)
	{
		printf("Error: It is an empty List.Cannot delete a node.\n");
	}
	else if (find == phead)
	{
		printf("Error:Cannot delete the head node.\n");
	}
	else
	{
		deleteNode->next = NULL;
		deleteNode->prev = NULL;
		free(deleteNode);
		prevNode->next = nextNode;
		nextNode->prev = prevNode;
	}
}



