#include"Seqlist.h"
#include<Windows.h>
void testSeqlist()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushFront(&s, 0);
	SeqListPopFront(&s);
	SeqListPopBack(&s);
	SeqListInsert(&s, 0, 0);
	SeqListPrint(&s);
	SeqListDestory(&s);
}
int main()
{
	SeqList s;
	s._size = 0;
	testSeqlist();
	system("pause");
	return 0;
}