#include"Heap.h"
//С��
//������������С��
void* AdjustDown(HPDataType* a, size_t n,int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child<n)
	{
		//�ҵ�С�ĺ���
		if (child<n&&a[child + 1] < a[child])
		{
			++child;
		}
		//���ӱȸ���С�����������µ���
		//���ӱȸ��״���ֹ����
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
	//��С��
	//�����ߣ������������ʼ���ϵ�
	//�ҵ�����һ����Ҷ�ӽڵ����ڵ�������ʼ����һֱ������
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