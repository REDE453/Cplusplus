#include<iostream>
#include<stack>
using namespace std;
//void BubbleSort(int array[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		for (int j = 1; j < i; ++j)
//		{
//			if (array[j] > array[j + 1])
//				swap(array[j], array[j + 1]);
//		}
//	}
//}
void InsertSort(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		int key = array[i];
		int end = i - 1;
		while(end>=0&&key < array[end])
		{
			array[end + 1] = array[end];
			--end;
		}
		array[end + 1] = key;
	}
}
int GetMiddleIndex(int array[], int left, int right)
{
	int mid = left + ((right - left) >> 2);
	if (array[left] < array[right - 1])
	{
		if (array[mid] < array[left])
			return left;
		else if (array[mid] > array[right - 1])
			return right - 1;
		else
			return mid;
	}
	else
	{
		if (array[mid] > array[left])
			return left;
		else if (array[mid] > array[right - 1])
			return right - 1;
		else
			return mid;
	}
}
int partion1(int array[], int left, int right)
{
	int midIdx = GetMiddleIndex(array, left, right);
	swap(array[midIdx], array[right - 1]);
	int key = array[right - 1];
	int begin = left;
	int end = right - 1;
	while (begin < end)
	{
		while (begin < end&&array[begin] <= key)
		{
			begin++;
		}
		while (begin<end&&array[end] >= key)
		{
			end--;
		}
		if (begin < end)
		{
			swap(array[begin], array[end]);
		}
	}
	if (begin != right - 1)
	swap(array[begin], array[right-1]);
	return begin;
}
int partion2(int array[], int left, int right)
{
	int midIdx = GetMiddleIndex(array, left, right);
	swap(array[midIdx], array[right - 1]);
	int key = array[right - 1];
	int begin = left;
	int end = right - 1;
	while (begin < end)
	{
		while (begin < end&&array[begin] <= key)
			begin++;
			if (begin < end)
			{
				array[end] = array[begin];
				--end;
			}
		while (begin < end&&array[end] >= key)
			end--;
			if (begin < end)
			{
				array[begin] = array[end];
				begin++;
			}
	}
	array[begin] = key;
	return begin;
}
int partion3(int array[], int left, int right)
{
	int midIdx = GetMiddleIndex(array, left, right);
	swap(array[midIdx], array[right - 1]);
	int key = array[right - 1];
	int cur = left;
	int prev = cur - 1;
	while (cur < right)
	{
		if (array[cur] < key&&++prev != cur)
		{
			swap(array[cur], array[prev]);
		}
		++cur;
	}
	if (++prev != right - 1)
	{
		swap(array[prev], array[right - 1]);
	}
	return prev;
}
void QuickSort(int array[], int left, int right)
{
	if (right - left < 16)
	{
		InsertSort(array + left, right - left);
	}
	else
	{
		int div = partion3(array, left, right);
		QuickSort(array, left, div);
		QuickSort(array, div + 1, right);
	}
}
void QuickSortNor(int array[], int size)
{
	stack<int> s;
	s.push(size);
	s.push(0);
	while (!s.empty())
	{
		int left = s.top();
		s.pop();
		int right = s.top();
		s.pop();
		if (right - left > 1)
		{
			int div = partion2(array, left, right);
			s.push(right);
			s.push(div+1);
			s.push(div);
			s.push(left);
		}
	}

}
void MergeData(int array[], int left, int mid, int right, int* temp)
{
	int begin1 = left, end1 = mid;
	int begin2 = mid, end2 = right;
	int index = left;
	while (begin1 < end1&&begin2 < end2)
	{
		if (array[begin1] <= array[begin2])
			temp[index++] = array[begin1++];
		else
			temp[index++] = array[begin2++];
	}
	while (begin1 < end1)
	{
		temp[index++] = array[begin1++];
	}
	while (begin2 < end2)
	{
		temp[index++] = array[begin2++];
	}
}
void _MergeSort(int array[], int left,int right,int* temp)
{
	if (right - left > 1)
	{
		int mid = left + ((right - left) >> 1);
		_MergeSort(array, left, mid, temp);
		_MergeSort(array, mid, right, temp);
		MergeData(array, left, mid, right, temp);
		memcpy(array + left, temp + left, sizeof(array[0])*(right-left));
	}
}
void MergeSort(int array[], int size)
{
	int* temp = new int[size];
	_MergeSort(array, 0, size, temp);
	delete[] temp;
}
void Print(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
int main()
{
	int array[] = { 3,8,2,9,4,6,0,7,1,5 };
	Print(array, sizeof(array) / sizeof(array[0]));
	//InsertSort(array, sizeof(array) / sizeof(array[0]));
	//QuickSort(array, 0, sizeof(array) / sizeof(array[0]));
	//QuickSortNor(array, sizeof(array) / sizeof(array[0]));
	MergeSort(array, sizeof(array) / sizeof(array[0]));
	Print(array, sizeof(array) / sizeof(array[0]));
	return 0;
}