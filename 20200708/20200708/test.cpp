#include<iostream>
#include<Windows.h>
using namespace std;
//class Date
//{
//	//friend void f( Date& d);//��Ԫ����
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
//	//C++11����ʱ����ʼֵ����̬���ݳ�Ա����
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
class Date; // ǰ������
class Time
{
	friend class Date; // ����������Ϊʱ�������Ԫ�࣬�����������о�ֱ�ӷ���Time���е�˽�г�Ա����
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
		// ֱ�ӷ���ʱ����˽�еĳ�Ա����
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
