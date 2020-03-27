#include"SingleList.h"
#include<Windows.h>
void SingleListInit(SingleList* sl)
{

}
void SingleListDestroy();
SingleListNode* CreatNode(DataType x);
void SingleListPushBack(SingleList* sl, DataType x);
void SingleListPopBack(SingleList* sl);
void SingleListPushFront(SingleList* sl, DataType x);
void SingleListPopFront(SingleList* sl);
void SingleListInsertAfter(SingleListNode* pos, DataType x);
void SingleEraseAfter(SingleListNode* pos);
void SingleListRemove(SingleList* sl, DataType x);
void SingleListPrint(SingleList* sl);
