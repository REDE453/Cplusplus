#include"List.h"
#include<stdio.h>
#include<assert.h>
#include<malloc.h>
void ListInit(List* plist)
{
	assert(plist);
	plist->_head = CreatListNode(0);
	plist->_head->_next = plist->_head;
	plist->_head->_prev = plist->_head;
}
void ListDestory(List* plist)
{
	assert(plist);
	ListNode* cur = plist->_head->_next;
	while (cur != plist->_head)
	{
		ListNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	//头结点最后释放
	free(plist->_head);
}
//增容
ListNode* CreatListNode(LTDataType x)
{
	ListNode* NewNode = (ListNode*)malloc(sizeof(ListNode));
	NewNode->_data = x;
	NewNode->_next = NewNode->_prev = 0;
	return NewNode;
}
void ListPushBack(List* plist, LTDataType x)
{

}
void ListPushBack(List* plist)
{

}
void ListPushFront(List* plist, LTDataType x)
{

}
void ListPopFront(List* plist)
{

}
ListNode* ListFind(List* plist, LTDataType x);
{

}
// 在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x);
{

}
// 删除pos位置的节点
void ListErase(ListNode* pos);
{

}
void ListRemove(List* plist, LTDataType x)
{

}
void ListPrint(List* plist);
{

}