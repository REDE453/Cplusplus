#include"Heap.h"
//小堆
//左右子树都是小堆
void* AdjustDown(HPDataType* a, size_t n,int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child<n)
	{
		//找到小的孩子
		if (child<n&&a[child + 1] < a[child])
		{
			++child;
		}
		//孩子比父亲小交换继续往下调整
		//孩子比父亲大终止调整
		if (a[parent] > a[child])
		{
			HPDataType tmp = a[parent];
			a[parent] = a[child];
			a[child] = tmp;
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void* HeapInit(Heap* hp,HPDataType* a, size_t n)
{
//	Heap* hp = (Heap*)malloc(sizeof(Heap));
	hp->_a =(HPDataType*) malloc(sizeof(HPDataType)*n);
	memcpy(hp->_a, a, sizeof(HPDataType)*n);
	hp->_capacity = n;
	hp->_size = n;
	//建小堆
	//倒着走，从下面的数开始往上调
	//找倒数第一个非叶子节点所在的树，开始调，一直调到根
	for (int i = (n - 2) / 2; i<=0; --i)
	{
		AdjustDown(hp->_a, hp->_size, n);
	}
	return hp;
}
void HeapDestory(Heap* hp);
void HeapPush(Heap* hp, HPDataType x)
{
	if (hp->_size == hp->_capacity)
	{
		size_t newcapacity = hp->_capacity * 2;
		hp->_a = (HPDataType*)realloc(sizeof(HPDataType)*newcapacity);
		hp->_capacity = newcapacity;
	}
	hp->_a[hp->_size] = x;
	hp->_size++;
	AdjustUp(hp->_a, hp->_size - 1);
}
void HeapPop(Heap* hp);
HPDataType HeapTop(Heap* hp);
int HeapEmpty(Heap* hp);
void HeapPrint(Heap* hp)
{
	for (int i = 0; i < hp->_size; ++i)
	{
		printf("%d ",hp->_a[i]);
	}
	printf("\n");
}