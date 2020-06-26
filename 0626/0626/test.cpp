#include<iostream>
#include<Windows.h>
using namespace std;
//inline int Add(int a, int b)
//{
//	return a + b;
//}
//int TestAuto()
//{
//	return 10;
//}
//void TestFor1()
//{
//	int array[] = { 1,2,3,4,5 };
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		array[i] *= 2;
//	}
//	for (int* p = array; p < array + sizeof(array) / sizeof(array[0]); ++p)
//	{
//		cout << *p << endl;
//	}
//}
//void TestFor2()
//{
//	int array[] = { 1,2,3,4,5 };
//	for (auto& e : array)
//	{
//		e *= 2;
//	}
//	for (auto& e : array)
//	{
//		cout << e << " ";
//	}
//}
void TestPtr()
{
	int* p1 = NULL;
	int* p2 = 0;
}
void f(int)
{
	cout << "f(int)" << endl;
}
void f(int*)
{
	cout << "f(int*)" << endl;
}
int main()
{
	f(0);
	f(NULL);
	f((int*)NULL);
	//TestFor2();
	//int a = 10;
	//auto b = a;
	//auto c = 'a';
	//auto d = TestAuto();
	//int x = 10;
	//auto a = &x;
	//auto* b = &x;
	//auto& c = x;
	//cout << typeid(a).name() << endl;
	//cout << typeid(b).name() << endl;
	//cout << typeid(c).name() << endl;

	//int ret = 0;
	//ret = Add(1, 2);
	system("pause");
	return 0;
}