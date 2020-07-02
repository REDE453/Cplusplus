#include<iostream>
#include<Windows.h>
using namespace std;
//class Date
//{
//public:
//	//Date(int year = 0, int month = 1, int day = 1)
//	//{
//	//函数体内赋值
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	Date(int year = 0, int month=1, int day=1)
//		//初始化列表
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1 = (1);//构造
//	Date d2 = 2;//隐式类型的转化，构造出tmp(2)+在用tmp拷贝构造对(tmp)+优化成直接构造
//	Date d3 = d1;//拷贝构造
//	Date d4{ 1,2,4 };  //隐式类型转换c++11支持
//	int i = 1;
//	const double d = i;//隐式类型转换，会产生临时变量
//	system("pause");
//	return 0;
//}
//static成员
//设计出一个类A总共产生多少个对象
class A
{
public:
	A()
	{
		++n;
	}
	A(const A& a)
	{
		++n;
	}
	static int Get()   //没有this指针，函数中不能访问非静态成员
	{
		return n;
	}
private:
	static int n;//声明 不是属于某个对象，是属于类的所有对象，属于这个类
	//n不在对象中在静态区
};
int A::n = 0;
A& f1(A& a)
{
	return a;
}
int main()
{
	A a1;
	A a2;
	f1(a1);
	//n = 1;//谁都可以对n进行修改
	f1(a2);
	cout << a1.Get() << endl;
	cout << a2.Get() << endl;
	cout << A::Get() << endl;
	system("pause");
	return 0;
}