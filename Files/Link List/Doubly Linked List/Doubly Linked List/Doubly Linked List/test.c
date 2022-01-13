#include "doubly linked list.h"

void test01()
//test push_back and pop_back
{
	LN* phead = NodeInit();
	ListPush_back(phead, 1);
	ListPush_back(phead, 2);
	ListPush_back(phead, 3);
    printList(phead);
	ListPop_back(phead);
	printList(phead);
	ListPop_back(phead);
	printList(phead);
	ListPop_back(phead);
	printList(phead);
	ListPop_back(phead);
	printList(phead);
}

void test02()
//test push_front and pop_back
{
	LN* phead = NodeInit();
	ListPush_Front(phead, 1);
	ListPush_Front(phead, 2);
	ListPush_Front(phead, 3);
	printList(phead);
	ListPop_Front(phead);
	printList(phead);
	ListPop_Front(phead);
	printList(phead);
	ListPop_Front(phead);
	printList(phead);
	ListPop_Front(phead);
	printList(phead);
}

void test03()
//test change function
{
	LN* phead = NodeInit();
	ListPush_Front(phead, 3);
	ListPush_Front(phead, 2);
	ListPush_Front(phead, 3);
	ListPush_Front(phead, 6);
	ListPush_Front(phead, 3);
	ListPush_Front(phead, 3);
	printList(phead);
	ListChange(phead,3,8);
	printList(phead);
}

void test05()
//test insert function
{
	LN* phead = NodeInit();
	ListPush_Front(phead, 1);
	ListPush_Front(phead, 2);
	ListPush_Front(phead, 3);
	ListPush_Front(phead, 6);
	ListPush_Front(phead, 3);
	ListPush_Front(phead, 8);
	printList(phead);
	ListInsert(phead,1,10);
	printList(phead);
	ListInsert(phead,7,20);
	printList(phead);
}

void test06()
//test deleteNode function
{
	LN* phead = NodeInit();
	ListPush_Front(phead, 3);
	ListPush_Front(phead, 2);
	ListPush_Front(phead, 3);
	ListPush_Front(phead, 6);
	ListPush_Front(phead, 3);
	ListPush_Front(phead, 3);
	printList(phead);
	ListDelete1(phead, 3);
	printList(phead);
	ListDelete1(phead, 7);
	printList(phead);
	ListPush_Front(phead, 3);
	ListPush_Front(phead, 2);
	ListPush_Front(phead, 3);
	ListPush_Front(phead, 8);
	printList(phead);
	ListDelete2(phead, 1);
	printList(phead);
	ListDelete2(phead, 5);
	printList(phead);
	ListDelete2(phead,0);
}

int main()
{
	//test01();
	/*test02();*/
	/*test03();*/
	/*test05();*/
	test06();
	return 0;
}