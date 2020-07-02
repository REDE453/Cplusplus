#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;
class Date
{
public:
	int GetMonthDay(int year, int month) const;
	Date(int year = 0, int month = 1, int day = 1);
	Date(const Date& d);
	Date& operator=(const Date& d);
	bool operator<(const Date& d) const;   //只要成员函数中不需要修改成员变量最好都加上const
	bool operator==(const Date& d) const;
	bool operator<=(const Date& d) const;
	bool operator>(const Date& d) const;
	bool operator>=(const Date& d) const;
	bool operator!=(const Date& d) const;
	Date operator+(int day) const;
	Date operator-(int day) const;
	Date& operator+=(int day);
	Date& operator-=(int day);
	Date& operator++();
	Date operator++(int);     //为了构成重载
	Date& operator--();
	Date operator--(int);
	int  operator-(const Date& d) const;
	void print() const;
private:
	int _year;
	int _month;
	int _day;
};