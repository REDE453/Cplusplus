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
		//�����޸ĳ�Ա�����ˣ���Ϊconst������*this
	}
	//��Ա��������const��Ա����
	//void f1()     //void f1(date* this)
	//{
	//	f2();       //this->f2(this)���ԣ�����Ȩ�޵���С
	//}
	//void f2()const
	//{

	//}
	//void f3()     //void f3( date* this)
	//{

	//}
	//void f4()const   //void f4(const date*this)
	//{
	//	//f3();     //this->f3(this)��������Ȩ�޷Ŵ�
	//}
	//const Date* p1->*pָ��Ķ���
	//Date const * p2->*p2ָ��Ķ���
	//Date* const p3->p3ָ�뱾��
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
