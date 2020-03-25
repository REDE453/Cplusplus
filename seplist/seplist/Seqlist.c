#include"Seqlist.h"
#include<assert.h>
void SeqListInit(SeqList* psl)
{
	assert(psl);
	psl->_array = NULL;
	psl->_capicity = 0;
	psl->_size = 0;
}
void SeqListDestory(SeqList* psl)
{
	assert(psl);
	if (psl->_array)
	{
		free(psl->_array);
		psl->_array = NULL;
		psl->_capicity = psl->_size = 0;
	}
}
void CheckCapacity(SeqList* psl)
{
	assert(psl);
	if (psl->_size == psl->_capicity)
	{
		size_t NewCacacity = (psl->_capicity == 0 ? 5 : 2 * psl->_capicity);
		psl->_array = (SLDataType*)realloc(psl->_array, NewCacacity * sizeof(SLDataType));
		assert(psl->_array);
		psl->_capicity = NewCacacity;
	}
}
//Î²²å
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);
	psl->_array[psl->_size] = x;
	++psl->_size;
}
//Î²É¾
void SeqListPopBack(SeqList* psl)
{
	assert(psl);
	if (psl->_size > 0)
	{
		--psl->_size;
	}
}
//Í·²å
void SeqListPushFront(SeqList* psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);
	size_t end = psl->_size;
	while (end > 0)
	{
		psl->_array[end] = psl->_array[end - 1];
		--end;
	}
	psl->_array[0] = x;
	++psl->_size;
}
//Í·É¾
void SeqListPopFront(SeqList* psl)
{
	assert(psl&&psl->_size>0);
	size_t start = 0;
	while (start < psl->_size - 1)
	{
		psl->_array[start] = psl->_array[start + 1];
		++start;
	}
	--psl->_size;
}
int SeqListFind(SeqList* psl, SLDataType x)
{
	assert(psl);
	for (size_t i = 0; i < psl->_size; ++i)
	{
		if (psl->_array[i] == x)
		{
			return i;
		}
		else
		{
			return -1;
		}
	}
}
//²åÈë
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{
	assert(psl&&pos <= psl->_size);
	CheckCapacity(psl);
	size_t end = psl->_size;
	while (pos < end)
	{
		psl->_array[end] = psl->_array[end - 1];
		--end;
	}
	psl->_array[pos] = x;
	--psl->_size;
}
//É¾³ý
void SeqListErase(SeqList* psl, size_t pos)
{
	assert(psl&&pos < psl->_size);
	size_t start = pos + 1;
	while (start < psl->_size)
	{
		psl->_array[start - 1] = psl->_array[start];
		++start;
	}
	--psl->_size;
}
void SeqListRemoveAll(SeqList* psl, SLDataType x)
{
	assert(psl);
	size_t index = 0;
	for (size_t i = 0; i < psl->_size; ++i)
	{
		if (psl->_array[i] != x)
		{
			psl->_array[index] = psl->_array[i];
			++index;
		}
	}
	psl->_size = index;
}
void SeqListPrint(SeqList* psl)
{
	assert(psl);
	for (size_t i = 0; i < psl->_size; ++i)
	{
		printf("%d", psl->_array[i]);
	}
	printf("\n");
}