#include"Date.h"
void Func( const Date& d3, const Date& d4)
{
	cout << d3 - d4 << endl;//d3.operator-(&d3,d4)d3的类型是const Date*
	cout << (d3 < d4) << endl;
}
int main()
{
	Date d1(2019, 7, 1);
	Date d2(2020, 7, 1);
	Func(d1, d2);
	cout << d1 - d2 << endl;//d1.operator-(&d1,d2)
	system("pause");
	return 0;
}