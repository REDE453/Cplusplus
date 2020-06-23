#include<stdio.h>
#include"Heap.h"
void HeapSort(int* a, int n)
{
	for (int i = (n - 2) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);             
	}
	int end = n - 1;
	while (end > 0)
	{
		int tmp = a[end];
		a[end] = a[0];
		a[0] = tmp;
		AdjustDown(a, end, 0);
		--end;
		//for (int i = 0; i < n; ++i)
		//{
		//	printf("%d ", a[i]);
		//}
		//printf("\n");
	}
}
int main()
{
	int a[10] = { 27,15,19,34,65,37,25,49,28,18 };
	//HeapSort(a, 10);
	Heap hp;
	HeapInit(&hp, a, 10);
	HeapPrint(&hp);
	system("pause");
	return 0;
}