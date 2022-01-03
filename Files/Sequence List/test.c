#include"SeqList.h"

void TestSeqList1()
{
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 7);
	SeqListPushBack(&s, 8);
	SeqListPushBack(&s, 9);
	SeqListPrint(&s);
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);
	SeqListPushFront(&s, 10);
	SeqListPushFront(&s, 11);
	SeqListPushFront(&s, 12);
	SeqListPrint(&s);
	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
	SeqListInsert(&s,8,33);
	SeqListPrint(&s);
	SeqListInsert(&s,-2,88);
	SeqListPrint(&s);
	SeqListInsert(&s,2, 88);
	SeqListPrint(&s);
	SeqListErase(&s, 2);
	SeqListPrint(&s);
}

void TestSeqList2()
{
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 7);
	SeqListPushBack(&s, 8);
	SeqListPushBack(&s, 9);
	SeqListPrint(&s);
	SeqListErase(&s, 2);
	SeqListPrint(&s);
}


int main()
{
	/*TestSeqList1();*/
	TestSeqList2();
	return 0;
}