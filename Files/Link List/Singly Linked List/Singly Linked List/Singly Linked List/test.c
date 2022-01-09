#include"Singly Linked List.h"

int main()
{
	test01();
	//test02();
	//test03();
	//test05();
	//test06();
	//test07();
	return 0;
}

int test01()
/*test push_back and pop_back*/
{
	SListNode* pList = NULL;
	SinglyListPush_Back(&pList, 1);
	SinglyListPush_Back(&pList, 2);
	SinglyListPush_Back(&pList, 3);
	SinglyListPrint(&pList);
	SinglyListPop_Back(&pList);
	SinglyListPrint(&pList);
	SinglyListPop_Back(&pList);
	SinglyListPrint(&pList);
	SinglyListPop_Back(&pList);
	SinglyListPrint(&pList);
	SinglyListPop_Back(&pList);
	SinglyListPrint(&pList);
	SinglyListPush_Back(&pList, 10);
	SinglyListPrint(&pList);
	return 0;
}

int test02()
/*test push_Front and pop_Front*/
{
	SListNode* pList = NULL;
	SinglyListPush_Back(&pList, 1);
	SinglyListPush_Back(&pList, 2);
	SinglyListPush_Back(&pList, 3);
	SinglyListPrint(&pList);
	SinglyListPush_Front(&pList,6);
	SinglyListPrint(&pList);
	SinglyListPop_Front(&pList);
	SinglyListPrint(&pList);
	SinglyListPop_Front(&pList);
	SinglyListPrint(&pList);
	SinglyListPop_Front(&pList);
	SinglyListPrint(&pList);
	SinglyListPop_Front(&pList);
	SinglyListPrint(&pList);
	return 0;
}

int test03()
/*test find function*/
{
	SListNode* pList = NULL;
	/*SinglyListPush_Back(&pList, 1);
	SinglyListPush_Back(&pList, 2);
	SinglyListPush_Back(&pList, 3);
	SinglyListPrint(&pList);*/
	SListNode* find1= FindSinglyListNode(&pList, 3);
	printf("The address of the pointer:%p\n", &find1);
	return 0;
}

int test05()
/*test change function*/
{
	SListNode* pList = NULL;
	//SinglyListPush_Back(&pList, 1);
	//SinglyListPush_Back(&pList, 2);
	//SinglyListPush_Back(&pList, 3);
	//SinglyListPrint(&pList);
	ChangeSinglyListNode(&pList, 3, 6);
	SinglyListPrint(&pList);
	ChangeSinglyListNode(&pList, 8, 9);
	SinglyListPrint(&pList);
	return 0;
}

int test06()
/*test insert function*/
{
	SListNode* pList = NULL;
	SinglyListNodeInsert(&pList, 3, 6);
	SinglyListPrint(&pList);
	SinglyListPush_Back(&pList, 1);
	SinglyListPush_Back(&pList, 2);
	SinglyListPush_Back(&pList, 3);
	SinglyListPrint(&pList);
	SinglyListNodeInsert(&pList, 3, 6);
	SinglyListPrint(&pList);
	SinglyListNodeInsert(&pList, 10, 8);
	SinglyListPrint(&pList);
	SinglyListNodeInsert(&pList, 1, 8);
	SinglyListPrint(&pList);
	return 0;
}

int test07()
/*test delete function*/
{
	SListNode* pList = NULL;
	SinglyListNodeDelete(&pList, 1);
	SinglyListPush_Back(&pList, 1);
	SinglyListPrint(&pList);
	SinglyListNodeDelete(&pList, 8);
	SinglyListPrint(&pList);
	SinglyListNodeDelete(&pList, 1);
	SinglyListPrint(&pList);
	SinglyListPush_Back(&pList, 1);
	SinglyListPush_Back(&pList, 2);
	SinglyListPush_Back(&pList, 3);
	SinglyListPrint(&pList);
	SinglyListNodeDelete(&pList, 1);
	SinglyListPrint(&pList);
	SinglyListNodeDelete(&pList, 8);
	SinglyListNodeDelete(&pList, 3);
	SinglyListPrint(&pList);
	return 0;
}