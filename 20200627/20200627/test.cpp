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
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//	}
//	bool operator>(const Date& d)const
//	{
//		if (_year > d._year)
//			return true;
//		else if (_year == d._year&&_month > d._month)
//			return true;
//		else if (_year == d._year&&_month == d._month&&_day > d._day)
//			return true;
//		else
//			return false;
//	}
//	bool operator==(const Date& d)const
//	{
//		return _year == d._year&&
//			_month == d._month&&
//			_day == d._day;
//	}
//	bool operator!=(const Date& d)const
//	{
//		return _year != d._year &&
//			_month != d._month &&
//			_day != d._day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2020, 6, 27);
//	Date d2(d1);//调用拷贝构造
//	d1.Print();
//	d2.Print();
//	d1 != d2;
//	system("pause");
//	return 0;
//}
class Date
{
public:
	int GetMonthDay(int year, int month)
	{
		static int monthDays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}
		return monthDays[month];
	}
	Date(int year = 0, int month = 1, int day = 1)
	{
		if (year >= 0 && month >= 1 && month <= 12 && day >= 1&&day<=GetMonthDay(year,month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
		{
			cout << "非法日期" << endl;
		}
	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	Date& operator=(const Date& d)
	{
		if (this != &d)   //针对自己给自己赋值的判断
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	bool operator<(const Date& d)
	{
		if (_year < d._year)
			return true;
		else if (_year == d._year&&_month < d._month)
			return true;
		else if (_year == d._year&&_month == d._month&&_day < d._day)
			return true;
		else
			return false;
	}
	bool operator==(const Date& d)
	{
		return _year == d._year&&_month == d._month&&_day == d._day;
	}
	//d1 <= d2;
	//d1.operator<=(&d1, d2);
	bool operator<=(const Date& d)   //bool opreator<=(Date*this,consr Date& d)
	{
		return *this < d || *this == d;
	}
	bool operator>(const Date& d)
	{
		return !(*this <= d);
	}
	bool operator>=(const Date& d)
	{
		return !(*this < d);
	}
	bool operator!=(const Date& d)
	{
		return !(*this == d);
	}
	Date operator+(int day)
	{
		Date ret = *this;    //拷贝一个构造一个ret;
		ret._day += day;
		while (ret._day > GetMonthDay(ret._year, ret._month))
		{
			//如果日期的天不合法，就需要往月进位
			ret._day -= GetMonthDay(ret._year, ret._month);
			ret._month++;
			if (13 == ret._month)
			{
				ret._year++;
				ret._month = 1;
			}
		}
		return ret;
	}
	Date& operator+=(int day)
	{
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			++_month;
			if (13 == _month)
			{
				++_year;
				_month = 1;
			}
		}
		return *this;
	}
		void printf()
	{
		cout << _year << "-" << _month << "-" << _day<<endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2020, 6, 28);
	d1.printf();
	Date d2(2020, 6, 30);
	d2.printf();
	//cout << (d1 < d2) << endl;
	//cout << (d1 > d2) << endl;
	//cout << (d1 == d2) << endl;
	//cout << (d1 != d2) << endl;
	//cout << (d1 <= d2) << endl;
	//cout << (d1 >= d2) << endl;
	//Date d3=d1 + 100;
	Date d3;
	d3.printf();
	d3 = d1 = d2;
	d3.printf();
	system("pause");
	return 0;
}