#include"Date.h"

	int Date::GetMonthDay(int year, int month) const
	{
		static int monthDays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}
		return monthDays[month];
	}
	Date::Date(int year, int month , int day)
	{
		if (year >= 0 && month >= 1 && month <= 12 && day >= 1 && day <= GetMonthDay(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
		{
			cout << "�Ƿ�����" << endl;
		}
	}
	Date::Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	Date& Date::operator=(const Date& d)
	{
		if (this != &d)   //����Լ����Լ���ֵ���ж�
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	bool Date::operator<(const Date& d) const
	{
		if (_year < d._year)
			return true;
		else if (_year == d._year&&_month < d._month)
			return true;
		else if (_year == d._year&&_month == d._month&&_day < d._day)
			return true;
		else
			return false;
	}
	bool Date::operator==(const Date& d) const
	{
		return _year == d._year&&_month == d._month&&_day == d._day;
	}
	//d1 <= d2;
	//d1.operator<=(&d1, d2);
	bool Date::operator<=(const Date& d) const  //bool opreator<=(Date*this,consr Date& d)
	{
		return *this < d || *this == d;
	}
	bool Date::operator>(const Date& d) const
	{
		return !(*this <= d);
	}
	bool Date::operator>=(const Date& d) const
	{
		return !(*this < d);
	}
	bool Date::operator!=(const Date& d) const
	{
		return !(*this == d);
	}
	Date Date::operator+(int day) const
	{
		Date ret(*this);
		ret += day;     //ret.operator+=(day);
		return ret;
		//Date ret = *this;    //����һ������һ��ret;
		//ret._day += day;
		//while (ret._day > GetMonthDay(ret._year, ret._month))
		//{
		//	//������ڵ��첻�Ϸ�������Ҫ���½�λ
		//	ret._day -= GetMonthDay(ret._year, ret._month);
		//	ret._month++;
		//	if (13 == ret._month)
		//	{
		//		ret._year++;
		//		ret._month = 1;
		//	}
		//}
		//return ret;
	}
	Date& Date::operator+=(int day)
	{
		if (day < 0)
		{
			return *this -= -day;
		}
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			++_month;
			if (13 == _month)
			{
				++_year;
				_month = 1;
			}
		}
		return *this;
	}
	Date Date::operator-(int day) const
	{
		Date ret(*this);
		ret -= day;
		return ret;
	}
	Date& Date::operator-=(int day)
	{
		if (day < 0)
		{
			return *this -= -day;
		}
		_day -= day;
		while (_day <= 0)      //day���Ϸ�
		{
			--_month;
			if (_month == 0)
			{
				--_year;
				_month = 12;
			}
			_day += GetMonthDay(_year, _month);
		}
		return *this;
	}
	//++d1;=>d1.operator++(&d)
	Date& Date::operator++()
	{
		*this += 1;
		return *this;    //���ؼ�֮���ֵ
	}
	//d1++==>d1.operator++(&d,0)
	Date Date::operator++(int)     //Ϊ�˹�������
	{
		Date tmp(*this);
		*this += 1;
		return tmp;  //���ؼ�֮ǰ��ֵ
	}
	Date& Date::operator--()
	{
		*this -= 1;
		return *this;
	}
	Date Date::operator--(int)
	{
		Date tmp(*this);
		*this -= 1;
		return tmp;
	}
	int Date::operator-(const Date& d) const
	{
		Date max = *this;     //��������
		Date min = d;
		int flag = 1;
		if (*this < d)
		{
			max = d;     //��ֵ
			min = *this;
			flag = -1;
		}
		int n = 0;
		while (min != max)
		{
			++min;//����ǰ��++�ٵ���һ�ο�������
			++n;
		}
		return n * flag;
	}
	void Date::print() const
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}