#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
typedef int HPDataType;
	typedef struct Heap
{
	HPDataType* _a;
	size_t _size;
	size_t _capacity;
}Heap;
void* AdjustDown(HPDataType* a,size_t n, int root);
void* HeapInit(Heap* hp,HPDataType* a, size_t n);
void HeapDestory(Heap* hp);
void HeapPush(Heap* hp, HPDataType x);
void HeapPop(Heap* hp);
HPDataType HeapTop(Heap* hp);
int HeapEmpty(Heap* hp);
// ∂—≈≈–Ú
void HeapSort(int* a, int n);
void HeapPrint(Heap* hp);
void TestHeap();