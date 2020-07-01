//#include<iostream>
//#include<Windows.h>
//using namespace std;
//class Date
//{
//public:
//	Date(int year=0,int month=1,int day=1)
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
//	void Print()const
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//		//this->_year;
//		//不能修改成员变量了，因为const保护了*this
//	}
//	//成员函数调用const成员函数
//	void f1()     //void f1(Date* this)
//	{
//		f2();       //this->f2(this)可以，属于权限的缩小
//	}
//	void f2()const
//	{
//
//	}
//	void f3()     //void f3( Date* this)
//	{
//
//	}
//	void f4()const   //void f4(const Date*this)
//	{
//		f3();     //this->f3(this)不行属于权限放大
//	}
//private:   
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	system("pause");
//	return 0;
//}
