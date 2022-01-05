#include"Single Link List.h"

int main()
{
	test01();
	return 0;
}

int test01()
{
	SListNode* pList = NULL;
	SingleListPush_Back(&pList, 1);
	SingleListPush_Back(&pList, 2);
	SingleListPush_Back(&pList, 3);
	SingleListPrint(&pList);
	return 0;
}