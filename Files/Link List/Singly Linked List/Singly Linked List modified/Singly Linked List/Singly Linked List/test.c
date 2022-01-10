#include"Singly Linked List.h"

int main()
{
	/*test01();*/
	/*test02();*/
	/*test03();*/
	/*test05();*/
	/*test06();*/
	test07();
	return 0;
}

int test01()
/*test push_back and pop_back*/
{
	SListNode* phead = InitSinglyListNode();
	SinglyListPush_Back(phead, 1);
	SinglyListPush_Back(phead, 2);
	SinglyListPush_Back(phead, 3);
	SinglyListPrint(phead);
	SinglyListPop_Back(phead);
	SinglyListPrint(phead);
	SinglyListPop_Back(phead);
	SinglyListPrint(phead);
	SinglyListPop_Back(phead);
	SinglyListPrint(phead);
	SinglyListPop_Back(phead);
	SinglyListPrint(phead);
	SinglyListPush_Back(phead, 6);
	SinglyListPrint(phead);
	return 0;
}

int test02()
/*test push_Front and pop_Front*/
{
	SListNode* phead = InitSinglyListNode();
	SinglyListPush_Back(phead, 1);
	SinglyListPush_Back(phead, 2);
	SinglyListPush_Back(phead, 3);
	SinglyListPrint(phead);
	SinglyListPush_Front(phead, 6);
	SinglyListPrint(phead);
	SinglyListPop_Front(phead);
	SinglyListPrint(phead);
	SinglyListPop_Front(phead);
	SinglyListPrint(phead);
	SinglyListPop_Front(phead);
	SinglyListPrint(phead);
	SinglyListPop_Front(phead);
	SinglyListPrint(phead);
	SinglyListPop_Front(phead);
	SinglyListPrint(phead);
	return 0;
}

int test03()
/*test find function*/
{
	SListNode* phead = InitSinglyListNode();
	SinglyListPush_Back(phead, 1);
	SinglyListPush_Back(phead, 2);
	SinglyListPush_Back(phead, 3);
	SinglyListPrint(phead);
	SListNode* find1 = FindSinglyListNode(phead, 3);
	printf("The address of the pointer:%p\n", &find1);
	return 0;
}

int test05()
/*test change function*/
{
	SListNode* phead = InitSinglyListNode();
	SinglyListPush_Back(phead, 1);
	SinglyListPush_Back(phead, 2);
	SinglyListPush_Back(phead, 3);
	SinglyListPush_Back(phead, 8);
	SinglyListPush_Back(phead, 3);
	SinglyListPush_Back(phead, 3);
	SinglyListPrint(phead);
	ChangeSinglyListNode(phead, 3, 6);
	SinglyListPrint(phead);
	ChangeSinglyListNode(phead, 10, 9);
	SinglyListPrint(phead);
	return 0;
}

int test06()
/*test insert function*/
{
	SListNode* phead = InitSinglyListNode();
	SinglyListNodeInsert(phead, 3, 6);
	SinglyListPrint(phead);
	SinglyListPush_Back(phead, 1);
	SinglyListPush_Back(phead, 2);
	SinglyListPush_Back(phead, 3);
	SinglyListPrint(phead);
	SinglyListNodeInsert(phead, 3, 6);
	SinglyListPrint(phead);
	SinglyListNodeInsert(phead, 10, 8);
	SinglyListPrint(phead);
	SinglyListNodeInsert(phead, 1, 8);
	SinglyListPrint(phead);
	return 0;
}

int test07()
/*test delete function*/
{
	SListNode* phead = InitSinglyListNode();
	SinglyListNodeDelete(phead, 1);
	SinglyListPush_Back(phead, 1);
	SinglyListPrint(phead);
	SinglyListNodeDelete(phead, 8);
	SinglyListPrint(phead);
	SinglyListNodeDelete(phead, 1);
	SinglyListPrint(phead);
	SinglyListPush_Back(phead, 1);
	SinglyListPush_Back(phead, 2);
	SinglyListPush_Back(phead, 3);
	SinglyListPrint(phead);
	SinglyListNodeDelete(phead, 1);
	SinglyListPrint(phead);
	SinglyListNodeDelete(phead, 8);
	SinglyListNodeDelete(phead, 3);
	SinglyListPrint(phead);
	return 0;
}

