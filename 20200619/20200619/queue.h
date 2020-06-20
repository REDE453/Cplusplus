#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<assert.h>
#include<Windows.h>
typedef int QUDataType;
typedef struct QueueNode
{
	struct QueueNode* _next;
	QUDataType _data;
}QueueNode;
typedef struct Queue
{
	QueueNode* _front; // ��ͷ
	QueueNode* _rear; // ��β
}Queue;
//��ʼ��
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->_front = pq->_rear = NULL;
}
//����
void QueueDestory(Queue* pq)
{
	QueueNode* cur = pq->_front;
	while (cur)
	{
		QueueNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	pq->_front = pq->_rear = NULL;
}
//β��
void QueuePush(Queue* pq, QUDataType data)
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->_data = data;
	newnode->_next = NULL;
	if (pq->_rear == NULL)
	{
		pq->_rear = pq->_front = newnode;
	}
	else
	{
		pq->_rear->_next = newnode;
		pq->_rear = newnode;
	}
}
//����
void QueuePop(Queue* pq)
{
	assert(pq);
	if (pq->_front->_next == NULL)
	{
		free(pq->_front);
		pq->_front = pq->_rear = NULL;
	}
	else
	{
		QueueNode* next = pq->_front->_next;
		free(pq->_front);
		pq->_front = next;
	}
}
//��ȡ��ͷԪ��
QUDataType QueueFront(Queue* pq)
{
	assert(pq);
	return pq->_front->_data;
}
//��ȡ��βԪ��
QUDataType QueueBack(Queue* pq)
{
	assert(pq);
	return pq->_rear->_data;
}
//�ж϶����Ƿ�Ϊ��
int QueueEmpty(Queue* pq)
{
	return pq->_front == NULL ? 1 : 0;
}
//��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* pq)
{
	int n = 0;
	QueueNode* cur = pq->_front;
	while (cur)
	{
		n++;
		cur = cur->_next;
	}
	return n;
}
void TestQueue()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	while (!QueueEmpty(&q))
	{
		printf("%d\n", QueueFront(&q));
		QueuePop(&q);
	}
	QueueDestory(&q);
}