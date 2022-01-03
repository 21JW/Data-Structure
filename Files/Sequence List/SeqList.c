#include"SeqList.h"

void SeqListInit(SL *ps)
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->a == NULL)
	{
		printf("Fail to allocate a memory\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}

void SeqListCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size >= ps->capacity)
	{
		ps->capacity +=10;
		ps->a = (SLDataType*)realloc(ps->a,sizeof(SLDataType)*(ps->capacity));
		if (ps->a == NULL)
		{
			printf("Fail to expand the memory\n");
			exit(-1);
		}
	}
}

void SeqListPushBack(struct SeqList* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPrint(struct SeqList* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0;i < ps->size;i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListPopBack(struct SeqList* ps)
{
	assert(ps);
	ps->a[(ps->size) - 1] = 0;
	ps->size--;
}
void SeqListPushFront(struct SeqList* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	int end = (ps->size) - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(struct SeqList* ps)
{
	assert(ps);
	int start = 0;
	while (start <= (ps->size - 2))
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->a[(ps->size) - 1] = 0;
	(ps->size)--;
}


void SeqListInsert(struct SeqList* ps, int pos, SLDataType x)
{
	SeqListCheckCapacity(ps);
	int end = (ps->size) - 1;
	if (pos > end||pos<0)
	{
		printf("Error: Pos number is beyond limit.\n");
	}
	else
	{
		while ((end - pos) > 0)
		{
			ps->a[end + 1] = ps->a[end];
			--end;
		}
		ps->a[pos+1] = x;
		(ps->size)++;
	}
}

void SeqListErase(struct SeqList* ps, int pos)
{
	assert(ps);
	int end = (ps->size) - 1;
	int ptr = pos;
	if (pos > end || pos < 0)
	{
		printf("Error: Pos number is beyond limit.\n");
	}
	else
	{
		while ((end - pos) > 0)
		{
			ps->a[ptr] = ps->a[ptr+1];
			ptr++;
			--end;
		}
		ps->a[(ps->size) - 1] = 0;
		(ps->size)--;
	}
}
