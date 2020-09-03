#include<iostream>
#include<Windows.h>
using namespace std;

template<class T>
T add(const T&a, const T&b)
{
	return a + b;
}
template<class T1,class T2>
T2 Add(const T1&a, const T2&b)
{
	return a + b;
}
void test1()
{
	int a = 10, b = 20;
	char c = 'a', d = 'b';
	add(a, b);
	add<int>(a, c);
	Add(a, c);
	Add(c, d);
}
template<class T1,class T2, class T3>
class Date
{
public:
	Date(T1 year, T2 month, T3 day)
		:_year(year)
		,_month(month)
		,_day(day)
	{}
	void Display();
private:
	T1 _year;
	T2 _month;
	T3 _day;
};
//如果在类外定义类模板的成员函数，需加上泛型的声明
//作用域为“类名<泛型参数>"
template<class T1, class T2, class T3>
void Date<T1,T2, T3>::Display()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}
void test2()
{
	//类模板不能进行隐式实例化
	//Date d;
	//类模板
	//类型和类名不同
	//类型：类名<模板实际参数>
	Date<int, int, int> d(2020, 1, 1);
	d.Display();
}
int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}