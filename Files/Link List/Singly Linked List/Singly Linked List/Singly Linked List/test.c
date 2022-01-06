#include"Singly Linked List.h"

int main()
{
	/*test01();*/
	test02();
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

