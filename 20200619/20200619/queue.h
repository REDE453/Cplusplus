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
	QueueNode* _front; // 队头
	QueueNode* _rear; // 队尾
}Queue;
//初始化
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->_front = pq->_rear = NULL;
}
//销毁
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
//尾插
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
//出队
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
//获取队头元素
QUDataType QueueFront(Queue* pq)
{
	assert(pq);
	return pq->_front->_data;
}
//获取队尾元素
QUDataType QueueBack(Queue* pq)
{
	assert(pq);
	return pq->_rear->_data;
}
//判断队列是否为空
int QueueEmpty(Queue* pq)
{
	return pq->_front == NULL ? 1 : 0;
}
//获取队列中有效元素个数
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