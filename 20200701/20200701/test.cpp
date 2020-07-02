#include<iostream>
#include<windows.h>
using namespace std;
class date
{
public:
	date(int year=0,int month=1,int day=1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	date(const date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	void print()const
	{
		cout << _year << "-" << _month << "-" << _day << endl;
		//this->_year;
		//不能修改成员变量了，因为const保护了*this
	}
	//成员函数调用const成员函数
	//void f1()     //void f1(date* this)
	//{
	//	f2();       //this->f2(this)可以，属于权限的缩小
	//}
	//void f2()const
	//{

	//}
	//void f3()     //void f3( date* this)
	//{

	//}
	//void f4()const   //void f4(const date*this)
	//{
	//	//f3();     //this->f3(this)不行属于权限放大
	//}
	//const Date* p1->*p指向的对象
	//Date const * p2->*p2指向的对象
	//Date* const p3->p3指针本身
	date* operator&()
	{
		cout << "operator&" << endl;
		return this;
	}
private:   
	int _year;
	int _month;
	int _day;
};
int main()
{
	date d1;
	date d2;
	const date d3;
	cout << &d1 << endl;
	cout << &d2 << endl;
	cout << &d3 << endl;
	system("pause");
	return 0;
}
