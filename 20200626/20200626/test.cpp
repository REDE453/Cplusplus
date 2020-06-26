#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;
void Func1(int a = 0)
{
	cout << a << endl;
}
//全缺省参数
void Func2(int a = 0, int b = 10, int c = 20)
{
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}
//半缺省参数
//半缺省参数必须从右往左依次给出来，不能间隔着
//缺省参数不能在函数声明和定义中同时出现
//缺省值必须是常量或者全局变量
//test.h
//void Func(int a = 10);
//test.cpp
//void Func(int a = 20);
//如果同时出现并且恰好值不同，那么编译器就不知道该用那个缺省值
void Func3(int a, int b = 20, int c = 30)
{
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}
//函数重载：在同一作用域中声明几个功能类似的同名函数，这些函数的形参列表（参数个数，类型，顺序）必须不同
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
//引用-->给已经存在的变量取了一个别名，并没有定义一个新的变量它和它引用的变量共用相同的一块内存空间
//引用类型和引用实体必须是同类型的
void TestRef()
{
	int a = 10;
	int& ra = a;
	cout << a << endl;
	cout << ra << endl;
}
//引用在定义时必须初始化；
//一个变量可以有多个引用；
//引用一但引用一个实体，不能再引用其他实体
void TestRef2()
{
	int a = 10;
	//int& ra;
	int& ra = a;
	int& rra = a;
	cout << a <<","<< ra <<", "<< rra << endl;
}
//常引用
void TestConstRef()
{
	const int a = 10;
	//int& ra = a;   // 编译出错，a为常量
	const int& ra = a;
	//int& b = 10;   //编译出错，b为常量
	const int& b = 10;
	double d = 12.34;
	//int& rd = d;     //编译出错，类型不同
	const int& rd = d;
}
//做参数
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//做返回值
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
//	//以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//	{
//		TestFunc1(a);
//	}
//	size_t end1 = clock();
//	//以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//	{
//		TestFunc2(a);
//	}
//	size_t end2 = clock();
//	//分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(int*)-time" << end1 - begin1 << endl;
//	cout << "TestFunc2(int&)-time" << end2 - begin2 << endl;
//}
//值和引用作为返回值类型的性能比较
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
//	//以值作为函数的返回值类型
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//	{
//		TestFunc1();
//	}
//	size_t end1 = clock();
//	//以引用作为函数返回值类型
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//	{
//		TestFunc2();
//	}
//	size_t end2 = clock();
//	//计算两个函数运算完成后的时间
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
	//Func1();           //没传参数时，使用参数的默认值
	//Func1(10);       //传参时，使用指定的对象
	//Func2();
	//Func3(1);
	system("pause");
	return 0;
}