#include<iostream>
using namespace std;
//class Date {
//public:
	//void SetDate(int year, int month, int day)
	//{
	//	cout << this << endl;
	//	cout << typeid(this).name() << endl;
	//	//this = nullptr;
	//	this->_year = year;
	//	this->_month = month;
	//	this->_day = day;
	//}
	/*
		void SetDate(int year, int month, int day)
	{
		this->_year = year;
		this->_month = month;
		this->_day = day;
	}
	*/
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate ()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	//void TestThis()
//	//{
//	//	cout << this->_day << endl;
//	//	cout << this << endl;
//	//}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1, d2, d3;
//	//cout << this << endl;
//	cout << &d1 << endl;
//	d1.SetDate(2021, 3, 1);
//	d2.SetDate(2021, 3, 2);
//	d3.SetDate(2021, 3, 3);
//	d1.PrintDate();
//	d2.PrintDate();
//	d3.PrintDate();
//	return 0;
//}
class Date {
public:
	Date(int year,int month,int day)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int,int):" << this << endl;
	}
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void printDate()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
void TestDate()
{
	Date d2(2021, 3, 4);
	Date* p = new Date(2021, 3, 3);
	delete p;
}
int main()
{
	//Date d1;
	//d1.SetDate(2021, 3, 3);
	TestDate();
	return 0;
}
