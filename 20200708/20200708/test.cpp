#include<iostream>
#include<Windows.h>
using namespace std;
//class Date
//{
//	//friend void f( Date& d);//友元函数
//	friend ostream& operator<<(ostream& out, const Date& d);
//	friend istream& operator>>(istream& in, Date& d);
//public:
//	Date(int year,int month,int day)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//	//void operator<<(ostream& out)
//	//{
//	//	cout << _year << "/" << _month << "/" << _day << endl;
//	//}
//	//void Print()
//	//{
//	//	cout << _year << "-" << _month << "-" << _day << endl;
//	//}
//private:
//	//C++11声明时给初始值，静态数据成员不行
//	int _year;
//	int _month;
//	int _day;
//	//static int _n;
//};
//ostream& operator<<(ostream& out,const Date& d)
//{
//	cout <<d. _year << "/" << d._month << "/" << d._day << endl;
//	return out;
//}
////cout->ostream
////cin - >istream
//istream& operator>>(istream& in, Date& d)
//{
//	in >> d._year >> d._month >> d._day;
//	return in;
//}
////int Date:: _n = 10;
////void f( Date& d)
////{
////	d._year = 10;
////	cout << d._year << endl;
////}
//int main()
//{
//	Date d1(2020, 1, 1);
//	Date d2(2020, 1, 2);
//	cin >> d1 >>d2;
//	cout << d1 << d2 << endl;
//	//cout << d1 << endl;
//	//d1.operator<<(cout);
//	//cout << d1;
//	//f(d1);
//	system("pause");
//	return 0;
//}
class Date; // 前置声明
class Time
{
	friend class Date; // 声明日期类为时间类的友元类，则在日期类中就直接访问Time类中的私有成员变量
public:
	Time(int hour, int minute, int second)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{}
	void SetTimeOfDate(int hour, int minute, int second)
	{
		// 直接访问时间类私有的成员变量
		_t._hour = hour;
		_t._minute = minute;
		_t._second = second;
	}
private:
	int _year;
	int _month;
	int _day;
	Time _t;
};
