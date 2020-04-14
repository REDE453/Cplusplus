#include<iostream>
using namespace std;
int Day_of_Week(int year, int month, int day)
{
	if (1 == month || 2 == month)
	{
		month += 2;
		year -= 1;
	}
	int C = year / 100;
	year = year % 100;
	int week = (C / 4) - 2*C + year + (year / 4) + (13 * (month + 1) / 5) + day - 1;
	week = (week % 7 + 7) % 7;
	if (week == 0)
	{
		week = 7;
	}
	return week;
}
int Day_of_Demand(int year, int month, int count, int d_of_week)
{
	int week = Day_of_Week(year, month, 1);
	int day = 1 + (count - 1) * 7 + ((7 - week) + d_of_week) % 7;
	return day;
}
void Newyear_Day(int year)
{
	cout << year << "-01-01" << endl;
}
void Martin_Luther_King_Day(int year)
{
	cout << year << "-01-" <<Day_of_Demand(year,1,3,3)<< endl;
}
void President_Day(int year)
{
	cout << year << "-02-"<<Day_of_Demand(year,2,3,3)<< endl;
}
void Memorial_Day(int year)
{
	int week = Day_of_Week(year, 6, 1);
	int d = (week == 1) ? 6 : (week - 2);
	int day = 31 - d;
	cout << year << "-05-" << day << endl;
}
void National_Day(int year)
{
	cout << year << "-07-04" << endl;
}
void Labor_Day(int year)
{
	cout << year << "-09-0" <<Day_of_Demand(year,9,1,1)<< endl;
}
void Thanksgiving_Day(int year)
{
	cout << year << "-11-" << Day_of_Demand(year,11, 4, 4) << endl;
}
void Christmas_Day(int year)
{
	cout << year << "-12-25" << endl;
}
void festival(int year)
{
	Newyear_Day(year);
	Martin_Luther_King_Day(year);
	President_Day(year);
	Memorial_Day(year);
	National_Day(year);
	Labor_Day(year);
	Thanksgiving_Day(year);
	Christmas_Day(year);
}
int main()
{
	int year;
	while (cin >> year)
	{
		festival(year);
		cout << endl;
	}
return 0;
}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	while (cin >> a)
//	{
//		cout << a << " = ";
//		for (int i = 2; i <= a; ++i)
//		{
//			while (a != i)
//			{
//				if (a%i == 0)
//				{
//					cout << i << " * ";
//					a = a / i;
//				}
//				else
//					break;
//			}
//		}
//		cout << a << endl;
//	}
//	return 0;
//}
