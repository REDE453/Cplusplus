#include<iostream>
#include<Windows.h>
using namespace std;
//class Date
//{
//public:
//	//代参构造
//	//Date(int year,int month,int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	////无参构造
//	//Date()
//	//{
//	//	_year = 0;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//	//全缺省
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//析构
//	~Date()
//	{}
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
////class Stack
////{
////public:
////	Stack(int n = 10)
////	{
////		_a = (int*)malloc(sizeof(int)*n);
////		_size = 0;
////		_capacity = n;
////	}
////	~Stack()
////	{
////		free(_a);
////		_a = nullptr;
////		_size = _capacity = 0;
////	}
////	void Push();
////	void Pop();
////	size_t size();
////private:
////	int*_a;
////	int _size;
////	int _capacity;
////};
//int main()
//{
//	//Date d1(2020, 6, 27);
//	//d1.Display();
//	//Date d2;   //不能加括号
//	//d2.Display();
//	system("pause");
//	return 0;
//}
class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
	}
	bool operator==(const Date& d)const
	{
		return _year == d._year&&
			_month == d._month&&
			_day == d._day;
	}
	bool operator!=(const Date& d)const
	{
		return _year != d._year ||
			_month != d._month ||
			_day != d._day;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2020, 6, 27);
	Date d2(d1);//调用拷贝构造
	d1.Print();
	d2.Print();
	d1 != d2;
	system("pause");
	return 0;
}