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
	//ͷ�������ͷ�
	free(plist->_head);
}
//����
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
// ��pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x);
{

}
// ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos);
{

}
void ListRemove(List* plist, LTDataType x)
{

}
void ListPrint(List* plist);
{

}