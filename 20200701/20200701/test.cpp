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
//		//�����޸ĳ�Ա�����ˣ���Ϊconst������*this
//	}
//	//��Ա��������const��Ա����
//	void f1()     //void f1(Date* this)
//	{
//		f2();       //this->f2(this)���ԣ�����Ȩ�޵���С
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
//		f3();     //this->f3(this)��������Ȩ�޷Ŵ�
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
