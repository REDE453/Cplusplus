#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;
void Func1(int a = 0)
{
	cout << a << endl;
}
//ȫȱʡ����
void Func2(int a = 0, int b = 10, int c = 20)
{
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}
//��ȱʡ����
//��ȱʡ������������������θ����������ܼ����
//ȱʡ���������ں��������Ͷ�����ͬʱ����
//ȱʡֵ�����ǳ�������ȫ�ֱ���
//test.h
//void Func(int a = 10);
//test.cpp
//void Func(int a = 20);
//���ͬʱ���ֲ���ǡ��ֵ��ͬ����ô�������Ͳ�֪�������Ǹ�ȱʡֵ
void Func3(int a, int b = 20, int c = 30)
{
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}
//�������أ���ͬһ�����������������������Ƶ�ͬ����������Щ�������β��б��������������ͣ�˳�򣩱��벻ͬ
int add(int a, int b)
{
	return a + b;
}
double add(double a, double b)
{
	return a + b;
}
long add(long a, long b)
{
	return a + b;
}
//void TestFunc(int a = 10)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//void TestFunc(int a)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//����-->���Ѿ����ڵı���ȡ��һ����������û�ж���һ���µı������������õı���������ͬ��һ���ڴ�ռ�
//�������ͺ�����ʵ�������ͬ���͵�
void TestRef()
{
	int a = 10;
	int& ra = a;
	cout << a << endl;
	cout << ra << endl;
}
//�����ڶ���ʱ�����ʼ����
//һ�����������ж�����ã�
//����һ������һ��ʵ�壬��������������ʵ��
void TestRef2()
{
	int a = 10;
	//int& ra;
	int& ra = a;
	int& rra = a;
	cout << a <<","<< ra <<", "<< rra << endl;
}
//������
void TestConstRef()
{
	const int a = 10;
	//int& ra = a;   // �������aΪ����
	const int& ra = a;
	//int& b = 10;   //�������bΪ����
	const int& b = 10;
	double d = 12.34;
	//int& rd = d;     //����������Ͳ�ͬ
	const int& rd = d;
}
//������
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//������ֵ
//int& testrefreturn)(int& a)
//{
//	a += 10;
//	return a;
//}
int& Add(int a, int b)
{
	int c = a + b;
	return c;
}
//struct A
//{
//	int a[10000];
//};
//void TestFunc1(A a)
//{}
//void TestFunc2(A& a)
//{}
//void TestRefAndValue()
//{
//	A a;
//	//��ֵ��Ϊ��������
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//	{
//		TestFunc1(a);
//	}
//	size_t end1 = clock();
//	//��������Ϊ��������
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//	{
//		TestFunc2(a);
//	}
//	size_t end2 = clock();
//	//�ֱ���������������н������ʱ��
//	cout << "TestFunc1(int*)-time" << end1 - begin1 << endl;
//	cout << "TestFunc2(int&)-time" << end2 - begin2 << endl;
//}
//ֵ��������Ϊ����ֵ���͵����ܱȽ�
//struct A
//{
//	int a[10000];
//};
//A a;
//A TestFunc1()
//{
//	return a;
//}
//A& TestFunc2()
//{
//	return a;
//}
//void TestReturnByRefOrValue()
//{
//	//��ֵ��Ϊ�����ķ���ֵ����
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//	{
//		TestFunc1();
//	}
//	size_t end1 = clock();
//	//��������Ϊ��������ֵ����
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//	{
//		TestFunc2();
//	}
//	size_t end2 = clock();
//	//������������������ɺ��ʱ��
//		cout << "TestFunc1-time" << end1 - begin1 << endl;
//	    cout << "TestFunc2-time" << end2 - begin2 << endl;
//}
int main()
{
//	int a = 10;
//	int& ra = a;
//	ra = 20;
//	int* pa = &a;
//	*pa = 20;
//	int a = 10;
//	int& ra = a;
//	cout << "&a=" << &a << endl;
//	cout << "&ra=" << &ra << endl;
	//for (int i = 0; i < 10; ++i)
	//{
	//	TestReturnByRefOrValue();
	//}
	//int& ret = Add(1, 2);
	//Add(3, 4);
	//cout << "Add(1,2) is :" << ret << endl;
	//TestRef2();
	//add(10, 20);
	//add(10.0, 20.0);
	//add(10L, 20L);
	//Func1();           //û������ʱ��ʹ�ò�����Ĭ��ֵ
	//Func1(10);       //����ʱ��ʹ��ָ���Ķ���
	//Func2();
	//Func3(1);
	system("pause");
	return 0;
}