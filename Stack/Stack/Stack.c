#include <malloc.h>
#include <assert.h>
#include "Stack.h"

//˳���ʵ��ջ
void StackInit(Stack* st)
{
	assert(st);
	//��ջ
	st->_a = NULL;
	st->_top = st->_capacity = 0;
}
void StackDestory(Stack* st);

void StackPush(Stack* st, DataType x)
{
	assert(st);
	//��ջ�� ˳���β��
	//�������
	if (st->_top == st->_capacity)
	{
		size_t newC = st->_capacity == 0 ? 10 : 2 * st->_capacity;
		st->_a = (DataType*)realloc(st->_a, newC * sizeof(DataType));
		st->_capacity = newC;
	}
	//����
	st->_a[st->_top++] = x;
}
void StackPop(Stack* st)
{
	//��ջ�� βɾ
	assert(st);
	if (st->_top)
		--st->_top;

}

DataType StackTop(Stack* st)
{
	assert(st);
	return st->_a[st->_top - 1];
}
size_t StackSize(Stack* st)
{
	return st->_top;
}
int StackEmpty(Stack* st)
{
	assert(st);
	return st->_top == 0 ? 1 : 0;
}

void StackPrint(Stack* st)
{
	assert(st);
	while (StackEmpty(st) != 1)
	{
		printf("%d ", StackTop(st));
		StackPop(st);
	}
	printf("\n");
}

void testStack()
{
	Stack s;
	StackInit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	StackPush(&s, 5);
	StackPrint(&s);

}



int main()
{
	testStack();
	// ��ջ��1 2 3 4 5    ��ջ�� 1 2 3 4 5   /   3 2 1 4 5
	return 0;
}