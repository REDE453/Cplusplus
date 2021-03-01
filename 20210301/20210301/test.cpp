#include<iostream>
#include"inlineFunc.h"
using namespace std;
//void TestFinc()
//{}
//void TestFunc(int a)
//{}
//void TestFunc(double b)
//{}
//void TestFunc(int a, double b)
//{}
//void TestFunc(double a, int b)
//{}
//int TestFunc(double a,int b)
//{}
//void TestFunc()
//{}
//void TestFunc(int a=10)
//{}
//int main()
//{
//	TestFunc(100);
//	//TestFunc();
//	return 0;
//}
//int Add(int left, int right)
//{
//	return left + right;
//}
//double Add(double left, double right)
//{
//	return left + right;
//}
//char Add(char left, char right)
//{
//	return left + right;
//}
//int main()
//{
//	Add(1, 2);//int int
//	Add(1.0, 2.0);//double double
//	Add('1','2');
//	short a = 1;
//	short b = 2;
//	Add(a, b);//short short->编译器会尝试隐式类型转化调用int
//	Add("hello", "world");//尝试进行隐式类型转化失败
//	Add(1, 2.0);//int double
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int&ra = a;
//int&rra = a;
//	cout << &a << endl;
//	cout << &ra << endl;
//	ra = 100;
//	//double&rra = a;
//	return 0;
//}
//void Swap(int* left, int*right)
//{
//	int temp = *left;
//	*left = *right;
//	*right = temp;
//}
//void Swap(int&left, int&right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//函数的返回值类型是引用类型，
//在函数中返回的实体的生命中期必须不受函数结束的影响
//int& Add(int left, int right)
//{
//	int ret = left + right;
//	return ret;
//}
////比如返回全局变量||引用类型的参数
//int main()
//{
//	 int& a = Add(1, 2);
//	Add(2, 3);
//	Add(3, 4);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 100;
//	int& ra = a;
//	ra = 100;
//	return 0;
//}
//#define MAX_SIZE 10
//#define PI 3.14159
//
//int main()
//{
//	int r = 2;
//	double s = PI*r*r;
//	int array[MAX_SIZE];
//	for (int i = 0; i < MAX_SIZE; ++i)
//	{
//		array[i] = i + 1;
//	}
//	for (int i = 0; i < MAX_SIZE; ++i)
//	{
//		cout << array[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
//#define MAX(a,b) (a>b? a:b)
//const int& Max(const int& a, const int&b)
//{
//	return a > b ? a : b;
//}
//#define MUL(a,b) (a)*(b)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//MAX(a, "123");
//	cout << MAX(a,b) << endl;
//	cout << Max(a, b) << endl;
//	//MUL(2 + 3, 3 + 4)-->2+3*3+4
//	cout << MUL(2 + 3, 3 + 4) << endl;
//	return 0;
//}
//在C++中被const修饰的变量已经是常量,还具有宏替换的属性，只是const常量的替换发生在编译时
//在C语言中被const修饰的变量还是变量只是给变量的值不能被改变
//const double pi = "3.14";
//int main()
//{
//	int r = 2;
//	double s = pi * r*r;
//	const int size = 10;
//	int array[size];
//	const int a = 10;
//	int* pa = (int*)&a;
//	*pa = 100;
//	printf("%d\n", a);
//	printf("%d\n", *pa);
//	return 0;
//}
inline int Add(int a, int b)
{
	//Add(a, b);
	return a + b;
}
inline int MAX(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	cout << ret << endl;
	cout << MAX(++b, a) << endl;
	sub(a, b);
	return 0;
}