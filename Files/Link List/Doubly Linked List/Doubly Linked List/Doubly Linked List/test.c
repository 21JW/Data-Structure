#include "doubly linked list.h"

void test01()
//test push_back and pop_back
{
	LN* phead = NodeInit2();
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
	LN* phead = NodeInit2();
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

int main()
{
	//test01();
	test02();
	return 0;
}