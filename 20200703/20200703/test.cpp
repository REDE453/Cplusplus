#include<iostream>
#include<Windows.h>
using namespace std;
//class A
//{
//	void f1()
//	{
//
//	}
//	static void f2()
//	{
//		f1();
//	}
//	void f3()
//	{
//		f4();
//	}
//	static void f4()
//	{
//
//	}
//};
class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1)
		:_year(year)
		,_month(month)
		,_day(day)
	{
		
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	system("pause");
	return 0;
}