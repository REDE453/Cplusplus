#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//class Time {
//public:
//	Time(int hour=0, int minute=0,int second=0)
//		:_hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{
//
//	}
//	Time(const Time& t)
//		:_hour(t._hour)
//		,_minute(t._minute)
//		,_second(t._second)
//	{
//	
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date {
//public:
//	Date(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//		cout << "Date(int,int,int):" << this << endl;
//	}
//	Date(const Date& d)
//		:_year(d._year)
//		,_month(d._month)
//		,_day(d._day)
//	{
//
//	}
//	~Date()
//	{
//		cout << "~Date()" << this << endl;
//	}
//	void PrintDate()const
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	void TestDate()
//	{
//		Date d1(2021, 3, 8);
//		Date d2(d1);
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	TestDate();
//	return 0;
//}
//class String
//{
//public:
//	String(const char* str = "")
//	{
//		if (nullptr == str)
//			str = "";
//
//		// +1的目的：要算\0，而strlen在求长度期间是没有将\0计算到里面的
//		_str = new char[strlen(str) + 1];
//		strcpy(_str, str);
//	}
//
//	~String()
//	{
//		if (_str)
//		{
//			delete[] _str;
//			_str = nullptr;
//		}
//	}
//private:
//	char* _str;
//};
//
//
//void TestString()
//{
//	String s1("hello");
//	String s2(s1);  // 调用编译器生成的默认的拷贝方式
//}
//
//int main()
//{
//	TestString();
//	return 0;
//}
class String {
public:
	String(const char* str="")
	{
		if (nullptr == str)
			str = "";
		//str一定指向了一个有限的字符串
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}
	String& operator=(const String& s)
	{
		if (this != &s)
		{
			//delete[] _str;
			//_str = new char[strlen(s._str) + 1];
			//strcpy(_str, s._str);
			char* temp = new char[strlen(s._str) + 1];
			strcpy(temp, s._str);
			delete[] _str;
			_str = temp;
		}
		return *this;
	}
	~String()
	{
		if (_str)
		{
			delete[] _str;
			_str = nullptr;
		}
	}
	String(const String& s)
		:_str(new char[strlen(s._str)+1])
	{
		strcpy(_str, s._str);
	}
private:
	char* _str;
};
void TestString()
{
	String s1("hello");
	String s2(s1);
}
void TestString2()

{
	String s1("hello");
	String s2;
	String s3("world");
	s1 = s3;
	s1 = s2;//s1.operator(s2)
	//s1 = s2 = s3;//s1.operator(s2.operator(s3))
}
int main()
{
	TestString();
	return 0;
}